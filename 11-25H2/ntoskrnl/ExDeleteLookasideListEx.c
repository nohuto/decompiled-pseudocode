/*
 * XREFs of ExDeleteLookasideListEx @ 0x140476160
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x140611620 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x1404761A0 (ExpRemoveGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140476210 (ExFlushLookasideListEx.c)
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
