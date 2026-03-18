/*
 * XREFs of PpmIdleSnapConcurrency @ 0x14027B2A8
 * Callers:
 *     PpmParkSnapNodeStatistics @ 0x14027B69C (PpmParkSnapNodeStatistics.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall PpmIdleSnapConcurrency(PKSPIN_LOCK SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // bp
  KSPIN_LOCK v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  size_t v12; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v16; // ett

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = KeDisableInterrupts(v6, v5, v7);
  KxAcquireSpinLock(SpinLock);
  v9 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v9 )
  {
    v10 = *((unsigned int *)SpinLock + 3);
    SpinLock[2] = PerformanceCounter.QuadPart;
    SpinLock[3] += PerformanceCounter.QuadPart - v9;
    SpinLock[v10 + 41] += PerformanceCounter.QuadPart - v9;
  }
  v11 = *(void **)a2;
  v12 = 8LL * *(unsigned int *)(a2 + 48);
  *(_QWORD *)(a2 + 24) = SpinLock[3];
  memmove(v11, SpinLock + 41, v12);
  result = KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v16 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v16 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
