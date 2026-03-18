/*
 * XREFs of MmProbeAndLockPages @ 0x140282330
 * Callers:
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1402670CC (VslpLockMdlForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x140267168 (MiGetWorkingSetInfo.c)
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     IopProbeAndLockPages @ 0x140267E4C (IopProbeAndLockPages.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     CcLockSystemCacheBuffer @ 0x14040CB58 (CcLockSystemCacheBuffer.c)
 *     KeSwappablePageReference @ 0x14046A5CC (KeSwappablePageReference.c)
 *     IopProbeAndLockPages_1 @ 0x14046E260 (IopProbeAndLockPages_1.c)
 *     VslFinalizeSecureImageHash @ 0x1404A0990 (VslFinalizeSecureImageHash.c)
 *     IopProbeAndLockPages_2 @ 0x1404A7238 (IopProbeAndLockPages_2.c)
 *     sub_140518F40 @ 0x140518F40 (sub_140518F40.c)
 *     KiOpPatchCode @ 0x1405C535C (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405E61E8 (PspIumAllocatePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060F110 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmProbeAndLockPagesWrapper @ 0x1406343F0 (DifMmProbeAndLockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x14064A330 (VmProbeAndLockPages.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     VslObtainHotPatchUndoTable @ 0x14070FCC0 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x14071194C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407DB030 (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 *     MmProbeAndLockProcessPages @ 0x1409F6900 (MmProbeAndLockProcessPages.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     VslCallEnclave @ 0x140A07B64 (VslCallEnclave.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     VslValidateDynamicCodePages @ 0x140A460AC (VslValidateDynamicCodePages.c)
 *     PspCreateSecureThread @ 0x140A72708 (PspCreateSecureThread.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 *     MiLockKernelScpSection @ 0x140C55A58 (MiLockKernelScpSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x140282248 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140282730 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13[14]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+B0h] [rbp-48h]
  __int64 v15; // [rsp+B8h] [rbp-40h]
  PVOID P; // [rsp+C0h] [rbp-38h]

  memset_0(v13, 0, 0xB0uLL);
  v6 = MiProbeAndLockPrepare(
         (unsigned int)v13,
         (_DWORD)MemoryDescriptorList,
         LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         AccessMode != 0,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v7 = MiProbeAndLockPacket(v13);
  v8 = MiProbeAndLockComplete(v13, v7);
  if ( P )
  {
    v9 = *((unsigned int *)P + 13);
    v10 = v14;
    v11 = P;
    v12 = v14 + (v9 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) = v14 + v9;
    v11[34] = BYTE4(v12);
    if ( v15 != v10 )
      MiReturnFullProcessCommitment(v13[11], v15 - v10);
    MiUnlockAndDereferenceVad(v11);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
