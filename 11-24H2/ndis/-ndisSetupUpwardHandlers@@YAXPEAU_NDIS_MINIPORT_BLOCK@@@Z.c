/*
 * XREFs of ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F810
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F550 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400A29E4 (-ndisIsVerifierDummyHandler@@YA_NPEAX@Z.c)
 */

void __fastcall ndisSetupUpwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  int v3; // esi
  unsigned int StackFlags; // edx
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rcx
  bool v6; // r9
  unsigned int v7; // eax
  int v8; // edx
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  const struct _NDIS_FILTER_BLOCK *HigherFilter; // r10
  bool v11; // zf
  _QWORD *v12; // r8
  __int64 v13; // r10
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  void (__fastcall *v22)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *v23; // rax
  _NDIS_OBJECT_HEADER *v24; // rax
  __int64 v25; // r8
  void *v26; // rax
  _NDIS_MEDIUM MediaType; // ecx
  void (__fastcall *v28)(void *, _NDIS_PACKET **, unsigned int); // rax

  HighestFilter = a1->HighestFilter;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      71,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
  StackFlags = HighestFilter->StackFlags;
  HighestFilter->NextSendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  HighestFilter->NextSendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  HighestFilter->NextSendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  HighestFilter->NextSendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  HighestFilter->NextIndicateReceiveNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  HighestFilter->NextIndicateReceiveNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  HighestFilter->NextIndicateReceiveNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  HighestFilter->NextIndicateReceiveNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  OidRequestHandler = HighestFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler;
  v6 = OidRequestHandler != 0LL;
  v7 = StackFlags & 0xFFFFFFFE;
  v8 = StackFlags | 1;
  if ( !OidRequestHandler )
    v8 = v7;
  HighestFilter->StackFlags = v8;
  LowerFilter = HighestFilter->LowerFilter;
  for ( a1->ReceiveFilters = 0; LowerFilter; LowerFilter = (_NDIS_FILTER_BLOCK *)v12[14] )
  {
    HigherFilter = LowerFilter->HigherFilter;
    if ( v6 || !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
      LowerFilter->StackFlags &= ~1u;
    else
      LowerFilter->StackFlags |= 1u;
    v11 = !FILTER_TEST_FLAG(HigherFilter, 0x8000);
    v14 = v3 + 1;
    v15 = *(_QWORD *)(v13 + 592);
    if ( v11 )
      v14 = v3;
    v3 = v14;
    if ( v15 )
    {
      v12[58] = v15;
      v11 = !ndisIsVerifierDummyHandler(*(void **)(v13 + 592));
      v16 = v13;
      if ( v11 )
        v16 = *(_QWORD *)(v13 + 24);
      v12[59] = v16;
      v12[60] = *(_QWORD *)(v13 + 648);
      v17 = v13;
    }
    else
    {
      v12[58] = *(_QWORD *)(v13 + 464);
      v12[59] = *(_QWORD *)(v13 + 472);
      v12[60] = *(_QWORD *)(v13 + 480);
      v17 = *(_QWORD *)(v13 + 488);
    }
    v12[61] = v17;
    if ( *(_QWORD *)(v13 + 608) )
    {
      if ( !v3 )
        ++a1->ReceiveFilters;
      v12[62] = *(_QWORD *)(v13 + 608);
      v11 = !ndisIsVerifierDummyHandler(*(void **)(v13 + 608));
      v19 = v18;
      if ( v11 )
        v19 = *(_QWORD *)(v18 + 24);
      v12[63] = v19;
      v12[64] = *(_QWORD *)(v18 + 648);
    }
    else
    {
      v12[62] = *(_QWORD *)(v13 + 496);
      v12[63] = *(_QWORD *)(v13 + 504);
      v12[64] = *(_QWORD *)(v13 + 512);
      v18 = *(_QWORD *)(v13 + 520);
    }
    v12[65] = v18;
  }
  v11 = !FILTER_TEST_FLAG(a1->LowestFilter, 0x8000);
  v21 = v3 + 1;
  v22 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(v20 + 592);
  if ( v11 )
    v21 = v3;
  if ( v22 )
  {
    a1->Next.SendNetBufferListsCompleteHandler = v22;
    v11 = !ndisIsVerifierDummyHandler(*(void **)(v20 + 592));
    v23 = (void *)v20;
    if ( v11 )
      v23 = *(void **)(v20 + 24);
    a1->Next.SendNetBufferListsCompleteContext = v23;
    a1->Next.SendNetBufferListsCompleteTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v20 + 648);
    v24 = (_NDIS_OBJECT_HEADER *)v20;
  }
  else
  {
    a1->Next.SendNetBufferListsCompleteHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int))(v20 + 464);
    a1->Next.SendNetBufferListsCompleteContext = *(void **)(v20 + 472);
    a1->Next.SendNetBufferListsCompleteTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v20 + 480);
    v24 = *(_NDIS_OBJECT_HEADER **)(v20 + 488);
  }
  a1->Next.SendNetBufferListsCompleteObject = v24;
  if ( *(_QWORD *)(v20 + 608) )
  {
    if ( !v21 )
      ++a1->ReceiveFilters;
    a1->Next.IndicateNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v20 + 608);
    v11 = !ndisIsVerifierDummyHandler(*(void **)(v20 + 608));
    v26 = (void *)v25;
    if ( v11 )
      v26 = *(void **)(v25 + 24);
    a1->Next.IndicateNetBufferListsContext = v26;
    a1->Next.IndicateNetBufferListsTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v25 + 648);
  }
  else
  {
    a1->Next.IndicateNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))(v20 + 496);
    a1->Next.IndicateNetBufferListsContext = *(void **)(v20 + 504);
    a1->Next.IndicateNetBufferListsTracker = *(NDIS_NBL_TRACKER_HANDLE__ **)(v20 + 512);
    v25 = *(_QWORD *)(v20 + 520);
  }
  a1->Next.IndicateNetBufferListsObject = (_NDIS_OBJECT_HEADER *)v25;
  if ( v21 == 1 )
  {
    MediaType = a1->MediaType;
    if ( MediaType )
    {
      if ( MediaType == NdisMediumWan )
        goto LABEL_45;
      v28 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacket;
    }
    else
    {
      v28 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ethFilterDprIndicateReceivePacket;
    }
    a1->TopNdis5PacketIndicateHandler = v28;
  }
LABEL_45:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      72,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
}
