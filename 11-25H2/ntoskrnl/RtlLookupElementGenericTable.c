/*
 * XREFs of RtlLookupElementGenericTable @ 0x140375170
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0LL;
  while ( 1 )
  {
    v5 = guard_dispatch_icall_no_overrides(Table, Buffer);
    if ( !v5 )
    {
      TableRoot = TableRoot->LeftChild;
      goto LABEL_5;
    }
    if ( v5 != 1 )
      break;
    TableRoot = TableRoot->RightChild;
LABEL_5:
    if ( !TableRoot )
      return 0LL;
  }
  Table->TableRoot = RtlSplay(TableRoot);
  return &TableRoot[1].RightChild;
}
