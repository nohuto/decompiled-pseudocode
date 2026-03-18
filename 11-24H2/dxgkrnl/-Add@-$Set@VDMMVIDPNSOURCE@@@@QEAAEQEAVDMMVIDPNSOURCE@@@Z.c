/*
 * XREFs of ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x140042660
 * Callers:
 *     ??$Add@VDMMVIDPNSOURCE@@@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@@@Z @ 0x140042600 (--$Add@VDMMVIDPNSOURCE@@@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x140042704 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 */

char __fastcall Set<DMMVIDPNSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = a1 + 24;
  v3 = a1 + 8;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 == v2 || (v5 = v4 - 8) == 0 )
  {
LABEL_7:
    if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(v3) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 108;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
    }
    return 1;
  }
  else
  {
    while ( v5 != a2 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      v5 = v6 - 8;
      if ( v6 == v2 )
        v5 = 0LL;
      if ( !v5 )
        goto LABEL_7;
    }
    return 0;
  }
}
