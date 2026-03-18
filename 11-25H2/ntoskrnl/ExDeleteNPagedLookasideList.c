/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1404760E0
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x140611780 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406FE300 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140476110 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1404761A0 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
