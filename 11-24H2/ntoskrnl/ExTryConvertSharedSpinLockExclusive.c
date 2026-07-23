/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x14021A3F0
 * Callers:
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x140612548 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14021A8B8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // edi
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = SpinLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v5 = *(unsigned int *)SpinLock;
  if ( (*SpinLock & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedOr(v4, 0x40000000u);
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SpinLock, v5, v1, v2) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
      v5 = *(unsigned int *)v4;
      SpinLock = (PEX_SPIN_LOCK)(v5 & 0xFFFFFFFFBFFFFFFFuLL);
    }
    while ( (v5 & 0xBFFFFFFF) != 0x80000001 );
  }
  return 1;
}
