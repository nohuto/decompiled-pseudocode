/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140475FC0
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x14061D740 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14070A1E0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140475FF0 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140476080 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
