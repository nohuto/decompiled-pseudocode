/*
 * XREFs of SSHSupportIsPlatformAoAc @ 0x14048B408
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x14074B360 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopUsb4DisplayPresenceUpdatedWorker @ 0x140758580 (PopUsb4DisplayPresenceUpdatedWorker.c)
 *     PopWnfInSupCallback @ 0x140758960 (PopWnfInSupCallback.c)
 *     PopSmartSuspendValidatePredictions @ 0x14075B4FC (PopSmartSuspendValidatePredictions.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761068 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopSystemIdleEventHandler @ 0x1409A0AD0 (PopSystemIdleEventHandler.c)
 *     PopValidatePowerSettingData @ 0x1409A3388 (PopValidatePowerSettingData.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A3ABE0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopGenericEventHandler @ 0x140A499D0 (PopGenericEventHandler.c)
 *     PopS0LowPowerIdleInfo @ 0x140A5D840 (PopS0LowPowerIdleInfo.c)
 *     PopConnectedStandbySettingCallback @ 0x140A71CC0 (PopConnectedStandbySettingCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140A85D68 (PopPdcCsDeviceNotification.c)
 *     PopDiagTraceCsEnterReason @ 0x140A8D620 (PopDiagTraceCsEnterReason.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A961C0 (PopExternalMonitorUpdatedWorker.c)
 *     PopSqmBatteryUpdate @ 0x140AA3C3C (PopSqmBatteryUpdate.c)
 *     PopNotifyLidStateChange @ 0x140AA6AB8 (PopNotifyLidStateChange.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopPdcRegister @ 0x140ABA068 (PopPdcRegister.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 *     PopDiagTraceCsExitReason @ 0x140ABCB20 (PopDiagTraceCsExitReason.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC54B0 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     <none>
 */

char SSHSupportIsPlatformAoAc()
{
  return PopPlatformAoAcCapabilityInitialized != 0 ? PopPlatformAoAc : 0;
}
