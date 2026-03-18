/*
 * XREFs of ExDeleteLookasideListEx @ 0x140476040
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x14061D5E0 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x140476080 (ExpRemoveGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1404760F0 (ExFlushLookasideListEx.c)
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
