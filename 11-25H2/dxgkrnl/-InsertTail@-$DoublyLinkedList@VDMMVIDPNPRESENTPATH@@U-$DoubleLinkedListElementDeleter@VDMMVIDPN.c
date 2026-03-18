/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140038C38
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140038B3C (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v5; // rdx
  char result; // al
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v2 = a1 + 2;
  if ( a2 )
  {
    v5 = 0LL;
    if ( (_QWORD *)*v2 != v2 )
      v5 = *v2 - 8LL;
    while ( v5 )
    {
      if ( v5 == a2 )
        return 0;
      v7 = *(_QWORD **)(v5 + 8);
      v5 = (__int64)(v7 - 1);
      if ( v7 == v2 )
        v5 = 0LL;
    }
  }
  v8 = (_QWORD *)a1[3];
  v9 = (_QWORD *)(a2 + 8);
  if ( (_QWORD *)*v8 != v2 )
    __fastfail(3u);
  *v9 = v2;
  *(_QWORD *)(a2 + 16) = v8;
  *v8 = v9;
  v2[1] = v9;
  result = 1;
  ++a1[4];
  return result;
}
