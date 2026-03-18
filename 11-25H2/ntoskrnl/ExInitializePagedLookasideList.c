/*
 * XREFs of ExInitializePagedLookasideList @ 0x140A90BD0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C07F24 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140C07FCC (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140C080BC (FsRtlInitializeFileLocks.c)
 *     WmipInitializeAllocs @ 0x140C2B618 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140460340 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal(
    (__int64)Lookaside,
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))Allocate,
    Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
