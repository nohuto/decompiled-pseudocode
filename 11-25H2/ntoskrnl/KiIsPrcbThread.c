/*
 * XREFs of KiIsPrcbThread @ 0x140353BC0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiAdjustRescheduleContextForParking @ 0x140353A94 (KiAdjustRescheduleContextForParking.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C395C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C3BB0 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess;
}
