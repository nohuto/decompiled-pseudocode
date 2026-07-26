/*
 * XREFs of ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0
 * Callers:
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400425F0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B720 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14006C180 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5594 (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B8E00 (-ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B8F60 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DA4C0 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DA770 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DA9C0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     NdisFreePacket @ 0x140035450 (NdisFreePacket.c)
 */

void __fastcall NDIS_FREE_XFER_DATA_PACKET(PNDIS_PACKET Packet)
{
  _MDL *Head; // rdi
  SIZE_T ByteCount; // rsi

  Head = Packet->Private.Head;
  ByteCount = Head->ByteCount;
  if ( (Head->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Head->MappedSystemVa, Head);
  if ( (unsigned int)ByteCount >= 0x64 )
  {
    if ( (unsigned int)ByteCount >= 0x5EA )
    {
      MmSizeOfMdl((PVOID)0xFFF, ByteCount);
      ExFreePoolWithTag(Head, 0);
    }
    else
    {
      ExFreeToNPagedLookasideList(&ndisRcv1514BytesLL, Head);
    }
  }
  else
  {
    ExFreeToNPagedLookasideList(&ndisRcv100BytesLL, Head);
  }
  LODWORD(Packet[-1].Reserved[1]) &= ~1u;
  NdisFreePacket(Packet);
}
