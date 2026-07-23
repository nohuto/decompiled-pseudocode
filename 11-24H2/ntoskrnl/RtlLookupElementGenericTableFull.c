/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1402E3790
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402E38E0 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  PVOID *p_Parent; // rbx
  int v9; // eax
  PVOID result; // rax

  p_Parent = (PVOID *)&Table->TableRoot->Parent;
  if ( Table->TableRoot )
  {
    while ( 1 )
    {
      v9 = guard_dispatch_icall_no_overrides(Table, Buffer);
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          *NodeOrParent = p_Parent;
          *SearchResult = TableFoundNode;
          Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
          return (char *)*NodeOrParent + 40;
        }
        result = p_Parent[2];
        if ( !result )
        {
          *NodeOrParent = p_Parent;
          result = 0LL;
          *SearchResult = TableInsertAsRight;
          return result;
        }
      }
      else
      {
        result = p_Parent[1];
        if ( !result )
        {
          *NodeOrParent = p_Parent;
          *SearchResult = TableInsertAsLeft;
          return result;
        }
      }
      p_Parent = (PVOID *)result;
    }
  }
  *SearchResult = TableEmptyTree;
  return 0LL;
}
