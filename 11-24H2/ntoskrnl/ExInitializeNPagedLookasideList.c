/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x14045FAD0
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14070A210 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407422BC (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
