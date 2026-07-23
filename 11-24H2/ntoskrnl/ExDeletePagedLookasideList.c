/*
 * XREFs of ExDeletePagedLookasideList @ 0x140472030
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x14061BE60 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140707DA0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140472090 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140472120 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
