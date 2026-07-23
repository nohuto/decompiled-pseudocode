/*
 * XREFs of PopQueueWorkItem @ 0x140491E08
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x140464798 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 *     PopDripsWatchdogTimerCallback @ 0x1404AE860 (PopDripsWatchdogTimerCallback.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404AF4B0 (PopPowerRequestUnrevokeRequests.c)
 *     PopNetEvaluationTimerCallback @ 0x1404B4B10 (PopNetEvaluationTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404C3B98 (PopUpdatePowerButtonHoldState.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x1405CB150 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405CB180 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PpmPerfTelemetryCallback @ 0x1405D0650 (PpmPerfTelemetryCallback.c)
 *     PopUserShutdownCalloutDelayTimerCallback @ 0x1405D12E0 (PopUserShutdownCalloutDelayTimerCallback.c)
 *     PopThermalCsExit @ 0x1405D13D8 (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x1405D1508 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x1405D16D0 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405D19F0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x1405D1A20 (PopKsrCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405D5820 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1405D5850 (PopPowerButtonTimerCallback.c)
 *     PopAdaptiveStandbyPolicyTimerCallback @ 0x1405D85F0 (PopAdaptiveStandbyPolicyTimerCallback.c)
 *     PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406F3AAC (PopPowerAggregatorDisengageAggressiveStandbyActions.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopWnfUsb4DisplayPresenceCallback @ 0x1407585D0 (PopWnfUsb4DisplayPresenceCallback.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x14075B9E8 (PopNetResiliencyPhaseStateChanged.c)
 *     PopNetSetConnectivityConstraint @ 0x14075BA58 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayStateV1 @ 0x14075EA00 (PopUpdateExternalDisplayStateV1.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A360B8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopNotifyWin32kRequestStatus @ 0x140A62180 (PopNotifyWin32kRequestStatus.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopLidSwitchChangeCallback @ 0x140A9CE60 (PopLidSwitchChangeCallback.c)
 *     PopNetClearConnectivityConstraint @ 0x140ABC954 (PopNetClearConnectivityConstraint.c)
 *     PopNetResiliencyStateChanged @ 0x140AC71C0 (PopNetResiliencyStateChanged.c)
 *     PopUpdateExternalDisplayState @ 0x140AC8ECC (PopUpdateExternalDisplayState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
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
