/*
 * XREFs of MmUnlockPages @ 0x14025F510
 * Callers:
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     KeSwappablePageDereference @ 0x140260340 (KeSwappablePageDereference.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x140405000 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     VslFinalizeSecureImageHash @ 0x14049B010 (VslFinalizeSecureImageHash.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     CcMdlWriteAbort @ 0x1405797E0 (CcMdlWriteAbort.c)
 *     KiOpPatchCode @ 0x1405C2A90 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x1405E37E8 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405E3D04 (PspIumFreePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnlockPagesWrapper @ 0x140633270 (DifMmUnlockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x1406488F0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1406489A0 (VmUnlockPages.c)
 *     FsRtlpFreeMdlChain @ 0x14070ACA4 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BA10 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BAB0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1407C1F80 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C2560 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407DB580 (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     sub_1409DABCC @ 0x1409DABCC (sub_1409DABCC.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     VslCallEnclave @ 0x140A04094 (VslCallEnclave.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A077BC (AlpcpFreeCompletionList.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A2A630 (MiLoadDataIntoVsmEnclave.c)
 *     CcMdlReadComplete2 @ 0x140A32058 (CcMdlReadComplete2.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 *     PspCreateSecureThread @ 0x140A6BAE8 (PspCreateSecureThread.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiValidateMdlTracker @ 0x1404A8FEC (MiValidateMdlTracker.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404EDD78 (MiReadProcessNumberOfLockedPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
    MiRetardMdl((__int64)MemoryDescriptorList);
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
          RtlAvlRemoveNode(LockedPagesList, v9);
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
    if ( Next <= qword_140E2DD20 && ((*(_QWORD *)(48 * Next - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
            || v18 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
