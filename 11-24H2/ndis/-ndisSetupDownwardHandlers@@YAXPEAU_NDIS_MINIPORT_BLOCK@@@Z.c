/*
 * XREFs of ?ndisSetupDownwardHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004FC10
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F550 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsVerifierDummyHandler@@YA_NPEAX@Z @ 0x1400A29E4 (-ndisIsVerifierDummyHandler@@YA_NPEAX@Z.c)
 */

void __fastcall ndisSetupDownwardHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  _NDIS_FILTER_BLOCK *HigherFilter; // rdx
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  void (__fastcall *CancelSendNetBufferListsHandler)(void *, void *); // rax
  void *FilterModuleContext; // rax
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  bool v8; // zf
  void *v9; // rax
  _NDIS_OBJECT_HEADER *p_Header; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *v12; // rax
  _NDIS_OBJECT_HEADER *NextReturnNetBufferListsObject; // rax
  void *NextRequestHandle; // rax
  _NDIS_FILTER_BLOCK *HighestFilter; // rdx
  void (__fastcall *v16)(void *, void *); // rax
  void *NextCancelSendNetBufferListsContext; // rax
  void (__fastcall *v18)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void *v19; // rax
  _NDIS_OBJECT_HEADER *NextSendNetBufferListsObject; // rax
  void (__fastcall *v21)(void *, _NET_BUFFER_LIST *, unsigned int); // rax
  void *v22; // rax
  _NDIS_OBJECT_HEADER *v23; // rax
  void *v24; // rax
  void (__stdcall *v25)(PVOID); // rax

  LowestFilter = a1->LowestFilter;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      69,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->SynchronousReturnPacketContext = a1;
    a1->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
    a1->SynchronousReturnPacketHandler = ndisSynchReturnPacketsForTranslation;
  }
  HigherFilter = LowestFilter->HigherFilter;
  LowestFilter->NextCancelSendNetBufferListsHandler = a1->NoFilter.CancelSendHandler;
  LowestFilter->NextCancelSendNetBufferListsContext = a1->NoFilter.CancelSendContext;
  LowestFilter->NextSendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  LowestFilter->NextSendNetBufferListsContext = a1->NoFilter.SendNetBufferListsContext;
  LowestFilter->NextSendNetBufferListsTracker = a1->NblTracker;
  LowestFilter->NextSendNetBufferListsObject = &a1->Header;
  LowestFilter->NextReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  LowestFilter->NextReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  LowestFilter->NextReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  LowestFilter->NextReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  LowestFilter->NextRequestHandle = a1->NoFilter.RequestHandle;
  for ( LowestFilter->NextDirectRequestHandle = a1->NoFilter.DirectRequestHandle;
        HigherFilter;
        HigherFilter = HigherFilter->HigherFilter )
  {
    LowerFilter = HigherFilter->LowerFilter;
    CancelSendNetBufferListsHandler = LowerFilter->Characteristics.CancelSendNetBufferListsHandler;
    if ( CancelSendNetBufferListsHandler )
    {
      HigherFilter->NextCancelSendNetBufferListsHandler = CancelSendNetBufferListsHandler;
      FilterModuleContext = LowerFilter->FilterModuleContext;
    }
    else
    {
      HigherFilter->NextCancelSendNetBufferListsHandler = LowerFilter->NextCancelSendNetBufferListsHandler;
      FilterModuleContext = LowerFilter->NextCancelSendNetBufferListsContext;
    }
    HigherFilter->NextCancelSendNetBufferListsContext = FilterModuleContext;
    SendNetBufferListsHandler = LowerFilter->Characteristics.SendNetBufferListsHandler;
    if ( SendNetBufferListsHandler )
    {
      HigherFilter->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
      v8 = !ndisIsVerifierDummyHandler(LowerFilter->Characteristics.SendNetBufferListsHandler);
      v9 = LowerFilter;
      if ( v8 )
        v9 = LowerFilter->FilterModuleContext;
      HigherFilter->NextSendNetBufferListsContext = v9;
      HigherFilter->NextSendNetBufferListsTracker = LowerFilter->NblTracker;
      p_Header = &LowerFilter->Header;
    }
    else
    {
      HigherFilter->NextSendNetBufferListsHandler = LowerFilter->NextSendNetBufferListsHandler;
      HigherFilter->NextSendNetBufferListsContext = LowerFilter->NextSendNetBufferListsContext;
      HigherFilter->NextSendNetBufferListsTracker = LowerFilter->NextSendNetBufferListsTracker;
      p_Header = LowerFilter->NextSendNetBufferListsObject;
    }
    HigherFilter->NextSendNetBufferListsObject = p_Header;
    ReturnNetBufferListsHandler = LowerFilter->Characteristics.ReturnNetBufferListsHandler;
    if ( ReturnNetBufferListsHandler )
    {
      HigherFilter->NextReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
      v8 = !ndisIsVerifierDummyHandler(LowerFilter->Characteristics.ReturnNetBufferListsHandler);
      v12 = LowerFilter;
      if ( v8 )
        v12 = LowerFilter->FilterModuleContext;
      HigherFilter->NextReturnNetBufferListsContext = v12;
      HigherFilter->NextReturnNetBufferListsTracker = LowerFilter->NblTracker;
      NextReturnNetBufferListsObject = &LowerFilter->Header;
    }
    else
    {
      HigherFilter->NextReturnNetBufferListsHandler = LowerFilter->NextReturnNetBufferListsHandler;
      HigherFilter->NextReturnNetBufferListsContext = LowerFilter->NextReturnNetBufferListsContext;
      HigherFilter->NextReturnNetBufferListsTracker = LowerFilter->NextReturnNetBufferListsTracker;
      NextReturnNetBufferListsObject = LowerFilter->NextReturnNetBufferListsObject;
    }
    HigherFilter->NextReturnNetBufferListsObject = NextReturnNetBufferListsObject;
    NextRequestHandle = LowerFilter;
    if ( !LowerFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
      NextRequestHandle = LowerFilter->NextRequestHandle;
    HigherFilter->NextRequestHandle = NextRequestHandle;
    if ( !LowerFilter->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
      LowerFilter = (_NDIS_FILTER_BLOCK *)LowerFilter->NextDirectRequestHandle;
    HigherFilter->NextDirectRequestHandle = LowerFilter;
  }
  HighestFilter = a1->HighestFilter;
  v16 = HighestFilter->Characteristics.CancelSendNetBufferListsHandler;
  if ( v16 )
  {
    a1->Next.CancelSendHandler = v16;
    NextCancelSendNetBufferListsContext = HighestFilter->FilterModuleContext;
  }
  else
  {
    a1->Next.CancelSendHandler = HighestFilter->NextCancelSendNetBufferListsHandler;
    NextCancelSendNetBufferListsContext = HighestFilter->NextCancelSendNetBufferListsContext;
  }
  a1->Next.CancelSendContext = NextCancelSendNetBufferListsContext;
  v18 = HighestFilter->Characteristics.SendNetBufferListsHandler;
  if ( v18 )
  {
    a1->Next.SendNetBufferListsHandler = v18;
    v8 = !ndisIsVerifierDummyHandler(HighestFilter->Characteristics.SendNetBufferListsHandler);
    v19 = HighestFilter;
    if ( v8 )
      v19 = HighestFilter->FilterModuleContext;
    a1->Next.SendNetBufferListsContext = v19;
    a1->Next.SendNetBufferListsTracker = HighestFilter->NblTracker;
    NextSendNetBufferListsObject = &HighestFilter->Header;
  }
  else
  {
    a1->Next.SendNetBufferListsHandler = HighestFilter->NextSendNetBufferListsHandler;
    a1->Next.SendNetBufferListsContext = HighestFilter->NextSendNetBufferListsContext;
    a1->Next.SendNetBufferListsTracker = HighestFilter->NextSendNetBufferListsTracker;
    NextSendNetBufferListsObject = HighestFilter->NextSendNetBufferListsObject;
  }
  a1->Next.SendNetBufferListsObject = NextSendNetBufferListsObject;
  v21 = HighestFilter->Characteristics.ReturnNetBufferListsHandler;
  if ( v21 )
  {
    a1->Next.ReturnNetBufferListsHandler = v21;
    v8 = !ndisIsVerifierDummyHandler(HighestFilter->Characteristics.ReturnNetBufferListsHandler);
    v22 = HighestFilter;
    if ( v8 )
      v22 = HighestFilter->FilterModuleContext;
    a1->Next.ReturnNetBufferListsContext = v22;
    a1->Next.ReturnNetBufferListsTracker = HighestFilter->NblTracker;
    v23 = &HighestFilter->Header;
  }
  else
  {
    a1->Next.ReturnNetBufferListsHandler = HighestFilter->NextReturnNetBufferListsHandler;
    a1->Next.ReturnNetBufferListsContext = HighestFilter->NextReturnNetBufferListsContext;
    a1->Next.ReturnNetBufferListsTracker = HighestFilter->NextReturnNetBufferListsTracker;
    v23 = HighestFilter->NextReturnNetBufferListsObject;
  }
  a1->Next.ReturnNetBufferListsObject = v23;
  v24 = HighestFilter;
  if ( !HighestFilter->FilterDriver->DefaultFilterCharacteristics.OidRequestHandler )
    v24 = HighestFilter->NextRequestHandle;
  a1->Next.RequestHandle = v24;
  if ( !HighestFilter->FilterDriver->DefaultFilterCharacteristics.DirectOidRequestHandler )
    HighestFilter = (_NDIS_FILTER_BLOCK *)HighestFilter->NextDirectRequestHandle;
  a1->Next.DirectRequestHandle = HighestFilter;
  if ( a1->XState )
  {
    v25 = NdisQueryOffloadState;
  }
  else
  {
    a1->SendPathType = NdisFilterSendPath;
    v25 = (void (__stdcall *)(PVOID))NdisCancelSendPackets;
    a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisSendNBLToFilter;
  }
  a1->SavedSendPathType = NdisFilterSendPath;
  a1->SavedNextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisSendNBLToFilter;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      70,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
}
