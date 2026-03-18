/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x1402FCD10
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExpAddTagForBigPages @ 0x1402FCDC0 (ExpAddTagForBigPages.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x140607FC8 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402FD1E8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  volatile signed __int32 *v2; // rbx
  volatile LONG v3; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  v2 = SpinLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v3 = *SpinLock;
  if ( (*SpinLock & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v3 & 0x40000000) == 0 )
        _InterlockedOr(v2, 0x40000000u);
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SpinLock) )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
      v3 = *v2;
      SpinLock = (PEX_SPIN_LOCK)*(unsigned int *)v2;
      LODWORD(SpinLock) = (unsigned int)SpinLock & 0xBFFFFFFF;
    }
    while ( (_DWORD)SpinLock != -2147483647 );
  }
  return 1;
}
