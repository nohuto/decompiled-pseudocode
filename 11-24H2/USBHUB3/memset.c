/*
 * XREFs of memset @ 0x140046900
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
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x14000CAAC (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x14000CBE4 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x14000CF40 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x14000E044 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E490 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000F044 (HUBFDO_SetupHubPostErrataQuery.c)
 *     RtlStringCbPrintfExW @ 0x14000F744 (RtlStringCbPrintfExW.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x140010650 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x140010EAC (HUBMUX_CreatePSM.c)
 *     HUBPDO_GetHubName @ 0x140018BCC (HUBPDO_GetHubName.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x140019E90 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B7B0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x14001BBA4 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     RtlStringCchPrintfExW @ 0x14001D350 (RtlStringCchPrintfExW.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x14001FF40 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x14002709C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1400278FC (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x140028334 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029784 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1400298C8 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BB78 (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BD48 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C490 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C940 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D190 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 *     HUBMISC_CreateNewDSM @ 0x14002F060 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1400305C4 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x14003150C (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400322C4 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D548 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003ECD0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003F430 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x140041080 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     USBDInternal_BuildServicePath @ 0x14004376C (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140043AF4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x140043E68 (USBD_CreateHandle.c)
 *     DereferenceDeviceResetInterface @ 0x140045978 (DereferenceDeviceResetInterface.c)
 *     CreateNewEventEntry @ 0x1400459D8 (CreateNewEventEntry.c)
 *     memset$thunk$772440563353939046 @ 0x140047020 (memset$thunk$772440563353939046.c)
 *     WppTraceCallback @ 0x140079200 (WppTraceCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x140079BE0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007BFEC (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007C5C8 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007C7A0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007C9D8 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007CC8C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007CEC8 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007D234 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007D658 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007DA34 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007DF00 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007E0E8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007E4B8 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBPDO_CreatePdoInternal @ 0x14008014C (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x14008332C (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140083D50 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x140086B68 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008A4A0 (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x14008BDF4 (HUBREG_UpdateUxdSettings.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008C9E0 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008D1EC (HUBACPI_EvaluateDsmMethod.c)
 *     WMI_AcquireHubName @ 0x14008E89C (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x14008F410 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterDevice @ 0x14008F698 (WMI_RegisterDevice.c)
 *     WMI_RegisterHub @ 0x14008F7D0 (WMI_RegisterHub.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x14008F9B4 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1400900DC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140091B40 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 *     SleepstudyHelperInitializeOnce @ 0x140092E80 (SleepstudyHelperInitializeOnce.c)
 *     QueryDeviceResetInterface @ 0x1400932E0 (QueryDeviceResetInterface.c)
 *     CreateTlgAggregateSession @ 0x1400935EC (CreateTlgAggregateSession.c)
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
