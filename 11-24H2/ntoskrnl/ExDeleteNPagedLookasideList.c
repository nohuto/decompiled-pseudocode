/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140472060
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x14061BD00 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140707DA0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140472090 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140472120 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
