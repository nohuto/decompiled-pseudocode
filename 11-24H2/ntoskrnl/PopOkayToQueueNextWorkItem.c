/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14049FAE4
 * Callers:
 *     PopClearUserShutdownMarkerWorker @ 0x140747670 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140747D10 (PopSetUserShutdownMarkerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140747FD0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14074E040 (PpmPerfTelemetryWorker.c)
 *     PopThermalStateTransitionWorker @ 0x140752A80 (PopThermalStateTransitionWorker.c)
 *     PopUsb4DisplayPresenceUpdatedWorker @ 0x140758580 (PopUsb4DisplayPresenceUpdatedWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x14075B920 (PopNetRefreshTimerWorkerCallback.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075EC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075EF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407611B0 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopWin32kActivatorWorker @ 0x1409EBE10 (PopWin32kActivatorWorker.c)
 *     PopBsdFlushWorker @ 0x140A64E50 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140A64E90 (PopBsdUpdateWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A961C0 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x140AAF860 (PopRecordLidStateWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B61630 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
