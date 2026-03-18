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
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x14000D180 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x14000D440 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x14000D8B0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x14000DDB0 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x140010650 (HUBMUX_AckStopAfterSuspend.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1400106D4 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1400107D4 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010820 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1400114A4 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1400116D4 (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1400118F0 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x140011A24 (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x140011C28 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x140011D50 (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x140011D8C (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x140011E34 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x140011F78 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x140012014 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_UnregisterWithHSM @ 0x140012050 (HUBMUX_UnregisterWithHSM.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x140015430 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x140015860 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015AF0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x140017E38 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x140018198 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x140018680 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_NoPingResponse @ 0x140019760 (HUBPDO_NoPingResponse.c)
 *     HUBPDO_PowerSettingCallback @ 0x140019B90 (HUBPDO_PowerSettingCallback.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x14001FCB0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_ConfiguringDevice @ 0x1400216A0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1400218C0 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x140021D20 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_DisablingU1 @ 0x140021F90 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1400220B0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingLTM @ 0x140022260 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_EnablingU1 @ 0x140022330 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x140022400 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x140022570 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1400227A0 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x140022860 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x140022940 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1400229E0 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x140022AB0 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x140022B50 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x140022BF0 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x140022C90 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x140022D90 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x140022E50 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x140022EF0 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x140022FE0 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x140023BB0 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x140023D50 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x140024040 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x140024120 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x140024200 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1400242A0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_SetttingIsochDelay @ 0x140024B90 (HUBDSM_SetttingIsochDelay.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x140026370 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x140026BDC (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x140026EFC (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_EvtResetActionCompletion @ 0x140027190 (HUBUCX_EvtResetActionCompletion.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x140027224 (HUBUCX_ForwardRequestToUCX.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x14002775C (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x140027BD0 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x140027C74 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1400280F0 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x140028194 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1400283E0 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028AB4 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028CB0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1400295F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x140029918 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x140029CA0 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x14002A184 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A300 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x14002AF0C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x14002B010 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x14002B114 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x14002B218 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x14002B2D8 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x14002B46C (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x14002B5B0 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x14002B6E0 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x14002B770 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x14002B890 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x14002B96C (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x14002BCEC (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x14002BDD0 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x14002BEE4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x14002BFAC (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x14002C08C (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBMISC_AttachDevice @ 0x14002E3F4 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x14002FB38 (HUBMISC_DetachDevice.c)
 *     HUBMISC_DsmEventTimer @ 0x14002FB90 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_HubEventTimer @ 0x140030470 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_ReAttachDevice @ 0x140033424 (HUBMISC_ReAttachDevice.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1400418E0 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x14000AEC8 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x14000BEE4 (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
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
