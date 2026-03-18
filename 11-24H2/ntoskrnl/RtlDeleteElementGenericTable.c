/*
 * XREFs of RtlDeleteElementGenericTable @ 0x14024AF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  __int64 v2; // r9
  PRTL_SPLAY_LINKS i; // rbx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx

  for ( i = Table->TableRoot; ; i = i->RightChild )
  {
    while ( 1 )
    {
      if ( !i )
        return 0;
      v6 = guard_dispatch_icall_no_overrides(Table, Buffer, &i[1].RightChild, v2);
      if ( v6 )
        break;
      i = i->LeftChild;
    }
    if ( v6 != 1 )
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
    guard_dispatch_icall_no_overrides(Table, i, v7, v8);
  return 1;
}
