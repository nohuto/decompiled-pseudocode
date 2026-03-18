/*
 * XREFs of HUBSM_AddEvent @ 0x14000A83C
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x140004914 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1400049B8 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x140005204 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_HubControlTransferComplete @ 0x140005370 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransfer @ 0x140005C54 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x140005F60 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x14000761C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x140007860 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_ResetHub @ 0x140007B10 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_ResetHubComplete @ 0x140007DB0 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x140007EDC (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x140008090 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x140008210 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x140008640 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x140008F30 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x140009070 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x140009210 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_ReadingUsb4DromStatus @ 0x140009340 (HUBHSM_ReadingUsb4DromStatus.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x140009B20 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_ReadingUsb4DromDwordOffset @ 0x140009C30 (HUBHSM_ReadingUsb4DromDwordOffset.c)
 *     HUBHSM_SendingAckForHubChange @ 0x140009DD0 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_SettingHubDepth @ 0x140009FA0 (HUBHSM_SettingHubDepth.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x14000A6C0 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_WritingUsb4DromMetaData @ 0x14000A750 (HUBHSM_WritingUsb4DromMetaData.c)
 *     HUBHSM_WritingUsb4DromReadOpcode @ 0x14000A7C0 (HUBHSM_WritingUsb4DromReadOpcode.c)
 *     HUBSM_AddDsmEvent @ 0x14000A820 (HUBSM_AddDsmEvent.c)
 *     HUBSM_AddHsmEvent @ 0x14000AD40 (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x14000AD60 (HUBSM_AddPsm20Event.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x14000D1D0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x14000D490 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x14000D900 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x14000DE00 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1400106A0 (HUBMUX_AckStopAfterSuspend.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x140010724 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x140010824 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010870 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1400114F4 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x140011724 (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x140011940 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x140011A74 (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x140011C78 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x140011DA0 (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x140011DDC (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x140011E84 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x140011FC8 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x140012064 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1400120A0 (HUBMUX_UnregisterWithHSM.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1400154D0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x140015900 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015B50 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x140017E48 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1400181A8 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x140018690 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_NoPingResponse @ 0x140019780 (HUBPDO_NoPingResponse.c)
 *     HUBPDO_PowerSettingCallback @ 0x140019BB0 (HUBPDO_PowerSettingCallback.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x14001FCF0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_ConfiguringDevice @ 0x1400216E0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x140021900 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x140021D60 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_DisablingU1 @ 0x140021FD0 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1400220F0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingLTM @ 0x1400222A0 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_EnablingU1 @ 0x140022370 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x140022440 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1400225B0 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1400227E0 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1400228A0 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x140022980 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x140022A20 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x140022AF0 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x140022B90 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x140022C30 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x140022CD0 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x140022DD0 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x140022E90 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x140022F30 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x140023020 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x140023BF0 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x140023D90 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x140024080 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x140024160 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x140024240 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1400242E0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_SetttingIsochDelay @ 0x140024BD0 (HUBDSM_SetttingIsochDelay.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x140026400 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x140026D7C (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x14002709C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_EvtResetActionCompletion @ 0x140027330 (HUBUCX_EvtResetActionCompletion.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1400273C4 (HUBUCX_ForwardRequestToUCX.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1400278FC (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x140027D70 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x140027E14 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x140028290 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x140028334 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x140028580 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028C5C (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028E60 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029784 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x140029A88 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x140029E10 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x14002A2F4 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A470 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x14002B07C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x14002B180 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x14002B284 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x14002B388 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x14002B448 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x14002B5DC (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x14002B720 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x14002B850 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x14002B8E0 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x14002BA00 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x14002BADC (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x14002BE5C (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x14002BF40 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x14002C054 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x14002C11C (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x14002C1FC (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBMISC_AttachDevice @ 0x14002E564 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x14002FC64 (HUBMISC_DetachDevice.c)
 *     HUBMISC_DsmEventTimer @ 0x14002FCC0 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_HubEventTimer @ 0x1400305A0 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_ReAttachDevice @ 0x140033674 (HUBMISC_ReAttachDevice.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x140042120 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x14000AEC8 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x14000BEE4 (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBSM_AddEvent(__int64 a1, int a2)
{
  __int64 v4; // rax
  KIRQL v5; // al
  __int64 v6; // rcx
  KIRQL v7; // si
  unsigned __int8 v8; // cl
  char v9; // r9
  char v10; // al
  unsigned __int8 i; // dl
  int v12; // r8d
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  KIRQL v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 960));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v4,
    "Add Event Tag",
    1136LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v6 = *(unsigned __int8 *)(a1 + 833);
  v7 = v5;
  v22 = v5;
  *(_DWORD *)(a1 + 4 * v6 + 768) = a2;
  *(_BYTE *)(a1 + 833) = (*(_BYTE *)(a1 + 833) + 1) & 0xF;
  if ( a2 == 3039 || a2 == 3043 || a2 == 4055 || a2 == 4059 )
  {
    v8 = *(_BYTE *)(a1 + 948);
    v9 = 0;
    v10 = *(_BYTE *)(a1 + 949);
    for ( i = v8; i != v10; i = (i + 1) & 0xF )
    {
      v12 = *(_DWORD *)(a1 + 4LL * i + 884);
      if ( v12 == a2 )
      {
        v9 = 1;
      }
      else
      {
        v13 = v8;
        v8 = (v8 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v13 + 884) = v12;
      }
      v10 = *(_BYTE *)(a1 + 949);
    }
    v14 = v8;
    if ( v8 != v10 )
    {
      do
      {
        v15 = v14 & 0xF;
        v14 = (v14 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v15 + 884) = 1000;
      }
      while ( v14 != *(_BYTE *)(a1 + 949) );
    }
    *(_BYTE *)(a1 + 949) = v8;
    if ( v9 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v7);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
      v22 = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 1048) )
  {
    if ( a2 == 1002 )
    {
      *(_BYTE *)(a1 + 1048) = 0;
      v16 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
      if ( v16 != 1003 )
      {
        v17 = v16;
LABEL_21:
        HUBSM_RunStateMachine(a1, v17, &v22, 0LL);
        v7 = v22;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
      *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    if ( !*(_BYTE *)(a1 + 848) )
    {
      v18 = *(_QWORD *)(a1 + 960);
      *(_BYTE *)(a1 + 848) = 1;
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v18);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v19,
        "State Machine Tag",
        1235LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v17 = 1000LL;
      goto LABEL_21;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v7);
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 960));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v20,
           "Add Event Tag",
           1252LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
}
