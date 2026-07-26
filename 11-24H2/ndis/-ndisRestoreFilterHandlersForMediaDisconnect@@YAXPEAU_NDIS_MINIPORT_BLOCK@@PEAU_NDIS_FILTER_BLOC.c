/*
 * XREFs of ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007AC50
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032B30 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140033990 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140033CA0 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisRestoreFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // rsi
  bool v6; // zf
  __int64 v7; // rcx
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  struct _GUID *v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x51u,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a3 )
  {
    v6 = (a3->XState & 0xFE) == 0;
    a3->XState &= ~1u;
    if ( !v6 )
    {
      ndisUpdateFilterFakeStatus(a3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = a3->XState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x52u,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)a3,
          v10);
      }
      if ( Microsoft_Windows_NDISEnableBits < 0 )
      {
        LODWORD(v10) = a3->XState;
        LODWORD(v9) = a3->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)a3->IfBlock,
          (__int64)&KeptFilterFakeHandlers,
          (__int64)&a3->InterfaceGuid,
          (__int64)&a3->InterfaceGuid,
          (__int64)v9,
          a3->IfBlock->NetLuid.Value,
          v10);
      }
      goto LABEL_9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        13,
        80,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)a3);
    }
    a3->FilterSendNetBufferListsHandler = ndisFilterSendNetBufferLists;
    a3->FilterCancelSendNetBufferListsHandler = ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    v6 = (a1->XState & 0xFD) == 0;
    a1->XState &= ~2u;
    if ( !v6 )
    {
      ndisUpdateMiniportFakeStatus(a1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = a1->XState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x53u,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)a1,
          v10);
      }
      if ( Microsoft_Windows_NDISEnableBits < 0 )
      {
        LODWORD(v10) = a1->XState;
        LODWORD(v9) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v7,
          (__int64)&KeptMiniportFakeHandlers,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v9,
          a1->NetLuid.Value,
          v10);
      }
LABEL_9:
      if ( v4 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        13,
        79,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)a1);
    }
    OpenQueue = a1->OpenQueue;
    a1->SendPathType = a1->SavedSendPathType;
    a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
    for ( a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
          OpenQueue;
          OpenQueue = OpenQueue->MiniportNextOpen )
    {
      OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
      OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
      OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
    }
  }
  if ( !v4 )
  {
LABEL_10:
    a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
    a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
    goto LABEL_11;
  }
  v4->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x54u,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)v4,
      a3);
}
