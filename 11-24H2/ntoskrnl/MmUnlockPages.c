/*
 * XREFs of MmUnlockPages @ 0x140267F30
 * Callers:
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x140267168 (MiGetWorkingSetInfo.c)
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     IopUnlockAndFreeMdl @ 0x140268818 (IopUnlockAndFreeMdl.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     KeSwappablePageDereference @ 0x140268ED0 (KeSwappablePageDereference.c)
 *     MiProbeAndLockComplete @ 0x140282248 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x14040C970 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x14040CB58 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     VslFinalizeSecureImageHash @ 0x1404A0990 (VslFinalizeSecureImageHash.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcMdlWriteAbort @ 0x14057C350 (CcMdlWriteAbort.c)
 *     KiOpPatchCode @ 0x1405C535C (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405E61E8 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405E6704 (PspIumFreePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060F110 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnlockPagesWrapper @ 0x140634CB0 (DifMmUnlockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x14064A330 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14064A3E0 (VmUnlockPages.c)
 *     FsRtlpFreeMdlChain @ 0x14070D104 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DE70 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DF10 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x14070FCC0 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1407C4160 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C4740 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407DB030 (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     sub_1409E0E1C @ 0x1409E0E1C (sub_1409E0E1C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 *     VslCallEnclave @ 0x140A07B64 (VslCallEnclave.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A0B28C (AlpcpFreeCompletionList.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     CcMdlReadComplete2 @ 0x140A3C878 (CcMdlReadComplete2.c)
 *     VslValidateDynamicCodePages @ 0x140A460AC (VslValidateDynamicCodePages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 *     PspCreateSecureThread @ 0x140A72708 (PspCreateSecureThread.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     MiReleaseHotPatchResources @ 0x140AB45B8 (MiReleaseHotPatchResources.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiValidateMdlTracker @ 0x1404AE6DC (MiValidateMdlTracker.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404F02D8 (MiReadProcessNumberOfLockedPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  __int16 v1; // r15
  PMDL v2; // r14
  unsigned __int64 v4; // r12
  struct _EPROCESS *v5; // rdi
  char *LockedPagesList; // rsi
  volatile LONG *v7; // rcx
  KIRQL v8; // r15
  _QWORD *v9; // rbx
  struct _MDL *v10; // rdi
  __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 Next; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 *p_Size; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  ULONG_PTR ProcessNumberOfLockedPages; // rax
  struct _EPROCESS *Process; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+98h] [rbp+10h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  LOWORD(v24) = MemoryDescriptorList->MdlFlags;
  v1 = v24;
  if ( (v24 & 0x200) != 0 )
    MiRetardMdl();
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (v1 & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
  {
    v5 = MemoryDescriptorList->Process;
    if ( v5 || (v5 = (struct _EPROCESS *)PsInitialSystemProcess) != 0LL )
    {
      LockedPagesList = (char *)v5->LockedPagesList;
      if ( LockedPagesList )
      {
        v7 = (volatile LONG *)(LockedPagesList + 24);
        if ( KeGetCurrentIrql() == 2 )
        {
          v8 = 17;
          ExAcquireSpinLockExclusiveAtDpcLevel(v7);
        }
        else
        {
          v8 = ExAcquireSpinLockExclusive(v7);
        }
        v9 = *(_QWORD **)LockedPagesList;
        if ( !*(_QWORD *)LockedPagesList )
          goto LABEL_27;
        do
        {
          if ( (unsigned __int64)MemoryDescriptorList >= v9[3] )
          {
            if ( (unsigned __int64)MemoryDescriptorList <= v9[3] )
              break;
            v9 = (_QWORD *)v9[1];
          }
          else
          {
            v9 = (_QWORD *)*v9;
          }
        }
        while ( v9 );
        if ( v9 )
        {
          MiValidateMdlTracker((ULONG_PTR)v9);
          RtlAvlRemoveNode((unsigned __int64 *)LockedPagesList, (__int64)v9);
          *((_QWORD *)LockedPagesList + 2) -= v4;
          MiReleaseSpinLockExclusive(LockedPagesList + 24, v8);
          ExFreeToNPagedLookasideList(&Lookaside, v9);
        }
        else
        {
LABEL_27:
          MiReleaseSpinLockExclusive(LockedPagesList + 24, v8);
          if ( *((_DWORD *)LockedPagesList + 7) )
          {
            ProcessNumberOfLockedPages = MiReadProcessNumberOfLockedPages(v5);
            KeBugCheckEx(
              0x76u,
              1uLL,
              (ULONG_PTR)MemoryDescriptorList,
              ProcessNumberOfLockedPages,
              (ULONG_PTR)v5->LockedPagesList);
          }
        }
        v1 = v24;
      }
    }
  }
  v24 = 1;
  v25 = 0x3FFFFFFFFFLL;
  v10 = (PMDL)((char *)v2 + 8 * v4);
  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  while ( 1 )
  {
    Next = (unsigned __int64)v2->Next;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    v14 = 1LL;
    if ( Next <= qword_140E2DBE0 && ((*(_QWORD *)(48 * Next - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      MiProbeUnlockPage(48 * (__int64)v2->Next - 0x220000000000LL, (unsigned int)v1, &v25, &v24);
    }
    else
    {
      v15 = (unsigned __int64)v2->Next;
      v16 = 512 - ((__int64)v2->Next & 0x1FF);
      if ( v16 > 1 )
      {
        p_Size = (unsigned __int64 *)&v2->Size;
        do
        {
          if ( p_Size == (unsigned __int64 *)v10 )
            break;
          v18 = *p_Size;
          if ( *p_Size == -1LL
            || v18 != v15 + 1
            || v18 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            break;
          }
          ++v14;
          ++p_Size;
          v15 = v18;
        }
        while ( v14 < v16 );
      }
      MiDereferenceIoPages(0LL, v2->Next, v14);
    }
    ++v11;
    v2 = (PMDL)((char *)v2 + 8 * v14);
    if ( (v11 & 0x3F) != 0 || CurrentIrql >= 2u )
    {
      if ( v2 >= v10 )
        break;
    }
    else
    {
      if ( v2 >= v10 )
        break;
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v19, 2LL);
      }
    }
  }
  if ( v25 != 0x3FFFFFFFFFLL )
    MiUnlockPageTableCharges(48 * v25 - 0x220000000000LL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  v20 = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( Process )
  {
    LODWORD(v20) = KeGetPcr()->Prcb.Number;
    _InterlockedAdd64(
      (volatile signed __int64 *)&Process->Vm.Instance.VmWorkingSetList[2] + 8 * ((v20 >> 1) & 3),
      -(__int64)v4);
  }
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
