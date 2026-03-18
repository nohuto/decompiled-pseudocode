/*
 * XREFs of ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140042038
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14037BD70 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1403A2CC8 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1400420D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 */

__int64 __fastcall Set<DMMVIDPN>::Remove(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r11
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 == a1 + 24 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = v2 - 8;
    while ( v3 )
    {
      if ( v3 == a2 )
        break;
      v10 = *(_QWORD *)(v3 + 8);
      v3 = v10 - 8;
      if ( v10 == a1 + 24 )
        v3 = 0LL;
    }
  }
  v4 = a1 + 8;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
                          a1 + 8,
                          v3) )
  {
    v6 = (_QWORD *)(v3 + 8);
    v7 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v7 + 8) != v3 + 8 || (v8 = *(_QWORD **)(v3 + 16), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = v5;
    *(_QWORD *)(v3 + 16) = v5;
    v5 = v3;
    --*(_QWORD *)(v4 + 32);
  }
  return v5;
}
