/*
 * XREFs of ?Clear@?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ @ 0x14008ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x1400403FC (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

__int64 __fastcall Set<DMMVIDEOPRESENTSOURCE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(a1 + 8);
}
