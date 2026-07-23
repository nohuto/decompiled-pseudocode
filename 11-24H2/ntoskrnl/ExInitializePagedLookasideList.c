/*
 * XREFs of ExInitializePagedLookasideList @ 0x140A914C0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C1AFB8 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140C1B060 (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140C1B150 (FsRtlInitializeFileLocks.c)
 *     WmipInitializeAllocs @ 0x140C3EA50 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1404541E0 (ExInitializePagedLookasideListInternal.c)
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
