/*
 * XREFs of MmUnlockPages @ 0x1402D4670
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     VslFinalizeSecureImageHash @ 0x1402D2780 (VslFinalizeSecureImageHash.c)
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     KeSwappablePageDereference @ 0x1402D30F8 (KeSwappablePageDereference.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     IopUnlockAndFreeMdl @ 0x1402D3518 (IopUnlockAndFreeMdl.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x1402D41D4 (MiGetWorkingSetInfo.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 *     CcCopyBytesToUserBuffer @ 0x140404FD0 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     MiProbeAndLockComplete @ 0x14046B730 (MiProbeAndLockComplete.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcMdlWriteAbort @ 0x140579040 (CcMdlWriteAbort.c)
 *     KiOpPatchCode @ 0x1405C0FB8 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405DA068 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405DA584 (PspIumFreePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140603150 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnlockPagesWrapper @ 0x140628CF0 (DifMmUnlockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x14063E370 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14063E420 (VmUnlockPages.c)
 *     FsRtlpFreeMdlChain @ 0x140701224 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140701F90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140702030 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x140703DE0 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1407B2360 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407B2940 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407CB86C (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1409CBB80 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_1409E1F18 @ 0x1409E1F18 (sub_1409E1F18.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2E48 (IopCleanupFileObjectIosbRange.c)
 *     VslCallEnclave @ 0x140A059FC (VslCallEnclave.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A08300 (AlpcpFreeCompletionList.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     CcMdlReadComplete2 @ 0x140A35D18 (CcMdlReadComplete2.c)
 *     VslValidateDynamicCodePages @ 0x140A42148 (VslValidateDynamicCodePages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A62AD8 (MiReplaceRotateWithDemandZero.c)
 *     PspCreateSecureThread @ 0x140A6FD5C (PspCreateSecureThread.c)
 *     PopReadPagesFromHiberFile @ 0x140AABC80 (PopReadPagesFromHiberFile.c)
 *     MiReleaseHotPatchResources @ 0x140AAF5C8 (MiReleaseHotPatchResources.c)
 *     CcMdlRead @ 0x140ABFBF0 (CcMdlRead.c)
 * Callees:
 *     MiRetardMdl @ 0x14023EDE8 (MiRetardMdl.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiProbeUnlockPage @ 0x1402CB9A0 (MiProbeUnlockPage.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiFreeMdlTracker @ 0x14046F5D8 (MiFreeMdlTracker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // bx
  PMDL v2; // rdi
  unsigned __int64 v4; // r15
  struct _MDL *v5; // rsi
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 Next; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 *p_Size; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  _MMWSL_INSTANCE *VmWorkingSetList; // rcx
  struct _EPROCESS *Process; // [rsp+28h] [rbp-50h]
  __int16 v20; // [rsp+88h] [rbp+10h]
  int v21; // [rsp+90h] [rbp+18h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  v20 = MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl((__int64)MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v21 = 1;
  v22 = 0x3FFFFFFFFFLL;
  v5 = (PMDL)((char *)v2 + 8 * v4);
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  while ( 1 )
  {
    Next = (unsigned __int64)v2->Next;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    v9 = 1LL;
    if ( Next <= qword_140E2D9A0 && ((*(_QWORD *)(48 * Next - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      MiProbeUnlockPage(48 * (__int64)v2->Next - 0x220000000000LL, v20, &v22, &v21);
    }
    else
    {
      v10 = (unsigned __int64)v2->Next;
      v11 = 512 - ((__int64)v2->Next & 0x1FF);
      if ( v11 > 1 )
      {
        p_Size = (unsigned __int64 *)&v2->Size;
        do
        {
          if ( p_Size == (unsigned __int64 *)v5 )
            break;
          v13 = *p_Size;
          if ( *p_Size == -1LL
            || v13 != v10 + 1
            || v13 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            break;
          }
          ++v9;
          ++p_Size;
          v10 = v13;
        }
        while ( v9 < v11 );
      }
      MiDereferenceIoPages(0LL, v2->Next, v9);
    }
    ++v6;
    v2 = (PMDL)((char *)v2 + 8 * v9);
    if ( (v6 & 0x3F) != 0 || CurrentIrql >= 2u )
    {
      if ( v2 >= v5 )
        break;
    }
    else
    {
      if ( v2 >= v5 )
        break;
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v14 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v14);
      }
    }
  }
  if ( v22 != 0x3FFFFFFFFFLL )
    MiUnlockPageTableCharges(48 * v22 - 0x220000000000LL, v21);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  v15 = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( Process )
  {
    v16 = -(__int64)v4;
    if ( MmNumLockedPagesFixEnabled )
    {
      VmWorkingSetList = Process->Vm.Instance.VmWorkingSetList;
      if ( MmNumLockedPagesFanOutEnabled )
      {
        LODWORD(v15) = KeGetPcr()->Prcb.Number;
        _InterlockedAdd64((volatile signed __int64 *)&VmWorkingSetList[2] + 8 * ((v15 >> 1) & 3), v16);
      }
      else
      {
        _InterlockedAdd64((volatile signed __int64 *)&VmWorkingSetList[2], v16);
      }
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, v16);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
