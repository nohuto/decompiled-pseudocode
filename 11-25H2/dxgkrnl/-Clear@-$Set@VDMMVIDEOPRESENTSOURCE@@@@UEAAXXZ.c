/*
 * XREFs of ?Clear@?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ @ 0x14008DA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x140040A0C (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

int __fastcall Set<DMMVIDEOPRESENTSOURCE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(a1 + 8);
}
