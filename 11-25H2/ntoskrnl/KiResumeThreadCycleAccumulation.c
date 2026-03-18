/*
 * XREFs of KiResumeThreadCycleAccumulation @ 0x140313A04
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x140330B40 (KiIdleSchedule.c)
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiStartThreadCycleAccumulation @ 0x14031AC90 (KiStartThreadCycleAccumulation.c)
 */

__int64 __fastcall KiResumeThreadCycleAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v6; // ett

  _disable();
  result = KiStartThreadCycleAccumulation(a1, a2, a3);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v6 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return result;
}
