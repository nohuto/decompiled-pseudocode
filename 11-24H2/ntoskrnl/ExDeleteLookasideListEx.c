/*
 * XREFs of ExDeleteLookasideListEx @ 0x1404720E0
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x14061BBA0 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x140472120 (ExpRemoveGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140472190 (ExFlushLookasideListEx.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3);
  ExFlushLookasideListEx(Lookaside);
}
