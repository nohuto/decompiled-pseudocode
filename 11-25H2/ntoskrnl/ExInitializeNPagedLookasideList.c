/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140460AF0
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1406FE330 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14073629C (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
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
