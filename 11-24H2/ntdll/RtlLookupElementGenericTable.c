/*
 * XREFs of RtlLookupElementGenericTable @ 0x1800B8070
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B80F0 (RtlSplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0LL;
  while ( 1 )
  {
    v5 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
           Table,
           Buffer,
           &TableRoot[1].RightChild);
    if ( v5 )
      break;
    TableRoot = TableRoot->LeftChild;
LABEL_4:
    if ( !TableRoot )
      return 0LL;
  }
  if ( v5 == 1 )
  {
    TableRoot = TableRoot->RightChild;
    goto LABEL_4;
  }
  Table->TableRoot = RtlSplay(TableRoot);
  return &TableRoot[1].RightChild;
}
