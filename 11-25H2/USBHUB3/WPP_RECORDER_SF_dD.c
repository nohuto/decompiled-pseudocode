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
 *     HUBPSM30_SettingU1TImeOut @ 0x140014470 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1400145D0 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x140018BA0 (HUBPDO_GetHubName.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x140018FF4 (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x140019504 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_RecordFailure @ 0x14001A30C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B790 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x14001BE34 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C038 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x14001C3DC (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x140021140 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x140024A80 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1400255B0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028CB0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1400295F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A300 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BA08 (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BBD8 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C7D0 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002C9E0 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D020 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x140035E8C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036594 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x140036828 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037404 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x14003870C (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x140038E9C (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x140039FC4 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003A2F0 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003A89C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003B2F4 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003BBE4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003BF90 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x14003C5C4 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003CE94 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMSOSContainerIDDescriptorHeader @ 0x14003DC9C (HUBDESC_ValidateMSOSContainerIDDescriptorHeader.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003DE98 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x14003E044 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003E8A0 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x140041040 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1400418E0 (FWUPDATE_HubVendorControlTransferComplete.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E100 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F6E4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FD00 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1400843FC (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084E20 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x140085620 (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x140086298 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBREG_IsPortPLDRCapable @ 0x140088560 (HUBREG_IsPortPLDRCapable.c)
 *     HUBACPI_EvaluateDSD @ 0x14008DEC8 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E29C (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAD4 (HUBACPI_GetAcpiPortAttributes.c)
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
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
