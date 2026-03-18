/*
 * XREFs of CcDeallocateVacbLevel @ 0x1403B67C4
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1403B4820 (CcSetVacbLargeOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcDeallocateVacbLevel(PVOID Entry, int a2)
{
  struct _NPAGED_LOOKASIDE_LIST *v3; // rcx

  v3 = &CcVacbLevelWithBcbListHeadsLookasideList;
  if ( !a2 )
    v3 = &CcVacbLevelLookasideList;
  ExFreeToNPagedLookasideList(v3, Entry);
}
