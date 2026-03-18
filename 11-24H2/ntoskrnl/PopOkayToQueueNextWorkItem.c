/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1404A4D54
 * Callers:
 *     PopClearUserShutdownMarkerWorker @ 0x140749340 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1407499E0 (PopSetUserShutdownMarkerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140749CA0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14074FD20 (PpmPerfTelemetryWorker.c)
 *     PopThermalStateTransitionWorker @ 0x140754760 (PopThermalStateTransitionWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x14075C980 (PopNetRefreshTimerWorkerCallback.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075FC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075FF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x140761DE0 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopWin32kActivatorWorker @ 0x1409EE3D0 (PopWin32kActivatorWorker.c)
 *     PopBsdFlushWorker @ 0x140A6B8F0 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140A6B930 (PopBsdUpdateWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A9AC50 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x140AB48F0 (PopRecordLidStateWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B5F5B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
