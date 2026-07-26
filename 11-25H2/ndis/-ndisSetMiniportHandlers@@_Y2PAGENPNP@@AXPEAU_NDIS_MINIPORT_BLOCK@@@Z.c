/*
 * XREFs of ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401844C0
 * Callers:
 *     NdisMSetAttributesEx @ 0x1401840E0 (NdisMSetAttributesEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018B00 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052D30 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ndisMIsPowerSynchronizedDatapathRequired @ 0x1400893A0 (ndisMIsPowerSynchronizedDatapathRequired.c)
 */

void __fastcall ndisSetMiniportHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // cf
  NDIS_NBL_TRACKER_HANDLE__ *v3; // r9
  void *v4; // rcx
  NDIS_NBL_TRACKER_HANDLE__ *v5; // r9
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rdx
  _NDIS_OPEN_BLOCK *i; // rdi
  bool v8; // zf
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  struct _NDIS_MINIPORT_BLOCK *MiniportAdapterContext; // rdx
  void (__fastcall *ReturnPacketHandler)(void *, _NDIS_PACKET *); // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // r8
  void (__stdcall *CancelSendPacketsHandler)(PVOID); // rax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      155,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  v2 = a1->MajorNdisVersion < 6u;
  a1->NoFilter.IndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMTopReceiveNetBufferLists;
  a1->NoFilter.IndicateNetBufferListsContext = a1;
  a1->NoFilter.IndicateNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)32;
  a1->NoFilter.IndicateNetBufferListsObject = &a1->Header;
  if ( v2 )
  {
    v8 = a1->Ndis6ProtocolsBound == 1;
    DriverHandle = a1->DriverHandle;
    MiniportAdapterContext = (struct _NDIS_MINIPORT_BLOCK *)a1->MiniportAdapterContext;
    a1->MiniportReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
    a1->MiniportReturnPacketContext = MiniportAdapterContext;
    if ( v8 || a1->HighestFilter )
    {
      v12 = a1;
      ReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    }
    else
    {
      ReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      v12 = MiniportAdapterContext;
    }
    a1->SynchronousReturnPacketHandler = ReturnPacketHandler;
    a1->SynchronousReturnPacketContext = v12;
    if ( (a1->Flags & 0x40000) == 0
      || (CancelSendPacketsHandler = (void (__stdcall *)(PVOID))DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler) == 0LL )
    {
      CancelSendPacketsHandler = NdisQueryOffloadState;
    }
    a1->NoFilter.CancelSendHandler = (void (__fastcall *)(void *, void *))CancelSendPacketsHandler;
    a1->NoFilter.CancelSendContext = MiniportAdapterContext;
    a1->NoFilter.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMSendNetBufferListsToPackets;
    NblTracker = a1->NblTracker;
    a1->NoFilter.SendNetBufferListsTracker = NblTracker;
    a1->NoFilter.ReturnNetBufferListsTracker = NblTracker;
    a1->NoFilter.SendNetBufferListsContext = a1;
    a1->NoFilter.SendNetBufferListsObject = &a1->Header;
    a1->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a1->NoFilter.ReturnNetBufferListsContext = a1;
    a1->NoFilter.ReturnNetBufferListsObject = &a1->Header;
  }
  else
  {
    v3 = a1->NblTracker;
    a1->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a1->SynchronousReturnPacketContext = a1;
    a1->NoFilter.CancelSendHandler = (void (__fastcall *)(void *, void *))ndisMCancelSendNetBufferListsOnMiniport;
    a1->NoFilter.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMSendNBLToMiniport;
    a1->NoFilter.CancelSendContext = a1;
    a1->NoFilter.SendNetBufferListsContext = a1;
    a1->NoFilter.SendNetBufferListsTracker = v3;
    a1->NoFilter.SendNetBufferListsObject = &a1->Header;
    if ( ndisMIsPowerSynchronizedDatapathRequired(a1) )
    {
      ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNblWithPowerQueue;
    }
    else if ( (a1->Flags & 0x80u) != 0 )
    {
      ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisWdfReturnNbl;
    }
    else
    {
      v4 = a1->MiniportAdapterContext;
      ReturnNetBufferListsHandler = a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    }
    a1->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a1->NoFilter.ReturnNetBufferListsContext = v4;
    a1->NoFilter.ReturnNetBufferListsTracker = v5;
    a1->NoFilter.ReturnNetBufferListsObject = &a1->Header;
    if ( (a1->Flags & 0x20000) != 0 )
      a1->NextCoOidRequestHandle = a1->MiniportAdapterContext;
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
    ndisSetupNdis6OpenHandlers(i, i->ProtocolHandle, a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      156,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
}
