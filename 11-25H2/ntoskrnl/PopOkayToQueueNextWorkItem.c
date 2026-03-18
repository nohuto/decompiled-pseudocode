/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1404A4824
 * Callers:
 *     PopClearUserShutdownMarkerWorker @ 0x14073D330 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14073D960 (PopSetUserShutdownMarkerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14073DC20 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140743C50 (PpmPerfTelemetryWorker.c)
 *     PopThermalStateTransitionWorker @ 0x140748690 (PopThermalStateTransitionWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1407500C0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopDripsWatchdogCallbackWorker @ 0x140753080 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopWin32kActivatorWorker @ 0x14096C8E0 (PopWin32kActivatorWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C (PopDripsWatchdogScheduleNextTimer.c)
 *     PopBsdFlushWorker @ 0x140A68F50 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140A68F90 (PopBsdUpdateWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A94F30 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x140AAF900 (PopRecordLidStateWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B4F470 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
