/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180072B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  LONG (__cdecl *CompareRoutine)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN); // rax
  _RTL_BALANCED_LINKS *CaseInSensitive; // r8
  int v11; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        CompareRoutine = (LONG (__cdecl *)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN))Table->CompareRoutine;
        CaseInSensitive = i + 1;
        v11 = CompareRoutine == RtlCompareUnicodeString
            ? RtlCompareUnicodeStrings(
                (PCWCH)Table->BalancedRoot.LeftChild,
                (unsigned __int64)LOWORD(Table->BalancedRoot.Parent) >> 1,
                *((PCWCH *)Buffer + 1),
                (unsigned __int64)*(unsigned __int16 *)Buffer >> 1,
                (BOOLEAN)CaseInSensitive)
            : ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))CompareRoutine)(
                Table,
                Buffer,
                CaseInSensitive);
        if ( v11 )
          break;
        if ( !i->LeftChild )
        {
          *NodeOrParent = i;
          *SearchResult = TableInsertAsLeft;
          return 0LL;
        }
        i = i->LeftChild;
      }
      if ( v11 != 1 )
      {
        *NodeOrParent = i;
        *SearchResult = TableFoundNode;
        return (char *)*NodeOrParent + 32;
      }
      if ( !i->RightChild )
        break;
    }
    *NodeOrParent = i;
    *SearchResult = TableInsertAsRight;
    return 0LL;
  }
  else
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
}
