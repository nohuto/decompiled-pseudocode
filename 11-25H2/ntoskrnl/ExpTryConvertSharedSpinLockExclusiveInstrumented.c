/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402FD1E8
 * Callers:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402FCD10 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpAddTagForBigPages @ 0x1402FCDC0 (ExpAddTagForBigPages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PerfLogSpinLockAcquire @ 0x14041FC48 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x1404C44C8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v3; // esi
  int v4; // r15d
  char v7; // bp
  unsigned int InterruptCount; // r14d
  __int64 i; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
    InterruptCount = 0;
  }
  else
  {
    v7 = 1;
    v11 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v11;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  for ( i = *(unsigned int *)a1; (i & 0xBFFFFFFF) != 0x80000001; i = *(unsigned int *)a1 )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(a1, 0x40000000u);
    if ( (++v3 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i) )
    {
      HvlNotifyLongSpinWait(v3);
    }
    else
    {
      _mm_pause();
    }
  }
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v3;
  if ( v7 )
  {
    PerfLogSpinLockRelease(a1, a2, __rdtsc());
    v12 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v12, v12 - v4, v3, InterruptCount, 4);
  }
  return 1LL;
}
