/*
 * XREFs of ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140033A10
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EA60 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400AFBBC (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140033C30 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

void __fastcall ndisMRestoreOpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  __int64 (__fastcall *v4)(_QWORD *, struct _NDIS_REQUEST *); // rdx
  __int64 v5; // rcx
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rax
  char v9[4]; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x59u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      *(_DWORD *)v9);
  }
  if ( ndisMiniportXStateClearFlag(a1, a2) )
  {
    HighestFilter = a1->HighestFilter;
    if ( HighestFilter && !HighestFilter->XState )
      HighestFilter->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    a1->SendPathType = a1->SavedSendPathType;
    a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
    a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      v4 = ndisLegacyRequest;
      do
      {
        OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
        OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
        OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
        OpenQueue->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
        OpenQueue->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
        OpenQueue->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
        OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      while ( OpenQueue );
    }
  }
  else
  {
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))McTemplateK0jqxd_EtwWriteTransfer)(
        v5,
        &KeptMiniportFakeHandlers,
        &a1->InterfaceGuid,
        &a1->InterfaceGuid,
        a1->IfIndex,
        (_NET_LUID_LH)a1->NetLuid.Value,
        a1->XState);
    if ( (a1->XState & 0xF5) == 0 )
    {
      MiniportNextOpen = a1->OpenQueue;
      if ( MiniportNextOpen )
      {
        v4 = ndisLegacyRequest;
        do
        {
          MiniportNextOpen->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
          MiniportNextOpen->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
          MiniportNextOpen->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
          MiniportNextOpen = MiniportNextOpen->MiniportNextOpen;
        }
        while ( MiniportNextOpen );
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v4,
      13,
      90,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  }
}
