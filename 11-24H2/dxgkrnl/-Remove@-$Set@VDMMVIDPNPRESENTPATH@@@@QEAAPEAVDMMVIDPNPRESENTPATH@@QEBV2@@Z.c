/*
 * XREFs of ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x140038710
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x140038778 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x140038860 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNPRESENTPATH>::Remove(__int64 a1)
{
  __int64 v2; // rax
  char v3; // al
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v2 = Set<DMMVIDPNPRESENTPATH>::FindByValue();
  v3 = DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
         a1 + 8,
         v2);
  v5 = 0LL;
  if ( v3 )
  {
    v6 = (_QWORD *)(v4 + 8);
    v7 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v7 + 8) != v4 + 8 || (v8 = *(_QWORD **)(v4 + 16), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    v5 = v4;
    --*(_QWORD *)(a1 + 40);
  }
  return v5;
}
