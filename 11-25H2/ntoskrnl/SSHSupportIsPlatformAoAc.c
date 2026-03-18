/*
 * XREFs of SSHSupportIsPlatformAoAc @ 0x140491754
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x140740F60 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x14074DC90 (PopWnfInSupCallback.c)
 *     NtSetThreadExecutionState @ 0x140962C60 (NtSetThreadExecutionState.c)
 *     PopValidatePowerSettingData @ 0x140964F88 (PopValidatePowerSettingData.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopS0LowPowerIdleInfo @ 0x140A1C4C0 (PopS0LowPowerIdleInfo.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A31D40 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopGenericEventHandler @ 0x140A4E750 (PopGenericEventHandler.c)
 *     PopConnectedStandbySettingCallback @ 0x140A75970 (PopConnectedStandbySettingCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140A84B78 (PopPdcCsDeviceNotification.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140A85450 (PopBroadcastInputSuppressionCallback.c)
 *     PopSystemIdleEventHandler @ 0x140A8ABD0 (PopSystemIdleEventHandler.c)
 *     PopDiagTraceCsEnterReason @ 0x140A8BE20 (PopDiagTraceCsEnterReason.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140A94F30 (PopExternalMonitorUpdatedWorker.c)
 *     PopSqmBatteryUpdate @ 0x140AA3B08 (PopSqmBatteryUpdate.c)
 *     PopNotifyLidStateChange @ 0x140AA62C8 (PopNotifyLidStateChange.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopPdcRegister @ 0x140AAE3F4 (PopPdcRegister.c)
 *     PopDiagTraceCsExitReason @ 0x140ABDA48 (PopDiagTraceCsExitReason.c)
 *     PopSmartSuspendMakePredictions @ 0x140AC3C7C (PopSmartSuspendMakePredictions.c)
 *     PopSmartSuspendValidatePredictions @ 0x140AC3F10 (PopSmartSuspendValidatePredictions.c)
 * Callees:
 *     <none>
 */

char SSHSupportIsPlatformAoAc()
{
  return PopPlatformAoAcCapabilityInitialized != 0 ? PopPlatformAoAc : 0;
}
