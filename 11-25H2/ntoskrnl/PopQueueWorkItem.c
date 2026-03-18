/*
 * XREFs of PopQueueWorkItem @ 0x140497BA0
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14046D188 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     PopDripsWatchdogTimerCallback @ 0x1404B4730 (PopDripsWatchdogTimerCallback.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404B5204 (PopPowerRequestUnrevokeRequests.c)
 *     PopNetEvaluationTimerCallback @ 0x1404BAD10 (PopNetEvaluationTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404CA980 (PopUpdatePowerButtonHoldState.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x1405C93D0 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405C9400 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PpmPerfTelemetryCallback @ 0x1405CE650 (PpmPerfTelemetryCallback.c)
 *     PopUserShutdownCalloutDelayTimerCallback @ 0x1405CF1B0 (PopUserShutdownCalloutDelayTimerCallback.c)
 *     PopThermalCsExit @ 0x1405CF254 (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x1405CF378 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x1405CF500 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405CF820 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x1405CF850 (PopKsrCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405D3920 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1405D3950 (PopPowerButtonTimerCallback.c)
 *     PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406EA150 (PopPowerAggregatorDisengageAggressiveStandbyActions.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopNetSetConnectivityConstraint @ 0x140750188 (PopNetSetConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x140750790 (PdcPoNetworkResiliency.c)
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 *     PopNotifyWin32kRequestStatus @ 0x140A1BFAC (PopNotifyWin32kRequestStatus.c)
 *     PopLidSwitchChangeCallback @ 0x140A2C670 (PopLidSwitchChangeCallback.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A3BFB8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopUpdateExternalDisplayState @ 0x140AB5944 (PopUpdateExternalDisplayState.c)
 *     PopNetClearConnectivityConstraint @ 0x140ABD87C (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
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
