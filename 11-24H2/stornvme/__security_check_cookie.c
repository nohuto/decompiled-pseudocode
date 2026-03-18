/*
 * XREFs of __security_check_cookie @ 0x140030FC0
 * Callers:
 *     FormInquiryDeviceIdentifiersData @ 0x1400012F0 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryStandardData @ 0x140001BA0 (FormInquiryStandardData.c)
 *     ScsiReadWriteRequest @ 0x140003760 (ScsiReadWriteRequest.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     SetPrpFromSrb @ 0x140004B50 (SetPrpFromSrb.c)
 *     NVMeInitHostMemoryBuffer @ 0x140006BB0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeMapError @ 0x1400097F0 (NVMeMapError.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x14000B9A0 (CheckDpcWatchdogTimerExpireSoon.c)
 *     ScsiSyncCacheRequest @ 0x14000BA70 (ScsiSyncCacheRequest.c)
 *     ControllerEnable @ 0x14000C780 (ControllerEnable.c)
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     GetInterruptMessageInformation @ 0x1400169A0 (GetInterruptMessageInformation.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x14001890C (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x140018B04 (NVMeLogTelemetry.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140019318 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1400197DC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x14001BB70 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x14001DB68 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x14001E0C8 (NVMeInitStreams.c)
 *     FormInquirySerialNumberData @ 0x14001FFFC (FormInquirySerialNumberData.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14002158C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x140021758 (IoctlStorageStreamsGetParameters.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x140028120 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x14002AC14 (NVMeReenumerateNameSpaceRescan.c)
 *     ProcessMFNDChildControllerEventLog @ 0x14002CBB8 (ProcessMFNDChildControllerEventLog.c)
 *     GetDynamicRegistrySettings @ 0x14002D4E0 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x14002D764 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x14002FAF0 (GetRegistrySettingsForSpecificKey.c)
 *     SendNVMeEventNotification @ 0x14002FFC8 (SendNVMeEventNotification.c)
 *     NVMeSendControllerInternalData @ 0x1400301F4 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x140030914 (NVMeSendLunInternalData.c)
 *     wil_details_RecordCachedUsage @ 0x140030C5C (wil_details_RecordCachedUsage.c)
 *     __GSHandlerCheckCommon @ 0x140030E7C (__GSHandlerCheckCommon.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400442AC (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140046168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
