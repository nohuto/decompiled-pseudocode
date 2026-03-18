/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x1402C40D0
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     ExpAddTagForBigPages @ 0x1402C4180 (ExpAddTagForBigPages.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x140613F88 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402C4598 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  volatile LONG i; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  for ( i = *SpinLock; (*SpinLock & 0xBFFFFFFF) != 0x80000001; i = *SpinLock )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(SpinLock, 0x40000000u);
    if ( (++v1 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v1);
    }
    else
    {
      _mm_pause();
    }
  }
  return 1;
}
