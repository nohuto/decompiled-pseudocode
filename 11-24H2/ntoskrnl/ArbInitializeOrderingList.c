/*
 * XREFs of ArbInitializeOrderingList @ 0x1407034E4
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1407028FC (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x100uLL, 0x100uLL, 0x4C627241u);
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
