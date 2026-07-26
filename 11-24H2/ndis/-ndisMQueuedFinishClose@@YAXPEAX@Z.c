/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140162170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140051FC0 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140060A00 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007BD10 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140162310 (-ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMQueuedFinishClose(struct _NDIS_OPEN_BLOCK *P)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  int v4; // r9d
  struct _KEVENT *CloseCompleteEvent; // rcx
  struct _KEVENT *UnsolicitedUnbindEvent; // rcx

  MiniportHandle = P->MiniportHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      15,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)P,
      (char)MiniportHandle);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x33u);
  ProtocolHandle = P->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion < 6u )
    ProtocolHandle->CloseAdapterCompleteHandler(P->ProtocolBindingContext, 0);
  else
    ndisInvokeCloseAdapterComplete(P);
  ndisDereferenceMiniport(MiniportHandle, 0x33u);
  if ( (P->OpenFlags & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(MiniportHandle, P->ProtocolHandle, 0);
  ndisDereferenceProtocol(P->ProtocolHandle, 0, 9u, v4);
  CloseCompleteEvent = P->CloseCompleteEvent;
  if ( CloseCompleteEvent )
    KeSetEvent(CloseCompleteEvent, 0, 0);
  UnsolicitedUnbindEvent = P->UnsolicitedUnbindEvent;
  if ( UnsolicitedUnbindEvent )
    KeSetEvent(UnsolicitedUnbindEvent, 0, 0);
  ndisRemoveOpenFromGlobalList(P);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(MiniportHandle, 0x2Eu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      16,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)P,
      (char)MiniportHandle);
}
