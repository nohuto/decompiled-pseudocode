/*
 * XREFs of RtlLookupElementGenericTable @ 0x140249620
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402496A0 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  __int64 v2; // r9
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v6; // eax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0LL;
  while ( 1 )
  {
    v6 = guard_dispatch_icall_no_overrides(Table, Buffer, &TableRoot[1].RightChild, v2);
    if ( !v6 )
    {
      TableRoot = TableRoot->LeftChild;
      goto LABEL_5;
    }
    if ( v6 != 1 )
      break;
    TableRoot = TableRoot->RightChild;
LABEL_5:
    if ( !TableRoot )
      return 0LL;
  }
  Table->TableRoot = RtlSplay(TableRoot);
  return &TableRoot[1].RightChild;
}
