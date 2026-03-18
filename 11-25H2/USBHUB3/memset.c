/*
 * XREFs of memset @ 0x1400460C0
 * Callers:
 *     memcpy_s @ 0x140001510 (memcpy_s.c)
 *     McGenControlCallbackV2 @ 0x1400018A0 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x140005C54 (HUBHTX_SendInterruptTransfer.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x14000761C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x140007860 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_ResetHub @ 0x140007B10 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x140007EDC (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_SetHubConfiguration @ 0x140008210 (HUBPARENT_SetHubConfiguration.c)
 *     HUBSM_FindAndSetTargetState @ 0x14000B6C0 (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x14000CA58 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x14000CB90 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x14000CEEC (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x14000DFF4 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E440 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000EFF4 (HUBFDO_SetupHubPostErrataQuery.c)
 *     RtlStringCbPrintfExW @ 0x14000F6F4 (RtlStringCbPrintfExW.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x140010600 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x140010E5C (HUBMUX_CreatePSM.c)
 *     HUBPDO_GetHubName @ 0x140018BA0 (HUBPDO_GetHubName.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x140019E70 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B790 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x14001BB84 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     RtlStringCchPrintfExW @ 0x14001D310 (RtlStringCchPrintfExW.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x14001FF00 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x140026EFC (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x14002775C (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x140028194 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1400295F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029738 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BA08 (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BBD8 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C320 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C7D0 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D020 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBMISC_ControlTransfer @ 0x14002EC7C (HUBMISC_ControlTransfer.c)
 *     HUBMISC_CreateNewDSM @ 0x14002EF34 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x140030494 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1400313D8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400320F0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003CE94 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003E5B0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003ED10 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x140040840 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     USBDInternal_BuildServicePath @ 0x140042F2C (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1400432B4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x140043628 (USBD_CreateHandle.c)
 *     DereferenceDeviceResetInterface @ 0x140045138 (DereferenceDeviceResetInterface.c)
 *     CreateNewEventEntry @ 0x140045198 (CreateNewEventEntry.c)
 *     memset$thunk$772440563353939046 @ 0x140047020 (memset$thunk$772440563353939046.c)
 *     WppTraceCallback @ 0x14007A200 (WppTraceCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007CEB8 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007D494 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007D66C (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007D8A4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007DB58 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DD94 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E100 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E524 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007E900 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007EDCC (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007EFB4 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007F384 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBPDO_CreatePdoInternal @ 0x1400811E8 (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1400843FC (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084E20 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x140087C20 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008B550 (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x14008CEA4 (HUBREG_UpdateUxdSettings.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008DA90 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E29C (HUBACPI_EvaluateDsmMethod.c)
 *     WMI_AcquireHubName @ 0x14008F94C (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x14008FDE0 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterDevice @ 0x140090068 (WMI_RegisterDevice.c)
 *     WMI_RegisterHub @ 0x1400901A0 (WMI_RegisterHub.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x140090384 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140090AAC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140092510 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 *     SleepstudyHelperInitializeOnce @ 0x140093850 (SleepstudyHelperInitializeOnce.c)
 *     QueryDeviceResetInterface @ 0x140093CB0 (QueryDeviceResetInterface.c)
 *     CreateTlgAggregateSession @ 0x140093FBC (CreateTlgAggregateSession.c)
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
