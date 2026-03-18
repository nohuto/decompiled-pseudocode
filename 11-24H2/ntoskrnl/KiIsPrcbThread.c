/*
 * XREFs of KiIsPrcbThread @ 0x1403CA0D0
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140256790 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140298F10 (KiScheduleThreadToRescheduleContext.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiAdjustRescheduleContextForParking @ 0x1403C9FA0 (KiAdjustRescheduleContextForParking.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C7B74 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C7DC8 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess;
}
