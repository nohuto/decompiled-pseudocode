/*
 * XREFs of ExDeletePagedLookasideList @ 0x140475F90
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x14061D8A0 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14070A1E0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140475FF0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140476080 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
