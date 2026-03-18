/*
 * XREFs of ExDeletePagedLookasideList @ 0x1404760B0
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x1406118E0 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406FE300 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140476110 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1404761A0 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
