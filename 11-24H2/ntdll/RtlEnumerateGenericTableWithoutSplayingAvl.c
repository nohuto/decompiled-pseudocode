/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1800E5410
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1800F02A0 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1800E5480 (RealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  __int64 v2; // r8
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS **v4; // r9
  _RTL_BALANCED_LINKS *v5; // rcx
  _RTL_BALANCED_LINKS *i; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( *RestartKey )
  {
    RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*RestartKey, RestartKey, v2, RestartKey);
    if ( RightChild )
      *v4 = RightChild;
  }
  else
  {
    RightChild = Table->BalancedRoot.RightChild;
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    *RestartKey = RightChild;
  }
  v5 = RightChild + 1;
  if ( !RightChild )
    return 0LL;
  return v5;
}
