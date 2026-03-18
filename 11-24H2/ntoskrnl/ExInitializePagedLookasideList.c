/*
 * XREFs of ExInitializePagedLookasideList @ 0x140A94D10
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C18FC4 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140C1906C (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140C1915C (FsRtlInitializeFileLocks.c)
 *     WmipInitializeAllocs @ 0x140C3C8F8 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x14045F320 (ExInitializePagedLookasideListInternal.c)
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
