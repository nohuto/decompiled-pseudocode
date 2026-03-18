/*
 * XREFs of KiResumeThreadCycleAccumulation @ 0x14030CC20
 * Callers:
 *     KiIdleSchedule @ 0x140296C40 (KiIdleSchedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiStartThreadCycleAccumulation @ 0x14034ED50 (KiStartThreadCycleAccumulation.c)
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
