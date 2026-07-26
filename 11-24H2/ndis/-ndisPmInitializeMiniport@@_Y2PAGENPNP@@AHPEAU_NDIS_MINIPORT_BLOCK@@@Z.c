/*
 * XREFs of ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10
 * Callers:
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140034E10 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052670 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZD @ 0x140068A40 (WPP_RECORDER_SF_qZD.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x14006B4D0 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140073380 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076E30 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F440 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140084010 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400864C0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008F418 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14008F740 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400926B0 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401412C8 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140165450 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C2F0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r14
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  unsigned __int8 MajorNdisVersion; // r13
  unsigned int Flags; // r15d
  unsigned __int8 SendFlags; // r12
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v13; // edi
  _UNICODE_STRING *v14; // r9
  KIRQL v15; // al
  unsigned __int8 v16; // r14
  unsigned int v17; // ecx
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  bool v19; // cf
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rax
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v22; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  unsigned __int8 v24; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v25; // rcx
  char v26; // di
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v28; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v33[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+118h] [rbp+18h]
  _DWORD v38[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v39[224]; // [rsp+140h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v33[0] = 0;
  v36 = 0LL;
  ifOperStatusFlags = 0;
  v32 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      46,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock
    && MiniportSGDmaBlock->DmaAdapterRefCount == 1
    && (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x240) != 0 )
  {
    a1->MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFDBF);
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0x7FCFFFDFu);
  a1->PnPFlags &= ~0x10u;
  Flags = a1->Flags;
  SendFlags = a1->SendFlags;
  ndisMDeQueueWorkItem(a1, NdisWorkItemMiniportCallback, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetInProgress, 0LL, 0LL);
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 2u);
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFE);
  a1->CurrentDevicePowerState = PowerDeviceD0;
  a1->State = NdisMiniportInitializing;
  memset(&v34, 0, sizeof(v34));
  memset(v39, 0, sizeof(v39));
  a1->LinkStateIndicationFlags = 0;
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
  if ( MajorNdisVersion >= 6u )
  {
    v38[1] = a1->DefaultPortSendControlState;
    v38[2] = a1->DefaultPortRcvControlState;
    v38[3] = a1->DefaultPortSendAuthorizationState;
    v38[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v38[0] = 1311104;
    v34.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v34.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v34.IMDeviceInstanceContext = a1->DeviceContext;
    v34.MiniportAddDeviceContext = a1->AddDeviceContext;
    v34.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v38;
    v34.NetLuid.Value = a1->NetLuid.Value;
    v34.IfIndex = a1->IfIndex;
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v7 = ndisMInvokeInitialize(a1, &v34);
  }
  else
  {
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v39;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v7 = ((__int64 (__fastcall *)(_DWORD *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
           v33,
           &v32,
           ndisMediumArray,
           15LL,
           a1,
           a1->ConfigurationHandle);
  }
  v13 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    pAdapterInstanceName = a1->pAdapterInstanceName;
    WPP_RECORDER_SF_qZD(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v10, v11, BugCheckParameter4);
  }
  if ( v13 )
  {
    a1->State = NdisMiniportHalted;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(pAdapterInstanceName) = v13;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x30u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1,
        pAdapterInstanceName);
    }
    if ( (byte_14011B103 & 2) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v9,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v13,
        1,
        0);
    goto LABEL_23;
  }
  if ( !a1->GeneralAttributes )
  {
    v13 = -1073741823;
LABEL_23:
    ndisMDeregisterBugCheckHandler(a1);
    if ( a1->TimerQueue || a1->Interrupt || a1->InterruptEx )
    {
      v14 = a1->pAdapterInstanceName;
      if ( a1->Interrupt )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v14, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
      }
      if ( a1->InterruptEx )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v14, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v14, "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
    }
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x80000000);
    a1->PnPFlags |= 0x4000u;
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFE);
    goto LABEL_72;
  }
  a1->State = NdisMiniportPaused;
  ndisMRegisterBugCheckHandler((char *)a1);
  v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  v16 = v15;
  v17 = a1->Flags & 0x20002040;
  a1->SendFlags = SendFlags;
  a1->PnPFlags &= 0xFFFDBFFF;
  a1->Flags = Flags & 0xDFFFDFFF | v17;
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFD);
  a1->PnPFlags &= ~4u;
  if ( MajorNdisVersion < 6u )
  {
    Interrupt = a1->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      a1->Flags &= ~1u;
    else
      a1->Flags |= 1u;
    v19 = (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000000) != 0;
    GeneralAttributes = a1->GeneralAttributes;
    if ( v19 )
      GeneralAttributes->MediaConnectState = MediaConnectStateConnected;
    else
      GeneralAttributes->MediaConnectState = MediaConnectStateDisconnected;
    a1->GeneralAttributes->MediaDuplexState = MediaDuplexStateUnknown;
    a1->GeneralAttributes->MaxXmitLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->XmitLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->MaxRcvLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->RcvLinkSpeed = 0x40000000LL;
  }
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = a1->GeneralAttributes->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    v22 = a1->GeneralAttributes;
    a1->MiniportRcvLinkSpeed = v22->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = v22->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = v22->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = v22->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = a1->GeneralAttributes->MediaConnectState;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
  }
  v24 = a1->LinkStateIndicationFlags;
  if ( (v24 & 2) == 0 )
  {
    v25 = a1->GeneralAttributes;
    a1->RcvLinkSpeed = v25->RcvLinkSpeed;
    a1->XmitLinkSpeed = v25->XmitLinkSpeed;
  }
  if ( (v24 & 4) == 0 )
    a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
  v26 = ndisIfSetInterfaceState(a1, 0, v16);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000000) != 0 )
    ndisMSetIndicatePacketHandler(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      49,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  ndisSetWakeUpTimer(a1);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v16);
  ndisMDoOidRequest(a1);
  ndisMNotifyMachineName(a1);
  if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3,
      1,
      50,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  if ( v26 && ndisMReferenceIfBlock(a1, 0xBu) )
  {
    IfBlock = a1->IfBlock;
    LODWORD(v36) = 786816;
    HIDWORD(v36) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v36;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    ndisMDereferenceIfBlock(a1, 0xBu);
  }
  ndisUpdatePMCurrentCapabilities(a1);
  a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  v13 = 0;
  ndisLogMiniportEvent(a1, NdisMEvent_MiniportPmInitialized);
  if ( (a1->PMAdvertisedCapabilities.Flags & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 9);
    if ( !(unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !a1->SelectiveSuspend )
        goto LABEL_70;
      goto LABEL_69;
    }
    if ( a1->SelectiveSuspend )
    {
      if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
      {
LABEL_69:
        ndisSelectiveSuspendStop(a1, 7u);
        goto LABEL_70;
      }
      ndisSelectiveSuspendStopWdf(a1, 7);
    }
  }
LABEL_70:
  if ( a1->AoAc )
    ndisAoAcPmInitTempRef(a1);
LABEL_72:
  v28 = a1->GeneralAttributes;
  if ( v28 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v28, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(pAdapterInstanceName) = v13;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x33u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      pAdapterInstanceName);
  }
  return v13;
}
