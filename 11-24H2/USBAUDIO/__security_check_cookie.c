/*
 * XREFs of __security_check_cookie @ 0x14001BB10
 * Callers:
 *     WmiLogStreamPosition @ 0x140003710 (WmiLogStreamPosition.c)
 *     WmiLogEvent @ 0x1400069C8 (WmiLogEvent.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1400085E8 (McTemplateK0zq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14000BF9C (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000BFE0 (McTemplateK0q_EtwWriteTransfer.c)
 *     wil_details_RecordCachedUsage @ 0x14000CA84 (wil_details_RecordCachedUsage.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140014B90 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBD_CreateHandle @ 0x1400192D0 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x14001970C (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x140019D9C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x14001AF50 (_handle_error.c)
 *     _handle_errorf @ 0x14001B0D0 (_handle_errorf.c)
 *     RaiseException @ 0x14001B4D0 (RaiseException.c)
 *     _raise_exc_ex @ 0x14001B5E0 (_raise_exc_ex.c)
 *     IsClassDriverOnly @ 0x14002F324 (IsClassDriverOnly.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400302A8 (wil_details_UpdateFeatureConfiguredStates.c)
 *     TopologyProcessProcessUnit @ 0x140031D90 (TopologyProcessProcessUnit.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x140032160 (PropertyDrmAudioStream_SetContentId.c)
 *     USBDeviceIsBehindHub @ 0x140035038 (USBDeviceIsBehindHub.c)
 *     USBHwGetMicArrayDescriptor @ 0x140035438 (USBHwGetMicArrayDescriptor.c)
 *     USBParseConvertInterfaceToDataRange @ 0x140036AD8 (USBParseConvertInterfaceToDataRange.c)
 *     USBParseCreateInterfaceList @ 0x140037058 (USBParseCreateInterfaceList.c)
 *     USBParseExtensionUnit @ 0x1400372D0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x140037500 (USBParseFeatureUnit.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x140037D58 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 *     USBParseMIDIElement @ 0x1400383B0 (USBParseMIDIElement.c)
 *     USBParseMIDIInJack @ 0x1400385A0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x140038710 (USBParseMIDIOutJack.c)
 *     USBParseMixerUnit @ 0x140038920 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038C60 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140038F70 (USBParseSelectorUnit.c)
 *     PinMatchChannelConfigToFormat @ 0x14003B2EC (PinMatchChannelConfigToFormat.c)
 *     PropertyGetAudioPosition @ 0x14003C350 (PropertyGetAudioPosition.c)
 *     RegistryReadNameValue @ 0x14003C774 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1400403C0 (USBDeviceStart.c)
 *     PinCreate @ 0x1400416B0 (PinCreate.c)
 *     TopologyBuildFilterTopology @ 0x140041B1C (TopologyBuildFilterTopology.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1400423F0 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400425A8 (USBParseGetChannelConfigForUnit.c)
 *     USBParseTerminalUnit @ 0x140042740 (USBParseTerminalUnit.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14004313C (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
