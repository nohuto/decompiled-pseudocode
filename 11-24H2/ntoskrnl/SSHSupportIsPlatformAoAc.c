/*
 * XREFs of SSHSupportIsPlatformAoAc @ 0x140490DC8
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x14074D030 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x14075A270 (PopWnfInSupCallback.c)
 *     PopSmartSuspendValidatePredictions @ 0x14075C560 (PopSmartSuspendValidatePredictions.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761CA4 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopUpdateSystemIdleContext @ 0x1409B99D4 (PopUpdateSystemIdleContext.c)
 *     PopSystemIdleEventHandler @ 0x1409BA480 (PopSystemIdleEventHandler.c)
 *     PopValidatePowerSettingData @ 0x1409BCD38 (PopValidatePowerSettingData.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A376A0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopGenericEventHandler @ 0x140A52140 (PopGenericEventHandler.c)
 *     PopS0LowPowerIdleInfo @ 0x140A65070 (PopS0LowPowerIdleInfo.c)
 *     PopConnectedStandbySettingCallback @ 0x140A77BA0 (PopConnectedStandbySettingCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140A89968 (PopPdcCsDeviceNotification.c)
 *     PopDiagTraceCsEnterReason @ 0x140A90F24 (PopDiagTraceCsEnterReason.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A9AC50 (PopExternalMonitorUpdatedWorker.c)
 *     PopSqmBatteryUpdate @ 0x140AA8B90 (PopSqmBatteryUpdate.c)
 *     PopNotifyLidStateChange @ 0x140AAB888 (PopNotifyLidStateChange.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopPdcRegister @ 0x140ABEFF8 (PopPdcRegister.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABFAB8 (PopSmartSuspendMakePredictions.c)
 *     PopDiagTraceCsExitReason @ 0x140AC1838 (PopDiagTraceCsExitReason.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC7A50 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     <none>
 */

char SSHSupportIsPlatformAoAc()
{
  return PopPlatformAoAcCapabilityInitialized != 0 ? PopPlatformAoAc : 0;
}
