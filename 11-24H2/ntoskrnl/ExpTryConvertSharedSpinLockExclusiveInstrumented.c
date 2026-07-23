/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14021A8B8
 * Callers:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14021A3F0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PerfLogSpinLockAcquire @ 0x14040594C (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x1404BCBF4 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(
        volatile signed __int32 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v5; // esi
  int v6; // r15d
  unsigned __int64 v7; // r12
  char v9; // bp
  unsigned int InterruptCount; // r14d
  __int64 i; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    InterruptCount = 0;
  }
  else
  {
    v9 = 1;
    v13 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v13) << 32;
    v6 = v13;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  for ( i = *(unsigned int *)a1; (i & 0xBFFFFFFF) != 0x80000001; i = *(unsigned int *)a1 )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(a1, 0x40000000u);
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, a2, a3, a4) )
    {
      HvlNotifyLongSpinWait(v5);
    }
    else
    {
      _mm_pause();
    }
  }
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v5;
  if ( v9 )
  {
    PerfLogSpinLockRelease(a1, v7, __rdtsc());
    v14 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v14, v14 - v6, v5, InterruptCount, 4);
  }
  return 1LL;
}
