/*
 * XREFs of RtlDeleteElementGenericTable @ 0x1800B79D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1800B7AA0 (RtlDelete.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  PRTL_GENERIC_FREE_ROUTINE FreeRoutine; // rax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0;
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
      return 0;
  }
  if ( v5 == 1 )
  {
    TableRoot = TableRoot->RightChild;
    goto LABEL_4;
  }
  Table->TableRoot = RtlDelete(TableRoot);
  Parent = TableRoot[1].Parent;
  if ( Parent->LeftChild != &TableRoot[1] || (LeftChild = TableRoot[1].LeftChild, LeftChild->Parent != &TableRoot[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --Table->NumberGenericTableElements;
  Table->OrderedPointer = &Table->InsertOrderList;
  FreeRoutine = Table->FreeRoutine;
  Table->WhichOrderedElement = 0;
  ((void (__fastcall *)(PRTL_GENERIC_TABLE, PRTL_SPLAY_LINKS))FreeRoutine)(Table, TableRoot);
  return 1;
}
