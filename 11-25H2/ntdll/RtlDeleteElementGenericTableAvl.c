/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180072740
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     DeleteNodeFromTree @ 0x180073310 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1800734B0 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  LONG (__cdecl *CompareRoutine)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN); // rax
  _RTL_BALANCED_LINKS *CaseInSensitive; // r8
  int v7; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    CompareRoutine = (LONG (__cdecl *)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN))Table->CompareRoutine;
    CaseInSensitive = RightChild + 1;
    v7 = CompareRoutine == RtlCompareUnicodeString
       ? RtlCompareUnicodeStrings(
           (PCWCH)Table->BalancedRoot.LeftChild,
           (unsigned __int64)LOWORD(Table->BalancedRoot.Parent) >> 1,
           *((PCWCH *)Buffer + 1),
           (unsigned __int64)*(unsigned __int16 *)Buffer >> 1,
           (BOOLEAN)CaseInSensitive)
       : ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))CompareRoutine)(
           Table,
           Buffer,
           CaseInSensitive);
    if ( v7 )
      break;
    RightChild = RightChild->LeftChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( v7 == 1 )
  {
    RightChild = RightChild->RightChild;
    goto LABEL_7;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
