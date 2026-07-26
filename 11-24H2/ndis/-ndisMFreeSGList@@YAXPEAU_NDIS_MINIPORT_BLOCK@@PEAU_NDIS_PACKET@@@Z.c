/*
 * XREFs of ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908
 * Callers:
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007D980 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140089F90 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400D3BD0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400D3C70 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D93B0 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D97E0 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400D9A00 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D9B80 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     PplFreeToLookasideList @ 0x140028AD0 (PplFreeToLookasideList.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMFreeSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, __int64 a3)
{
  __int64 NdisPacketOobOffset; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rdi
  _SCATTER_GATHER_LIST *v6; // rdx
  unsigned int Flags; // eax
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rax
  struct _MDL *v11; // rcx
  char *v12; // rbx

  NdisPacketOobOffset = a2->Private.NdisPacketOobOffset;
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  LOBYTE(a3) = 1;
  v6 = *(_SCATTER_GATHER_LIST **)((char *)a2->Reserved + NdisPacketOobOffset);
  *(unsigned __int64 *)((char *)a2->Reserved + NdisPacketOobOffset) = 0LL;
  MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->PutScatterGatherList(
    MiniportSGDmaBlock->DmaAdapterObject,
    v6,
    a3);
  Flags = a2->Private.Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    a2->Private.Flags = Flags & 0xFFFFDFFF;
    v8 = a2->Private.NdisPacketOobOffset;
    v9 = *(void **)&a2->MacReserved[v8 + 24];
    *(_QWORD *)&a2->MacReserved[v8 + 24] = 0LL;
    PplFreeToLookasideList((__int64)MiniportSGDmaBlock->SGListLookasideList, v9);
  }
  else if ( (Flags & 0x800) != 0 )
  {
    a2->Private.Flags = Flags & 0xFFFFF7FF;
    v10 = a2->Private.NdisPacketOobOffset;
    v11 = *(struct _MDL **)&a2->MacReserved[v10 + 24];
    *(_QWORD *)&a2->MacReserved[v10 + 24] = 0LL;
    v12 = (char *)v11->StartVa + v11->ByteOffset;
    IoFreeMdl(v11);
    ExFreePoolWithTag(v12, 0);
  }
}
