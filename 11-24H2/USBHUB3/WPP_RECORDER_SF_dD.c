/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1400025E4
 * Callers:
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1400031E0 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x140003AE0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_HubControlTransferComplete @ 0x140005370 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x140005550 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x140005F60 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x140006594 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x140008090 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x140008640 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1400144C0 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x140014620 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x140018BCC (HUBPDO_GetHubName.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x140019014 (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x140019524 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_RecordFailure @ 0x14001A32C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B7B0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x14001BE54 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C058 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x14001C420 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x140021180 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x140024AC0 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1400255F0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028E60 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029784 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A470 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BB78 (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BD48 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C940 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002CB50 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D190 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x14003615C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036864 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x140036AF8 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1400376D8 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x140038A08 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x140039500 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x14003A678 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003A9A4 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003AF50 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003B9A8 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C298 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003C644 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003CC78 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D548 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMSOSContainerIDDescriptorHeader @ 0x14003E3B4 (HUBDESC_ValidateMSOSContainerIDDescriptorHeader.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003E5B0 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x14003E75C (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003EFC0 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x140041880 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x140042120 (FWUPDATE_HubVendorControlTransferComplete.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007D234 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007E818 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007EE34 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x14008332C (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140083D50 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x140084550 (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1400851C8 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1400874B0 (HUBREG_IsPortPLDRCapable.c)
 *     HUBACPI_EvaluateDSD @ 0x14008CE18 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008D1EC (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008DA24 (HUBACPI_GetAcpiPortAttributes.c)
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, (__int64 *)va, 4LL, va1);
}
