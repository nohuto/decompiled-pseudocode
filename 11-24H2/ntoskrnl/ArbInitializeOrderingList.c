/*
 * XREFs of ArbInitializeOrderingList @ 0x140705924
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x140704D3C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  *(_QWORD *)(a1 + 8) = Pool2;
  *(_WORD *)a1 = 0;
  if ( Pool2 )
  {
    *(_WORD *)(a1 + 2) = 16;
    return 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 2) = 0;
    return 3221225626LL;
  }
}
