/*
 * XREFs of ArbFreeOrderingList @ 0x140097644
 * Callers:
 *     ArbDeleteArbiterInstance @ 0x1400AB224 (ArbDeleteArbiterInstance.c)
 *     ArbBuildAssignmentOrdering @ 0x1400BE284 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

void __fastcall ArbFreeOrderingList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
}
