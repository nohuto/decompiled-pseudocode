/*
 * XREFs of KiIsPrcbThread @ 0x1402A6700
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiAdjustRescheduleContextForParking @ 0x1402A65D0 (KiAdjustRescheduleContextForParking.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C52A4 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C54F8 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess;
}
