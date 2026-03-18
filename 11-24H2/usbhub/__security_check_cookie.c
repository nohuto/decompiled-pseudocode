/*
 * XREFs of __security_check_cookie @ 0x140060F40
 * Callers:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000CF10 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhDisableTimerObject @ 0x140013F2C (UsbhDisableTimerObject.c)
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x140016DA8 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhCreateDevice @ 0x140017858 (UsbhCreateDevice.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14001C918 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhEtwLogDeviceInformation @ 0x140024C7C (UsbhEtwLogDeviceInformation.c)
 *     UsbhQueryBusRelations @ 0x140024E3C (UsbhQueryBusRelations.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140025A98 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 *     UsbhUpdateUxdSettings @ 0x14002A6CC (UsbhUpdateUxdSettings.c)
 *     UsbhGetGlobalUxdSettings @ 0x14002ACC4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubInformation @ 0x14002F554 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x14002F654 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1400302AC (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140030558 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhGetPerformanceInfo @ 0x140035A4C (UsbhGetPerformanceInfo.c)
 *     UsbhEtwLogDeviceDescription @ 0x140039BD4 (UsbhEtwLogDeviceDescription.c)
 *     UsbhAcpiEnumChildren @ 0x140039F00 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x14003A090 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x14003A828 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x14003A95C (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x14003AF44 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x14003D390 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1400418D8 (UsbhExtPropDescSemaphorePresent.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14004DF0C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_RecordCachedUsage @ 0x1400516C8 (wil_details_RecordCachedUsage.c)
 *     UsbhGetD3Policy @ 0x1400518A4 (UsbhGetD3Policy.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1400527B0 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054460 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhQuerySSstate @ 0x140057270 (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x140058340 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140058930 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x14005A590 (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x14005C3E0 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x14005D0DC (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005E9FC (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005EABC (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005EB8C (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x14005ED1C (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x14005EFA0 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x14005F23C (UsbhPropagateUxdState.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x14005FBF0 (WnfPublishUsbPartnerDualRoleFeatures.c)
 *     MyRegQueryUlong @ 0x140060CF4 (MyRegQueryUlong.c)
 *     __GSHandlerCheckCommon @ 0x140060DFC (__GSHandlerCheckCommon.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140077008 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14007793C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140078168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
