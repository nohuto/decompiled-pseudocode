/*
 * XREFs of ?ndisSetupUpwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018DC0
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018B00 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400AAB94 (-ndisIsVerifierDummyHandler@@YA_NPEAX@Z.c)
 */

void __fastcall ndisSetupUpwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // esi
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  unsigned int StackFlags; // edx
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rcx
  bool v6; // bp
  unsigned int v7; // eax
  int v8; // edx
  _NDIS_FILTER_BLOCK *LowerFilter; // rdi
  const struct _NDIS_FILTER_BLOCK *HigherFilter; // r14
  bool v11; // zf
  int v12; // ecx
  void (__fastcall *SendNetBufferListsCompleteHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *FilterModuleContext; // rax
  const struct _NDIS_FILTER_BLOCK *NextSendNetBufferListsCompleteObject; // rax
  void *v16; // rax
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  unsigned __int8 v18; // al
  int v19; // edx
  void (__fastcall *v20)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *v21; // rax
  _NDIS_OBJECT_HEADER *p_Header; // rax
  void *v23; // rax
  _NDIS_MEDIUM MediaType; // ecx
  void (__fastcall *v25)(void *, _NDIS_PACKET **, unsigned int); // rax

  v2 = 0;
  HighestFilter = a1->HighestFilter;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      70,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
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
  for ( a1->ReceiveFilters = 0; LowerFilter; LowerFilter = LowerFilter->LowerFilter )
  {
    HigherFilter = LowerFilter->HigherFilter;
    if ( v6 || !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
    {
      LowerFilter->StackFlags &= ~1u;
    }
    else
    {
      LowerFilter->StackFlags |= 1u;
      v6 = 1;
    }
    v11 = FILTER_TEST_FLAG(HigherFilter, 0x8000u) == 0;
    v12 = v2 + 1;
    SendNetBufferListsCompleteHandler = HigherFilter->Characteristics.SendNetBufferListsCompleteHandler;
    if ( v11 )
      v12 = v2;
    v2 = v12;
    if ( SendNetBufferListsCompleteHandler )
    {
      LowerFilter->NextSendNetBufferListsCompleteHandler = SendNetBufferListsCompleteHandler;
      v11 = !ndisIsVerifierDummyHandler(HigherFilter->Characteristics.SendNetBufferListsCompleteHandler);
      FilterModuleContext = (void *)HigherFilter;
      if ( v11 )
        FilterModuleContext = HigherFilter->FilterModuleContext;
      LowerFilter->NextSendNetBufferListsCompleteContext = FilterModuleContext;
      LowerFilter->NextSendNetBufferListsCompleteTracker = HigherFilter->NblTracker;
      NextSendNetBufferListsCompleteObject = HigherFilter;
    }
    else
    {
      LowerFilter->NextSendNetBufferListsCompleteHandler = HigherFilter->NextSendNetBufferListsCompleteHandler;
      LowerFilter->NextSendNetBufferListsCompleteContext = HigherFilter->NextSendNetBufferListsCompleteContext;
      LowerFilter->NextSendNetBufferListsCompleteTracker = HigherFilter->NextSendNetBufferListsCompleteTracker;
      NextSendNetBufferListsCompleteObject = (const struct _NDIS_FILTER_BLOCK *)HigherFilter->NextSendNetBufferListsCompleteObject;
    }
    LowerFilter->NextSendNetBufferListsCompleteObject = &NextSendNetBufferListsCompleteObject->Header;
    if ( HigherFilter->Characteristics.ReceiveNetBufferListsHandler )
    {
      if ( !v2 )
        ++a1->ReceiveFilters;
      LowerFilter->NextIndicateReceiveNetBufferListsHandler = HigherFilter->Characteristics.ReceiveNetBufferListsHandler;
      v11 = !ndisIsVerifierDummyHandler(HigherFilter->Characteristics.ReceiveNetBufferListsHandler);
      v16 = (void *)HigherFilter;
      if ( v11 )
        v16 = HigherFilter->FilterModuleContext;
      LowerFilter->NextIndicateReceiveNetBufferListsContext = v16;
      LowerFilter->NextIndicateReceiveNetBufferListsTracker = HigherFilter->NblTracker;
    }
    else
    {
      LowerFilter->NextIndicateReceiveNetBufferListsHandler = HigherFilter->NextIndicateReceiveNetBufferListsHandler;
      LowerFilter->NextIndicateReceiveNetBufferListsContext = HigherFilter->NextIndicateReceiveNetBufferListsContext;
      LowerFilter->NextIndicateReceiveNetBufferListsTracker = HigherFilter->NextIndicateReceiveNetBufferListsTracker;
      HigherFilter = (const struct _NDIS_FILTER_BLOCK *)HigherFilter->NextIndicateReceiveNetBufferListsObject;
    }
    LowerFilter->NextIndicateReceiveNetBufferListsObject = &HigherFilter->Header;
  }
  LowestFilter = a1->LowestFilter;
  v18 = FILTER_TEST_FLAG(LowestFilter, 0x8000u);
  v19 = v2 + 1;
  v11 = v18 == 0;
  v20 = LowestFilter->Characteristics.SendNetBufferListsCompleteHandler;
  if ( v11 )
    v19 = v2;
  if ( v20 )
  {
    a1->Next.SendNetBufferListsCompleteHandler = v20;
    v11 = !ndisIsVerifierDummyHandler(LowestFilter->Characteristics.SendNetBufferListsCompleteHandler);
    v21 = LowestFilter;
    if ( v11 )
      v21 = LowestFilter->FilterModuleContext;
    a1->Next.SendNetBufferListsCompleteContext = v21;
    a1->Next.SendNetBufferListsCompleteTracker = LowestFilter->NblTracker;
    p_Header = &LowestFilter->Header;
  }
  else
  {
    a1->Next.SendNetBufferListsCompleteHandler = LowestFilter->NextSendNetBufferListsCompleteHandler;
    a1->Next.SendNetBufferListsCompleteContext = LowestFilter->NextSendNetBufferListsCompleteContext;
    a1->Next.SendNetBufferListsCompleteTracker = LowestFilter->NextSendNetBufferListsCompleteTracker;
    p_Header = LowestFilter->NextSendNetBufferListsCompleteObject;
  }
  a1->Next.SendNetBufferListsCompleteObject = p_Header;
  if ( LowestFilter->Characteristics.ReceiveNetBufferListsHandler )
  {
    if ( !v19 )
      ++a1->ReceiveFilters;
    a1->Next.IndicateNetBufferListsHandler = LowestFilter->Characteristics.ReceiveNetBufferListsHandler;
    v11 = !ndisIsVerifierDummyHandler(LowestFilter->Characteristics.ReceiveNetBufferListsHandler);
    v23 = LowestFilter;
    if ( v11 )
      v23 = LowestFilter->FilterModuleContext;
    a1->Next.IndicateNetBufferListsContext = v23;
    a1->Next.IndicateNetBufferListsTracker = LowestFilter->NblTracker;
  }
  else
  {
    a1->Next.IndicateNetBufferListsHandler = LowestFilter->NextIndicateReceiveNetBufferListsHandler;
    a1->Next.IndicateNetBufferListsContext = LowestFilter->NextIndicateReceiveNetBufferListsContext;
    a1->Next.IndicateNetBufferListsTracker = LowestFilter->NextIndicateReceiveNetBufferListsTracker;
    LowestFilter = (_NDIS_FILTER_BLOCK *)LowestFilter->NextIndicateReceiveNetBufferListsObject;
  }
  a1->Next.IndicateNetBufferListsObject = &LowestFilter->Header;
  if ( v19 == 1 )
  {
    MediaType = a1->MediaType;
    if ( MediaType )
    {
      if ( MediaType == NdisMediumWan )
        goto LABEL_45;
      v25 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacket;
    }
    else
    {
      v25 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ethFilterDprIndicateReceivePacket;
    }
    a1->TopNdis5PacketIndicateHandler = v25;
  }
LABEL_45:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      71,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
}
