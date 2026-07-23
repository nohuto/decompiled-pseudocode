/*
 * XREFs of RtlEnumerateGenericTable @ 0x140373EF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 */

PVOID __stdcall RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  PRTL_SPLAY_LINKS v4; // rax
  _RTL_SPLAY_LINKS *v5; // rcx
  _RTL_SPLAY_LINKS *i; // rax

  TableRoot = Table->TableRoot;
  if ( Table->TableRoot )
  {
    if ( Restart )
    {
      for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
        TableRoot = i;
      v5 = TableRoot;
    }
    else
    {
      v4 = RtlRealSuccessor(Table->TableRoot);
      TableRoot = v4;
      if ( !v4 )
        return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
      v5 = v4;
    }
    Table->TableRoot = RtlSplay(v5);
    return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
  }
  return 0LL;
}
