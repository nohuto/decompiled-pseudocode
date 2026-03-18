/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14008F72C
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x14026083C (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r11
  _QWORD *v8; // rdx
  _QWORD *v9; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 || (v4 = v3 - 8) == 0 )
  {
LABEL_7:
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           a1 + 8,
           a2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 108;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v8 = *(_QWORD **)(v6 + 24);
      v9 = (_QWORD *)(a2 + 8);
      if ( *v8 != v6 + 16 )
        __fastfail(3u);
      *v9 = v6 + 16;
      *(_QWORD *)(a2 + 16) = v8;
      *v8 = v9;
      *(_QWORD *)(v6 + 24) = v9;
      ++*(_QWORD *)(v6 + 32);
    }
    return 1;
  }
  else
  {
    while ( v4 != a2 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      v4 = v5 - 8;
      if ( v5 == a1 + 24 )
        v4 = 0LL;
      if ( !v4 )
        goto LABEL_7;
    }
    return 0;
  }
}
