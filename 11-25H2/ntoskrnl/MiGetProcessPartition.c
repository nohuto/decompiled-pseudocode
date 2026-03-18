/*
 * XREFs of MiGetProcessPartition @ 0x1404402D0
 * Callers:
 *     MiFreeAweView @ 0x1406E9DC4 (MiFreeAweView.c)
 *     VmpPauseResumeNotify @ 0x14078FE78 (VmpPauseResumeNotify.c)
 *     MiCreateVsmEnclave @ 0x1407E769C (MiCreateVsmEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1407EB280 (MiInSwapSharedWorkingSetWorker.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407ED938 (MiReferenceNonPagedMemoryProcessList.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     MiDecommitRegion @ 0x1408F7010 (MiDecommitRegion.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiReturnVadCharges @ 0x140901270 (MiReturnVadCharges.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 *     MmInSwapVirtualAddresses @ 0x140A04B54 (MmInSwapVirtualAddresses.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A04FF4 (MiCleanEmbryonicProcess.c)
 *     MmRotatePhysicalView @ 0x140A28CF0 (MmRotatePhysicalView.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiInSwapStore @ 0x140A4A81C (MiInSwapStore.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A6ED60 (MiDoneWithThisPageGetAnother.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7248C (MiFinishPlaceholderVadReplacement.c)
 *     MiLogCommitRequestFailed @ 0x140AA6FF0 (MiLogCommitRequestFailed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 1198));
}
