/*
 * XREFs of RtlDeleteElementGenericTable @ 0x1402E51B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1402E4AE0 (RtlDelete.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS i; // rbx
  int v5; // eax
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx

  for ( i = Table->TableRoot; ; i = i->RightChild )
  {
    while ( 1 )
    {
      if ( !i )
        return 0;
      v5 = guard_dispatch_icall_no_overrides(Table, Buffer);
      if ( v5 )
        break;
      i = i->LeftChild;
    }
    if ( v5 != 1 )
      break;
  }
  Table->TableRoot = RtlDelete(i);
  Parent = i[1].Parent;
  if ( Parent->LeftChild != &i[1] || (LeftChild = i[1].LeftChild, LeftChild->Parent != &i[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = &Table->InsertOrderList;
  if ( (void (__stdcall *)(PVOID, ULONG))Table->FreeRoutine == ExFreePoolWithTag )
    ExFreePoolWithTag(Table, (ULONG)i);
  else
    guard_dispatch_icall_no_overrides(Table, i);
  return 1;
}
