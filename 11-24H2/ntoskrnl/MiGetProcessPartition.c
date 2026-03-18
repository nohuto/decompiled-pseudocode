/*
 * XREFs of MiGetProcessPartition @ 0x14043E2C0
 * Callers:
 *     MiFreeAweView @ 0x1406F5720 (MiFreeAweView.c)
 *     VmpPauseResumeNotify @ 0x14079F238 (VmpPauseResumeNotify.c)
 *     MiCreateVsmEnclave @ 0x1407F752C (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407FB110 (MiInSwapSharedWorkingSetWorker.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FD7C8 (MiReferenceNonPagedMemoryProcessList.c)
 *     MiDecommitRegion @ 0x1408DC180 (MiDecommitRegion.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiReturnVadCharges @ 0x1408E2F98 (MiReturnVadCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x1409B0374 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 *     MmInSwapVirtualAddresses @ 0x140A06C50 (MmInSwapVirtualAddresses.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A070F0 (MiCleanEmbryonicProcess.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 *     MmRotatePhysicalView @ 0x140A2E770 (MmRotatePhysicalView.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A66AF0 (MiDoneWithThisPageGetAnother.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 *     MiLogCommitRequestFailed @ 0x140AAC430 (MiLogCommitRequestFailed.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 1198));
}
