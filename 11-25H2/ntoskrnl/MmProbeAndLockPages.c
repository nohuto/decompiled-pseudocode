/*
 * XREFs of MmProbeAndLockPages @ 0x1402D5660
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     VslFinalizeSecureImageHash @ 0x1402D2780 (VslFinalizeSecureImageHash.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1402D4138 (VslpLockMdlForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x1402D41D4 (MiGetWorkingSetInfo.c)
 *     IopProbeAndLockPages @ 0x1402D4D10 (IopProbeAndLockPages.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 *     IopProbeAndLockPages_0 @ 0x1402D55C4 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1402D5614 (IopProbeAndLockPages_1.c)
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     KeSwappablePageReference @ 0x14046C230 (KeSwappablePageReference.c)
 *     IopProbeAndLockPages_2 @ 0x1404A69A4 (IopProbeAndLockPages_2.c)
 *     sub_1405167C0 @ 0x1405167C0 (sub_1405167C0.c)
 *     KiOpPatchCode @ 0x1405C0FB8 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405DA068 (PspIumAllocatePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140603150 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmProbeAndLockPagesWrapper @ 0x140628430 (DifMmProbeAndLockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x14063E370 (VmProbeAndLockPages.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     VslObtainHotPatchUndoTable @ 0x140703DE0 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x14070584C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407CB86C (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 *     MmProbeAndLockProcessPages @ 0x1409FCD70 (MmProbeAndLockProcessPages.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     VslCallEnclave @ 0x140A059FC (VslCallEnclave.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     VslValidateDynamicCodePages @ 0x140A42148 (VslValidateDynamicCodePages.c)
 *     PspCreateSecureThread @ 0x140A6FD5C (PspCreateSecureThread.c)
 *     PopReadPagesFromHiberFile @ 0x140AABC80 (PopReadPagesFromHiberFile.c)
 *     CcMdlRead @ 0x140ABFBF0 (CcMdlRead.c)
 *     MiLockKernelScpSection @ 0x140C44778 (MiLockKernelScpSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407DABEC (MmUnlockPhysicalPagesByVa.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // esi
  __int64 v11; // r8
  struct _MDL *v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-B0h]
  __int64 v24; // [rsp+50h] [rbp-A8h]
  PMDL MemoryDescriptorLista; // [rsp+80h] [rbp-78h]
  unsigned int v26; // [rsp+88h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-60h]
  unsigned int v28; // [rsp+A0h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-48h]
  __int64 v30; // [rsp+B8h] [rbp-40h]
  PVOID P; // [rsp+C0h] [rbp-38h]

  memset_0(&v22, 0, 0xB0uLL);
  v6 = MiProbeAndLockPrepare(
         (__int64)&v22,
         (__int64)MemoryDescriptorList,
         (unsigned __int64)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         AccessMode != 0,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v10 = MiProbeAndLockPacket((__int64)&v22, v7, v8, v9);
  MiUnlockProbePacketWorkingSet((__int64)&v22);
  v12 = MemoryDescriptorLista;
  v13 = (v26 >> 6) & 1;
  if ( !v13 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)MemoryDescriptorLista);
  if ( v10 < 0 )
  {
    if ( v13 )
    {
      v14 = v23;
      if ( v23 > v22 )
        MmUnlockPhysicalPagesByVa(v22, v23 - v22, v11, v28);
      HIDWORD(v15) = HIDWORD(v27);
      v16 = -(__int64)((v24 - v14) >> 12);
      if ( MmNumLockedPagesFixEnabled )
      {
        v17 = *(_QWORD *)(v27 + 1040);
        if ( MmNumLockedPagesFanOutEnabled )
        {
          LODWORD(v15) = KeGetPcr()->Prcb.Number;
          _InterlockedAdd64((volatile signed __int64 *)(v17 + (((v15 >> 1) & 3) << 6) + 512), v16);
        }
        else
        {
          _InterlockedAdd64((volatile signed __int64 *)(v17 + 512), v16);
        }
      }
      else
      {
        _InterlockedAdd64((volatile signed __int64 *)(v27 + 656), v16);
      }
    }
    else
    {
      MmUnlockPages(v12);
    }
    ++dword_140E2FEDC;
  }
  if ( P )
  {
    v18 = *((unsigned int *)P + 13);
    v19 = v29;
    v20 = P;
    v21 = v29 + (v18 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) = v29 + v18;
    v20[34] = BYTE4(v21);
    if ( v30 != v19 )
      MiReturnFullProcessCommitment(v27, v30 - v19);
    MiUnlockAndDereferenceVad(v20);
  }
  if ( v10 < 0 )
    RtlRaiseStatus(v10);
}
