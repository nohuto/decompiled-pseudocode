/*
 * XREFs of PopQueueWorkItem @ 0x140497478
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14046BB18 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 *     PopDripsWatchdogTimerCallback @ 0x1404B4040 (PopDripsWatchdogTimerCallback.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404B4CB0 (PopPowerRequestUnrevokeRequests.c)
 *     PopNetEvaluationTimerCallback @ 0x1404B9C70 (PopNetEvaluationTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404CA678 (PopUpdatePowerButtonHoldState.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x1405CD9E0 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405CDA10 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PpmPerfTelemetryCallback @ 0x1405D2F30 (PpmPerfTelemetryCallback.c)
 *     PopUserShutdownCalloutDelayTimerCallback @ 0x1405D3BC0 (PopUserShutdownCalloutDelayTimerCallback.c)
 *     PopThermalCsExit @ 0x1405D3C64 (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x1405D3D88 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x1405D3F10 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405D4230 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x1405D4260 (PopKsrCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405D8300 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1405D8330 (PopPowerButtonTimerCallback.c)
 *     PopAdaptiveStandbyPolicyTimerCallback @ 0x1405DB310 (PopAdaptiveStandbyPolicyTimerCallback.c)
 *     PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406F5AAC (PopPowerAggregatorDisengageAggressiveStandbyActions.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140754120 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x14075CA48 (PopNetResiliencyPhaseStateChanged.c)
 *     PopNetSetConnectivityConstraint @ 0x14075CAB8 (PopNetSetConnectivityConstraint.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A407D8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopNotifyWin32kRequestStatus @ 0x140A68DD0 (PopNotifyWin32kRequestStatus.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopLidSwitchChangeCallback @ 0x140AA1AD0 (PopLidSwitchChangeCallback.c)
 *     PopUpdateExternalDisplayState @ 0x140AB9C84 (PopUpdateExternalDisplayState.c)
 *     PopNetClearConnectivityConstraint @ 0x140AC166C (PopNetClearConnectivityConstraint.c)
 *     PopNetResiliencyStateChanged @ 0x140AC9288 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
