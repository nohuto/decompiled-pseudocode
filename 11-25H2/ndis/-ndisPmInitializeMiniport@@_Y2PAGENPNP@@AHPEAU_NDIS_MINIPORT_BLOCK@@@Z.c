/*
 * XREFs of ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0
 * Callers:
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1401812C0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140028CB0 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003D0B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_qZD @ 0x140083E70 (WPP_RECORDER_SF_qZD.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848F0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140085AD0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x140087070 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140089000 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x14008EDC0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008FBA0 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098480 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009B188 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BFA4 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140171750 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401736E0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  int v2; // edx
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned __int8 MajorNdisVersion; // r15
  unsigned int v6; // esi
  unsigned __int8 SendFlags; // r14
  _NET_IF_MEDIA_CONNECT_STATE v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  PVOID v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v18; // edi
  unsigned int Flags; // eax
  _UNICODE_STRING *v20; // r9
  KIRQL v21; // al
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v23; // di
  unsigned int v24; // ecx
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  unsigned int v26; // ecx
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v32; // rcx
  int v33; // edx
  char v34; // si
  int v35; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v37; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v42[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v43; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+110h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+118h] [rbp+18h]
  _DWORD v47[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v48[224]; // [rsp+140h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v2 = 0;
  v42[0] = 0;
  v45 = 0LL;
  ifOperStatusFlags = 0;
  v41 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      46,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a1->Flags & 0x240) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    a1->Flags &= 0xFFFFFDBF;
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  v6 = a1->Flags & 0x7FCFFFDF;
  a1->PnPFlags &= ~0x10u;
  SendFlags = a1->SendFlags;
  a1->Flags = v6;
  ndisMDeQueueWorkItem(a1, NdisWorkItemMiniportCallback, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetInProgress, 0LL, 0LL);
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  v8 = MediaConnectStateDisconnected;
  a1->CurrentDevicePowerState = PowerDeviceD0;
  a1->State = NdisMiniportInitializing;
  memset(&v43, 0, sizeof(v43));
  memset(v48, 0, sizeof(v48));
  v9 = a1->Flags & 0xFFFFFFFE;
  a1->LinkStateIndicationFlags = 0;
  v10 = v9 | 0x20000002;
  a1->Flags = v10;
  if ( MajorNdisVersion >= 6u )
  {
    v47[1] = a1->DefaultPortSendControlState;
    v47[2] = a1->DefaultPortRcvControlState;
    v47[3] = a1->DefaultPortSendAuthorizationState;
    v47[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v47[0] = 1311104;
    v43.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v43.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v43.IMDeviceInstanceContext = a1->DeviceContext;
    v43.MiniportAddDeviceContext = a1->AddDeviceContext;
    v43.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v47;
    v43.NetLuid.Value = a1->NetLuid.Value;
    v43.IfIndex = a1->IfIndex;
    if ( (v10 & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v12 = ndisMInvokeInitialize(a1, &v43);
  }
  else
  {
    v11 = ndisMediumArray;
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v48;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v12 = ((__int64 (__fastcall *)(_DWORD *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
            v42,
            &v41,
            v11,
            15LL,
            a1,
            a1->ConfigurationHandle);
  }
  v18 = v12;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    pAdapterInstanceName = a1->pAdapterInstanceName;
    WPP_RECORDER_SF_qZD(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v15, v16, BugCheckParameter4);
  }
  if ( v18 )
  {
    a1->State = NdisMiniportHalted;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(pAdapterInstanceName) = v18;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x30u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1,
        pAdapterInstanceName);
    }
    if ( (byte_140125103 & 2) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v14,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v18,
        1,
        0);
    goto LABEL_23;
  }
  if ( !a1->GeneralAttributes )
  {
    v18 = -1073741823;
LABEL_23:
    ndisMDeregisterBugCheckHandler(a1);
    if ( a1->TimerQueue || a1->Interrupt || a1->InterruptEx )
    {
      v20 = a1->pAdapterInstanceName;
      if ( a1->Interrupt )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v20, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
      }
      if ( a1->InterruptEx )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v20, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v20, "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
    }
    Flags = a1->Flags;
    a1->PnPFlags |= 0x4000u;
    a1->Flags = Flags & 0x7FFFFFFE | 0x80000000;
    goto LABEL_70;
  }
  a1->State = NdisMiniportPaused;
  ndisMRegisterBugCheckHandler((char *)a1);
  v21 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  a1->PnPFlags &= 0xFFFDBFFB;
  v23 = v21;
  a1->MiniportThread = CurrentThread;
  LODWORD(CurrentThread) = a1->Flags & 0x20002040;
  a1->SendFlags = SendFlags;
  v24 = v6 & 0xDFFFDFFD | (unsigned int)CurrentThread;
  a1->Flags = v24;
  if ( MajorNdisVersion < 6u )
  {
    Interrupt = a1->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      v26 = v24 & 0xFFFFFFFE;
    else
      v26 = v24 | 1;
    a1->Flags = v26;
    if ( (v26 & 0x20000000) != 0 )
      v8 = MediaConnectStateConnected;
    a1->GeneralAttributes->MediaConnectState = v8;
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
    GeneralAttributes = a1->GeneralAttributes;
    a1->MiniportRcvLinkSpeed = GeneralAttributes->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = GeneralAttributes->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = GeneralAttributes->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = GeneralAttributes->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = a1->GeneralAttributes->MediaConnectState;
    v30 = a1->Flags;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      v31 = v30 | 0x20000000;
    else
      v31 = v30 & 0xDFFFFFFF;
    a1->Flags = v31;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    v32 = a1->GeneralAttributes;
    a1->RcvLinkSpeed = v32->RcvLinkSpeed;
    a1->XmitLinkSpeed = v32->XmitLinkSpeed;
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
  v34 = ndisIfSetInterfaceState(a1, 0, v23);
  if ( (a1->Flags & 0x20000000) != 0 )
    ndisMSetIndicatePacketHandler(a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v33,
      14,
      49,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  ndisSetWakeUpTimer(a1);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v23);
  ndisMDoOidRequest(a1);
  ndisMNotifyMachineName(a1);
  if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v35) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v35,
      1,
      50,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  if ( v34 && ndisMReferenceIfBlock(a1, 0xBu) )
  {
    IfBlock = a1->IfBlock;
    LODWORD(v45) = 786816;
    HIDWORD(v45) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v45;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    ndisMDereferenceIfBlock(a1, MPIFREF_PMINIT);
  }
  ndisUpdatePMCurrentCapabilities(a1);
  a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  v18 = 0;
  ndisLogMiniportEvent(a1, NdisMEvent_MiniportPmInitialized);
  if ( (a1->PMAdvertisedCapabilities.Flags & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( a1->SelectiveSuspend )
    {
      ndisSelectiveSuspendClearStop(a1, 9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendStop(a1, 7u);
    }
  }
  if ( a1->AoAc )
    ndisAoAcPmInitTempRef(a1);
LABEL_70:
  v37 = a1->GeneralAttributes;
  if ( v37 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v37, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(pAdapterInstanceName) = v18;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x33u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      pAdapterInstanceName);
  }
  return v18;
}
