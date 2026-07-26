/*
 * XREFs of ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F620
 * Callers:
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F550 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisSetupNoFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rdx
  void (__stdcall *v3)(PVOID); // r8
  _NDIS_SEND_PATH_TYPE v4; // eax
  void (__fastcall *IndicateNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rdx
  void *IndicateNetBufferListsContext; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      67,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
  a1->NextSendPacketsHandler = a1->FinalSendPacketsHandler;
  a1->Next.CancelSendHandler = a1->NoFilter.CancelSendHandler;
  a1->Next.CancelSendContext = a1->NoFilter.CancelSendContext;
  a1->Next.SendNetBufferListsTracker = a1->NoFilter.SendNetBufferListsTracker;
  SendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  if ( (a1->Flags & 0x20000000) != 0 )
  {
    a1->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
    v3 = (void (__stdcall *)(PVOID))NdisCancelSendPackets;
    v4 = (a1->MajorNdisVersion < 6u) + 1;
    a1->SendPathType = v4;
  }
  else
  {
    v3 = NdisQueryOffloadState;
    v4 = (a1->MajorNdisVersion < 6u) + 1;
  }
  a1->SavedSendPathType = v4;
  a1->SavedNextSendNetBufferListsHandler = SendNetBufferListsHandler;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v3;
  IndicateNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  IndicateNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  a1->Next.ReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  a1->Next.ReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  a1->Next.ReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  a1->Next.ReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  a1->Next.SendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  a1->Next.SendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  a1->Next.SendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  a1->Next.SendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  a1->Next.IndicateNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  a1->Next.IndicateNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  a1->Next.RequestHandle = a1;
  a1->Next.DirectRequestHandle = a1;
  a1->Next.IndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.IndicateNetBufferListsContext = IndicateNetBufferListsContext;
  a1->Next.SaveIndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.SaveIndicateNetBufferListsContext = IndicateNetBufferListsContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      68,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
}
