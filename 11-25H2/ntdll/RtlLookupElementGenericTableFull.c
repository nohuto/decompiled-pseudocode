/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800C4770
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800C48C0 (RtlSplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v9; // eax
  _RTL_SPLAY_LINKS *RightChild; // rax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
           Table,
           Buffer,
           &TableRoot[1].RightChild);
    if ( !v9 )
      break;
    if ( v9 != 1 )
    {
      *NodeOrParent = TableRoot;
      *SearchResult = TableFoundNode;
      Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
      return (char *)*NodeOrParent + 40;
    }
    RightChild = TableRoot->RightChild;
    if ( !RightChild )
    {
      *NodeOrParent = TableRoot;
      *SearchResult = TableInsertAsRight;
      return 0LL;
    }
LABEL_4:
    TableRoot = RightChild;
  }
  RightChild = TableRoot->LeftChild;
  if ( RightChild )
    goto LABEL_4;
  *NodeOrParent = TableRoot;
  *SearchResult = TableInsertAsLeft;
  return 0LL;
}
