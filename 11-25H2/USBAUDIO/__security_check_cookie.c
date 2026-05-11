/*
 * XREFs of __security_check_cookie @ 0x14001C640
 * Callers:
 *     WmiLogStreamPosition @ 0x140003940 (WmiLogStreamPosition.c)
 *     WmiLogEvent @ 0x140006D2C (WmiLogEvent.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x140008B38 (McTemplateK0zq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14000BE84 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000BEC8 (McTemplateK0q_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14000CE54 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_RecordCachedUsage @ 0x14000D34C (wil_details_RecordCachedUsage.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156BC (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBD_CreateHandle @ 0x140019DFC (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x14001A238 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x14001A8CC (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x14001BA80 (_handle_error.c)
 *     _handle_errorf @ 0x14001BC00 (_handle_errorf.c)
 *     RaiseException @ 0x14001C000 (RaiseException.c)
 *     _raise_exc_ex @ 0x14001C110 (_raise_exc_ex.c)
 *     IsClassDriverOnly @ 0x14002F474 (IsClassDriverOnly.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1400300A8 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14003041C (wil_details_UpdateFeatureConfiguredStates.c)
 *     TopologyProcessProcessUnit @ 0x140031F00 (TopologyProcessProcessUnit.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1400322D0 (PropertyDrmAudioStream_SetContentId.c)
 *     USBDeviceIsBehindHub @ 0x140035358 (USBDeviceIsBehindHub.c)
 *     USBHwGetMicArrayDescriptor @ 0x140035758 (USBHwGetMicArrayDescriptor.c)
 *     USBParseConvertInterfaceToDataRange @ 0x140036DF8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCreateInterfaceList @ 0x140037378 (USBParseCreateInterfaceList.c)
 *     USBParseExtensionUnit @ 0x1400375F0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x140037820 (USBParseFeatureUnit.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x140038078 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseGetUnitString @ 0x1400384D4 (USBParseGetUnitString.c)
 *     USBParseMIDIElement @ 0x1400386D0 (USBParseMIDIElement.c)
 *     USBParseMIDIInJack @ 0x1400388C0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x140038A30 (USBParseMIDIOutJack.c)
 *     USBParseMixerUnit @ 0x140038C40 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038F80 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140039290 (USBParseSelectorUnit.c)
 *     PinCreate @ 0x14003B320 (PinCreate.c)
 *     PinMatchChannelConfigToFormat @ 0x14003BA4C (PinMatchChannelConfigToFormat.c)
 *     PropertyGetAudioPosition @ 0x14003CAB0 (PropertyGetAudioPosition.c)
 *     RegistryReadNameValue @ 0x14003CED4 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x140040B80 (USBDeviceStart.c)
 *     TopologyBuildFilterTopology @ 0x140041E6C (TopologyBuildFilterTopology.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042740 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400428F8 (USBParseGetChannelConfigForUnit.c)
 *     USBParseTerminalUnit @ 0x140042A90 (USBParseTerminalUnit.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140043168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
