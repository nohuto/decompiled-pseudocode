/*
 * XREFs of ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x14006F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x14004D0AC (-Clear@-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@.c)
 */

char *__fastcall Set<DXGTARGETENTRY>::`vector deleting destructor'(char *a1, char a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &Set<DXGTARGETENTRY>::`vftable';
  v4 = a1 + 8;
  *v4 = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear((__int64)v4);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
  return a1;
}
