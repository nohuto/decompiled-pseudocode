/*
 * XREFs of PpmIdleSnapConcurrencyIdleTime @ 0x14049071C
 * Callers:
 *     PopAccumulateNonDripsIdleCpuTime @ 0x1404904E0 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1404905D4 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PpmIdleSnapConcurrencyIdleTime(PKSPIN_LOCK SpinLock, _QWORD *a2, _QWORD *a3)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  bool v7; // bp
  KSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v14; // ett

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KeDisableInterrupts();
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v8 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v9 = PerformanceCounter.QuadPart - v8;
    v10 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v9;
    SpinLock[v10 + 41] += v9;
  }
  *a2 = SpinLock[3];
  *a3 = SpinLock[41];
  result = KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v14 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v14 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
