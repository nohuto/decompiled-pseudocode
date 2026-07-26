/*
 * XREFs of ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003E220 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003F4C0 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003FB00 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisInitializeEvent @ 0x140054460 (NdisInitializeEvent.c)
 *     WPP_RECORDER_SF_qqZddZ @ 0x14005B6A0 (WPP_RECORDER_SF_qqZddZ.c)
 *     ?ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400655F0 (-ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009C094 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401761D0 (-ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176310 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  int v4; // r12d
  _QWORD *FakeMac; // r13
  int v9; // edx
  _QWORD *Pool2; // rax
  void (__fastcall *v11)(void *, _NDIS_OID_REQUEST *, int); // rax
  void (__fastcall *RequestCompleteHandler)(void *, _NDIS_REQUEST *, int); // rcx
  int (__fastcall *v13)(void *, _NDIS_PACKET *); // r15
  _NDIS_M_DRIVER_BLOCK **v14; // rax
  _NDIS_M_DRIVER_BLOCK **p_DriverHandle; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *CancelSendHandler)(void *, void *); // rcx
  _NDIS_M_DRIVER_BLOCK *v18; // rcx
  void (__fastcall *CancelSendPacketsHandler)(void *, void *); // rax
  int v20; // edx
  char v21; // cl
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  int v23; // edx
  _NDIS_STATUS_UNBIND_WORKITEM *v24; // rax
  __int64 PnPDeviceState; // rcx
  char v26; // bp
  KIRQL v27; // dl
  char v28; // bp
  __int64 v29; // r9
  struct _X_FILTER *EthDB; // rbp
  int OpenMulticastBuffer; // eax
  struct _GUID *v32; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  char v35; // [rsp+A0h] [rbp+8h]
  char v36; // [rsp+B0h] [rbp+18h]

  ProtocolHandle = a2->ProtocolHandle;
  v4 = 0;
  FakeMac = 0LL;
  v35 = 0;
  v36 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x29u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)ProtocolHandle,
      (char)a3);
  mem::ReadNoFence<unsigned long,void>(&a3->Flags);
  if ( !(unsigned __int8)ndisReferenceMiniport(a3, 0x2Eu) )
  {
    *a1 = -1073676286;
    goto LABEL_90;
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    FakeMac = a3->FakeMac;
    if ( !FakeMac )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 192LL, 1835418702LL);
      FakeMac = Pool2;
      if ( !Pool2 )
      {
        *a1 = -1073741670;
LABEL_89:
        ndisDereferenceMiniport(a3, 0x2Eu);
        goto LABEL_90;
      }
      a3->FakeMac = Pool2;
      v36 = 1;
    }
    a2->MacHandle = FakeMac;
  }
  a2->MiniportAdapterContext = a3->MiniportAdapterContext;
  a2->CurrentLookahead = LOWORD(a3->MiniportCurrentLookahead);
  KeInitializeSpinLock(&a2->SpinLock);
  ndisMReferenceOpen((__int64)a2, 1u);
  if ( a3->MajorNdisVersion < 6u )
  {
    a2->WSendHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.SendHandler;
    a2->WSendPacketsHandler = a3->WSendPacketsHandler;
    a2->WTransferDataHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.TransferDataHandler;
  }
  a2->ProtocolMajorVersion = ProtocolHandle->MajorNdisVersion;
  if ( a2->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    RequestCompleteHandler = 0LL;
    a2->ReceiveCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
    v11 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisInvokeOidRequestComplete;
  }
  else
  {
    a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendPacketCompleteToOpen;
    a2->ProtSendCompleteHandler = ProtocolHandle->SendCompleteHandler;
    a2->TransferDataCompleteHandler = ProtocolHandle->TransferDataCompleteHandler;
    a2->ReceiveHandler = ProtocolHandle->ReceiveHandler;
    a2->ReceiveCompleteHandler = ProtocolHandle->ReceiveCompleteHandler;
    a2->ResetCompleteHandler = ProtocolHandle->ResetCompleteHandler;
    a2->ReceivePacketHandler = ProtocolHandle->ReceivePacketHandler;
    v11 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisCompleteOidRequestToRequest;
    RequestCompleteHandler = ProtocolHandle->RequestCompleteHandler;
  }
  a2->RequestCompleteHandler = RequestCompleteHandler;
  v13 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  a2->OidRequestCompleteHandler = v11;
  a2->StatusHandler = ProtocolHandle->StatusHandler;
  a2->StatusCompleteHandler = ProtocolHandle->StatusCompleteHandler;
  a2->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
  a2->SendCompleteNdisPacketContext = a2->ProtocolBindingContext;
  a2->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
  a2->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
  a2->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
  a2->TransferDataHandler = (int (__fastcall *)(void *, void *, unsigned int, unsigned int, _NDIS_PACKET *, unsigned int *))ndisMTransferData;
  a2->BindingHandle = a2;
  if ( a3->MediaType == NdisMediumWan )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a3->Flags) & 0x20000) == 0 )
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  else
  {
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMSend;
  }
  a2->SendPacketsHandler = a3->SendPacketsHandler;
  if ( a3->MediaType == NdisMediumWan && (mem::ReadNoFence<unsigned long,void>(&a3->Flags) & 0x20000) == 0 )
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  if ( (mem::ReadNoFence<unsigned long,void>(&a3->Flags) & 0x20000) != 0 )
  {
    p_DriverHandle = &a3->DriverHandle;
    DriverHandle = a3->DriverHandle;
    if ( a3->MajorNdisVersion >= 6u )
    {
      a2->MiniportCoOidRequestHandler = DriverHandle->CoOidRequestHandler;
      a2->MiniportCoCreateVcHandler = (*p_DriverHandle)->CoCreateVcHandler;
      CancelSendHandler = (*p_DriverHandle)->MiniportDriverCharacteristics.CancelSendHandler;
    }
    else
    {
      a2->MiniportCoRequestHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler;
      a2->MiniportCoCreateVcHandler = (*p_DriverHandle)->MiniportCharacteristics.Ndis50Chars.CoCreateVcHandler;
      CancelSendHandler = (*p_DriverHandle)->MiniportCharacteristics.CancelSendPacketsHandler;
    }
    a2->CancelSendPacketsHandler = CancelSendHandler;
    a2->ActiveVcHead.Blink = &a2->ActiveVcHead;
    a2->ActiveVcHead.Flink = &a2->ActiveVcHead;
    a2->InactiveVcHead.Blink = &a2->InactiveVcHead;
    a2->InactiveVcHead.Flink = &a2->InactiveVcHead;
    v14 = &a3->DriverHandle;
    if ( !a2->SendHandler && !a2->SendPacketsHandler )
    {
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))NdisOffloadTcpForward;
      a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMRejectSendPackets;
      v14 = &a3->DriverHandle;
    }
  }
  else
  {
    v14 = &a3->DriverHandle;
  }
  v18 = *v14;
  if ( a3->MajorNdisVersion >= 6u )
    CancelSendPacketsHandler = v18->MiniportDriverCharacteristics.CancelSendHandler;
  else
    CancelSendPacketsHandler = v18->MiniportCharacteristics.CancelSendPacketsHandler;
  a2->CancelSendPacketsHandler = CancelSendPacketsHandler;
  ndisSetupNdis6OpenHandlers(a2, ProtocolHandle, a3);
  if ( a3->MajorNdisVersion < 6u || a2->ProtocolHandle->MajorNdisVersion >= 6u )
  {
    v21 = 0;
    if ( a2->ProtocolHandle->MajorNdisVersion >= 6u )
      goto LABEL_49;
  }
  else
  {
    v21 = 1;
  }
  if ( a3->Miniport5InNdis6Mode || v21 )
  {
    MiniportHandle = a2->MiniportHandle;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        6,
        147,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2);
    }
    a2->OpenFlags |= 0x10000000u;
    KeInitializeSpinLock(&a2->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
    a2->PnPState = Ndis5StateRunning;
    NdisInitializeEvent(&a2->PauseEvent);
    a2->OutstandingSends = 0;
    if ( MiniportHandle->MediaType != NdisMediumWan
      || (mem::ReadNoFence<unsigned long,void>(&MiniportHandle->Flags) & 0x20000) != 0 )
    {
      v13 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisSendWithPause;
    }
    a2->SendHandler = v13;
    a2->SendPacketsHandler = ndisSendPacketsWithPause;
    a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisSendCompleteWithPause;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v23,
        6,
        148,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2);
    }
    v24 = (_NDIS_STATUS_UNBIND_WORKITEM *)ExAllocatePool2(64LL, 88LL, 1769423950LL);
    a2->StatusUnbindWorkItem = v24;
    if ( !v24 )
      goto LABEL_87;
    v24->WorkItem.Context = a3;
    a2->StatusUnbindWorkItem->WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedStatusUnbindAdapter;
  }
LABEL_49:
  a2->SavedSendHandler = a2->SendHandler;
  a2->SavedSendPacketsHandler = a2->SendPacketsHandler;
  a2->SavedCancelSendPacketsHandler = a2->CancelSendPacketsHandler;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      6,
      110,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a3,
      (char)a2);
  }
  PnPDeviceState = (unsigned int)a3->PnPDeviceState;
  if ( (((_DWORD)PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || (_DWORD)PnPDeviceState == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        6,
        111,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a3,
        (char)a2);
    }
    if ( (byte_14011B101 & 2) != 0 )
    {
      LODWORD(v33) = (_DWORD)a2;
      LODWORD(v32) = a3->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        PnPDeviceState,
        (__int64)&OpenFailedMiniportNotStarted,
        (__int64)&a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        (__int64)v32,
        a3->NetLuid.Value,
        v33);
    }
    v26 = 0;
  }
  else
  {
    a2->MiniportNextOpen = a3->OpenQueue;
    ++a3->NumOpens;
    a3->OpenQueue = a2;
    ndisUpdateCheckForLoopbackFlag(a3);
    v26 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x70u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a3,
      (char)a2);
  if ( !v26 )
  {
LABEL_87:
    *a1 = -1073676281;
LABEL_88:
    ndisMDereferenceOpenFromFailedCreationLocked(a2);
    goto LABEL_89;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      6,
      46,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a2,
      (char)ProtocolHandle);
  }
  v27 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  if ( ProtocolHandle->Ref.Closing )
  {
    v28 = 0;
  }
  else
  {
    v28 = 1;
    a2->ProtocolNextOpen = ProtocolHandle->OpenQueue;
    ProtocolHandle->OpenQueue = a2;
  }
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x2Fu,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a2,
      (char)ProtocolHandle);
  if ( !v28 )
  {
    *a1 = -1073676281;
LABEL_85:
    ndisDeQueueOpenOnMiniport(a2, a3);
    if ( v35 )
      ndisDeQueueOpenOnProtocol(a2, ProtocolHandle);
    goto LABEL_88;
  }
  EthDB = a3->EthDB;
  v35 = 1;
  if ( EthDB )
    XNoteFilterOpenAdapter(EthDB, a2);
  if ( a3->MediaType == NdisMedium802_3 )
  {
    OpenMulticastBuffer = ethAllocateOpenMulticastBuffer(EthDB, a2);
    *a1 = OpenMulticastBuffer;
    if ( OpenMulticastBuffer )
    {
      *a1 = -1073676281;
      goto LABEL_82;
    }
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u && v36 )
  {
    FakeMac[10] = ndisMTransferData;
    FakeMac[11] = ndisMReset;
    FakeMac[12] = a2->RequestHandler;
    FakeMac[9] = a2->SendHandler;
  }
  *a1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZddZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ProtocolHandle->MajorNdisVersion,
      (__int64)&ProtocolHandle->Name,
      v29,
      (int)v32,
      (char)a3,
      (char)a2,
      &ProtocolHandle->Name.Length,
      ProtocolHandle->MajorNdisVersion,
      ProtocolHandle->MinorNdisVersion,
      &a3->pAdapterInstanceName->Length);
    v4 = *a1;
  }
  if ( v4 )
  {
    v35 = 1;
LABEL_82:
    if ( EthDB )
      XRemoveBindingFromLists(EthDB, a2);
    goto LABEL_85;
  }
LABEL_90:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = *a1;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      6u,
      0x2Bu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)ProtocolHandle,
      (char)a3,
      (char)a2,
      v34);
  }
}
