/*
 * XREFs of PpmIdleSnapConcurrency @ 0x140230838
 * Callers:
 *     PpmParkSnapNodeStatistics @ 0x140230C2C (PpmParkSnapNodeStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall PpmIdleSnapConcurrency(PKSPIN_LOCK SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // bp
  KSPIN_LOCK v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  size_t v13; // r8
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  int v16; // ett

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = KeDisableInterrupts(v6, v5, v7, v8);
  KxAcquireSpinLock(SpinLock);
  v10 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v10 )
  {
    v11 = *((unsigned int *)SpinLock + 3);
    SpinLock[2] = PerformanceCounter.QuadPart;
    SpinLock[3] += PerformanceCounter.QuadPart - v10;
    SpinLock[v11 + 41] += PerformanceCounter.QuadPart - v10;
  }
  v12 = *(void **)a2;
  v13 = 8LL * *(unsigned int *)(a2 + 48);
  *(_QWORD *)(a2 + 24) = SpinLock[3];
  memmove(v12, SpinLock + 41, v13);
  result = KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( v9 )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
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
        result = KiRemoveSystemWorkPriorityKick();
    }
    _enable();
  }
  return result;
}
