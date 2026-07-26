/*
 * XREFs of NdisQueryPacket @ 0x1400794E0
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1270 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1610 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisQueryPacket(
        PNDIS_PACKET Packet,
        PUINT PhysicalBufferCount,
        PUINT BufferCount,
        PNDIS_BUFFER *FirstBuffer,
        PUINT TotalPacketLength)
{
  _MDL *Head; // r9
  unsigned int v6; // r11d
  unsigned int v7; // ebx
  unsigned int i; // edi
  __int64 ByteCount; // rax
  unsigned __int64 v10; // rax

  if ( FirstBuffer )
    *FirstBuffer = Packet->Private.Head;
  if ( TotalPacketLength || BufferCount )
  {
    if ( !Packet->Private.ValidCounts )
    {
      Head = Packet->Private.Head;
      v6 = 0;
      v7 = 0;
      for ( i = 0; Head; ++i )
      {
        ByteCount = Head->ByteCount;
        v6 += ByteCount;
        if ( (_DWORD)ByteCount )
          v10 = ((unsigned __int64)((LODWORD(Head->StartVa) + Head->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
        else
          LODWORD(v10) = 1;
        Head = Head->Next;
        v7 += v10;
      }
      Packet->Private.Count = i;
      Packet->Private.PhysicalCount = v7;
      Packet->Private.TotalLength = v6;
      Packet->Private.ValidCounts = 1;
    }
    if ( BufferCount )
      *BufferCount = Packet->Private.Count;
    if ( TotalPacketLength )
      *TotalPacketLength = Packet->Private.TotalLength;
  }
}
