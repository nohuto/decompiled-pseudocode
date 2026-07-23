/*
 * XREFs of MiGetProcessPartition @ 0x1404329B0
 * Callers:
 *     MiFreeAweView @ 0x1406F3720 (MiFreeAweView.c)
 *     VmpPauseResumeNotify @ 0x14079F348 (VmpPauseResumeNotify.c)
 *     MiCreateVsmEnclave @ 0x1407F7CA0 (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407FB880 (MiInSwapSharedWorkingSetWorker.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FDF38 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiReturnVadCharges @ 0x140919B48 (MiReturnVadCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 *     MmInSwapVirtualAddresses @ 0x140A03180 (MmInSwapVirtualAddresses.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A03620 (MiCleanEmbryonicProcess.c)
 *     MmRotatePhysicalView @ 0x140A231B0 (MmRotatePhysicalView.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A5F8D4 (MiDoneWithThisPageGetAnother.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A69CDC (MiFinishPlaceholderVadReplacement.c)
 *     MiLogCommitRequestFailed @ 0x140AA7460 (MiLogCommitRequestFailed.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 1198));
}
