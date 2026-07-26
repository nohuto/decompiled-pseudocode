/*
 * XREFs of ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0
 * Callers:
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x14003DEF0 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054A90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400A644C (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?HandlersSwappedEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B79C0 (-HandlersSwappedEntry@EntryFuncs@-$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055680 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMSwapOpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  int v4; // edx
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  __int64 (__fastcall *v6)(void *, struct _NDIS_PACKET *); // rcx
  char v7[4]; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Bu,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  a1->XState |= a2;
  ndisUpdateMiniportFakeStatus(a1);
  a1->SendPathType = NdisFakeSendPath;
  a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMFakeSendNetBufferLists;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    v4 = 0;
    do
    {
      if ( a1->MediaType != NdisMediumWan
        || (v6 = (__int64 (__fastcall *)(void *, struct _NDIS_PACKET *))ndisMFakeWanSend, (a1->Flags & 0x20000) != 0) )
      {
        v6 = ndisMFakeSend;
      }
      OpenQueue->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))v6;
      OpenQueue->SendPacketsHandler = ndisMFakeSendPackets;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMFakeReset;
      if ( (a1->XState & 0xF5) != 0 )
      {
        OpenQueue->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisMFakeRequest;
        OpenQueue->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMFakeOidRequest;
        OpenQueue->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMFakeDirectOidRequest;
      }
      OpenQueue->CancelSendPacketsHandler = 0LL;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    while ( OpenQueue );
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      92,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
}
