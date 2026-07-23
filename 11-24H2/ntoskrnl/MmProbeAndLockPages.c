/*
 * XREFs of MmProbeAndLockPages @ 0x1402378C0
 * Callers:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14025E6AC (VslpLockMdlForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     IopProbeAndLockPages @ 0x14025F42C (IopProbeAndLockPages.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     IopProbeAndLockPages_1 @ 0x140468A3C (IopProbeAndLockPages_1.c)
 *     KeSwappablePageReference @ 0x140470DA8 (KeSwappablePageReference.c)
 *     VslFinalizeSecureImageHash @ 0x14049B010 (VslFinalizeSecureImageHash.c)
 *     IopProbeAndLockPages_2 @ 0x1404A1C64 (IopProbeAndLockPages_2.c)
 *     sub_140516800 @ 0x140516800 (sub_140516800.c)
 *     KiOpPatchCode @ 0x1405C2A90 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405E37E8 (PspIumAllocatePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmProbeAndLockPagesWrapper @ 0x1406329B0 (DifMmProbeAndLockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x1406488F0 (VmProbeAndLockPages.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x14070F4DC (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407DB580 (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 *     MmProbeAndLockProcessPages @ 0x1409EA850 (MmProbeAndLockProcessPages.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     VslCallEnclave @ 0x140A04094 (VslCallEnclave.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 *     MiLockKernelScpSection @ 0x140C57BE8 (MiLockKernelScpSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  NTSTATUS v6; // eax
  int v7; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  _BYTE v13[88]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+98h] [rbp-60h]
  __int64 v15; // [rsp+B0h] [rbp-48h]
  __int64 v16; // [rsp+B8h] [rbp-40h]
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
  v8 = MiProbeAndLockComplete((__int64)v13, v7);
  if ( P )
  {
    v9 = *((unsigned int *)P + 13);
    v10 = v15;
    v11 = P;
    v12 = v15 + (v9 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) = v15 + v9;
    v11[34] = BYTE4(v12);
    if ( v16 != v10 )
      MiReturnFullProcessCommitment(v14);
    MiUnlockAndDereferenceVad(v11);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
