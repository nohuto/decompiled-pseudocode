/*
 * XREFs of ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x140042070
 * Callers:
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041AC0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPacketToNetBuffer(struct _NDIS_PACKET *a1, struct _NET_BUFFER *a2)
{
  _MDL *Head; // rax
  struct _MDL *Next; // r9
  unsigned int i; // r8d

  a2->MdlChain = a1->Private.Head;
  a2->DataOffset = 0;
  a2->Link.Region = (unsigned __int64)a1->Private.Head;
  a2->CurrentMdlOffset = 0;
  Head = a1->Private.Head;
  Next = Head->Next;
  for ( i = Head->ByteCount; Next; Next = Next->Next )
    i += Next->ByteCount;
  a2->DataLength = i;
  a1->Private.TotalLength = i;
}
