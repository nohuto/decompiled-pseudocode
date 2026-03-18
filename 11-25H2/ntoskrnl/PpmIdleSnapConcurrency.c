/*
 * XREFs of PpmIdleSnapConcurrency @ 0x140349840
 * Callers:
 *     PpmParkSnapNodeStatistics @ 0x140348F24 (PpmParkSnapNodeStatistics.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall PpmIdleSnapConcurrency(PKSPIN_LOCK SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  bool v5; // bp
  KSPIN_LOCK v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  size_t v9; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = KeDisableInterrupts();
  KxAcquireSpinLock(SpinLock);
  v6 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v6 )
  {
    v7 = *((unsigned int *)SpinLock + 3);
    SpinLock[2] = PerformanceCounter.QuadPart;
    SpinLock[3] += PerformanceCounter.QuadPart - v6;
    SpinLock[v7 + 41] += PerformanceCounter.QuadPart - v6;
  }
  v8 = *(void **)a2;
  v9 = 8LL * *(unsigned int *)(a2 + 48);
  *(_QWORD *)(a2 + 24) = SpinLock[3];
  memmove(v8, SpinLock + 41, v9);
  result = KxReleaseSpinLock(SpinLock);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v13 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v13 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
