/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x14000BF30
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x14000BB10 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x140066F80 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x140068854 (-_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBu.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x14006AC90 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x14006FDEC (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeToNPagedLookasideList(_NPAGED_LOOKASIDE_LIST *Lookaside, void *Entry)
{
  ExFreeToNPagedLookasideList(Lookaside, Entry);
}
