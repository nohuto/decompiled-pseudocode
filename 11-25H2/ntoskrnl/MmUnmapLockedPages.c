/*
 * XREFs of MmUnmapLockedPages @ 0x1403285B0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     MiUnlockFlushMdl @ 0x14023D228 (MiUnlockFlushMdl.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     IopUnlockAndFreeMdl @ 0x1402D3518 (IopUnlockAndFreeMdl.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     HalPutScatterGatherListV3 @ 0x14033419C (HalPutScatterGatherListV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14034B1F0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiFlushComplete @ 0x14035A670 (MiFlushComplete.c)
 *     MiPfCompleteCoalescedIo @ 0x140378964 (MiPfCompleteCoalescedIo.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiZeroPageWrite @ 0x1403BEEAC (MiZeroPageWrite.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     HalFreeCommonBufferVector @ 0x140411520 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140411630 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140411700 (HalFreeCommonBufferDmaThin.c)
 *     PspIumFreePhysicalPages @ 0x140411AF4 (PspIumFreePhysicalPages.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045AD48 (HalpDmaReleaseBufferMappings.c)
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     EtwpAllocatePartitionMemory @ 0x140480F50 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x140482DC0 (EtwpFreePartitionMemory.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     IopLiveDumpWriteDumpFile @ 0x14049AB34 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14049AFB4 (IopLiveDumpFreeDumpBuffers.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1404A8C8C (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MiPersistMdl @ 0x1404C7140 (MiPersistMdl.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CC00 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x14054D840 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14059561C (IopLiveDumpAllocateFromIOSpace.c)
 *     PspIumAllocatePhysicalPages @ 0x1405DA234 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405DA358 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140603150 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnmapLockedPagesWrapper @ 0x140628FC0 (DifMmUnmapLockedPagesWrapper.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiZeroPageFile @ 0x140660380 (MiZeroPageFile.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140671168 (MiUnlockAndFreeDvPatchImage.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406F3C64 (HalpDmaAllocateLocalScatterPool.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14070EDF0 (IoFreeKsrPersistentMemory.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14070F340 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x14070FD10 (PipGetPersistentMemory.c)
 *     ExpProfileDelete @ 0x1407B2360 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1407B2940 (NtStopProfile.c)
 *     MiZeroPageFileFirstPage @ 0x1407DFB48 (MiZeroPageFileFirstPage.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2E48 (IopCleanupFileObjectIosbRange.c)
 *     MiDeleteImageCreationMdls @ 0x140A2AA8C (MiDeleteImageCreationMdls.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A85FCC (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB93CC (HalpDmaGrowContiguousMapBuffers.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140B91050 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A5FDD0 (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // ax
  _SLIST_ENTRY *v3; // r15
  unsigned int v5; // r8d
  __int64 ByteOffset; // r11
  __int64 v7; // rdx
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v9; // rsi
  CSHORT v10; // ax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  int v13; // r10d
  __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  PMDL v17; // rdi
  __int64 *v18; // r11
  __int64 v19; // rbp
  __int64 *i; // r14
  CSHORT v21; // ax
  unsigned __int64 v22; // r14
  ULONG_PTR v23; // rsi
  KIRQL v24; // r12
  _SLIST_ENTRY *v25; // rcx
  _SLIST_ENTRY *j; // r8
  __int64 v27; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v30; // rdx
  ULONG_PTR Next; // r9
  struct _MDL *v32; // rax
  PVOID v33; // r9
  _SLIST_ENTRY *v34; // rdx
  _SLIST_ENTRY **v35; // rax
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]
  unsigned __int64 v39; // [rsp+40h] [rbp-38h]
  __int64 v40; // [rsp+48h] [rbp-30h]

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v3 = 0LL;
  v5 = 0;
  if ( (MdlFlags & 0x200) != 0 )
  {
    v17 = MemoryDescriptorList + 1;
    v18 = (__int64 *)(&MemoryDescriptorList[1].Next
                    + ((MemoryDescriptorList->ByteCount
                      + 4095LL
                      + (unsigned __int64)((MemoryDescriptorList->ByteOffset + LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)) >> 12));
    do
    {
      v19 = *v18;
      for ( i = v18 + 1; v18 != (__int64 *)v17; --v18 )
        *v18 = *(v18 - 1);
      v17 = (PMDL)((char *)v17 + 8);
      ++v5;
      *v18 = v19 & 0x7FFFFFFFFFFFFFFFLL;
      v18 = i;
    }
    while ( v19 >= 0 );
    v21 = MemoryDescriptorList->MdlFlags;
    v5 <<= 12;
    MemoryDescriptorList->ByteCount += v5;
    MemoryDescriptorList->StartVa = (char *)MemoryDescriptorList->StartVa - v5;
    if ( (v21 & 1) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa - v5;
    MdlFlags = v21 & 0xFDFF;
    MemoryDescriptorList->MdlFlags = MdlFlags;
  }
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v7 = ((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF;
  BugCheckParameter4 = (v7 + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace(
      (ULONG_PTR)BaseAddress,
      (v7 + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  }
  else
  {
    v9 = (unsigned __int64)BaseAddress - v5;
    v10 = MdlFlags & 0xFFDE;
    v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MemoryDescriptorList->MdlFlags = v10;
    if ( (v10 & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v37 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = v37;
    v13 = 4;
    v38 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = 4LL;
    while ( 1 )
    {
      v15 = *(&v36 + v14--);
      --v13;
      v16 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v27 = *(_QWORD *)v15;
        if ( (v16 & 1) == 0 )
          goto LABEL_18;
        if ( ((v16 & 0x42) == 0 || (v16 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v30 = *(_QWORD *)(KernelWaitTime + 8 * ((v15 >> 3) & 0x1FF));
              if ( (v30 & 0x20) != 0 )
                LOBYTE(v27) = v16 | 0x20;
              LOBYTE(v16) = v27 | 0x42;
              if ( (v30 & 0x42) == 0 )
                LOBYTE(v16) = v27;
            }
          }
        }
      }
      if ( (v16 & 1) == 0 )
        goto LABEL_18;
      if ( (v16 & 0x80u) != 0LL )
        break;
      if ( v14 == 1 )
        goto LABEL_18;
    }
    for ( ; v13; --v13 )
      v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_18:
    if ( (*(_QWORD *)v12 & 0x200LL) != 0 )
      MiClearMappingAndDereferenceIoSpace(v9, BugCheckParameter4);
    if ( MmProtectFreedNonPagedPool )
      ++BugCheckParameter4;
    if ( (dword_140FC41EC & 1) != 0 )
    {
      v22 = (40543 * (v9 >> 12)) ^ ((40543 * (v9 >> 12)) >> 32);
      v23 = v9 & 0xFFFFFFFFFFFFF000uLL;
      if ( KeGetCurrentIrql() == 2 )
      {
        v24 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35AD0);
      }
      else
      {
        v24 = ExAcquireSpinLockExclusive(&dword_140E35AD0);
      }
      v25 = (_SLIST_ENTRY *)((char *)&unk_140E385B0 + 16 * (v22 & 0xF));
      for ( j = v25->Next; j != v25; j = j->Next )
      {
        Next = (ULONG_PTR)j[2].Next;
        if ( v23 == (Next & 0xFFFFFFFFFFFFF000uLL) )
        {
          if ( v3 )
            KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)j, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v3);
          if ( *((_QWORD *)&j[1].Next + 1) != BugCheckParameter4 )
            KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)j, *((_QWORD *)&j[1].Next + 1), BugCheckParameter4);
          if ( !_bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
          {
            v32 = (struct _MDL *)*((_QWORD *)&j[3].Next + 1);
            if ( v32 != MemoryDescriptorList[1].Next )
              KeBugCheckEx(0xDAu, 4uLL, (ULONG_PTR)j, (ULONG_PTR)v32, (ULONG_PTR)MemoryDescriptorList[1].Next);
            if ( !byte_140E370DC )
            {
              if ( (PVOID)Next != MemoryDescriptorList->MappedSystemVa )
                KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)j, Next, (ULONG_PTR)MemoryDescriptorList->MappedSystemVa);
              v33 = (PVOID)*((_QWORD *)&j[2].Next + 1);
              if ( v33 != MemoryDescriptorList->StartVa )
                KeBugCheckEx(0xDAu, 5uLL, (ULONG_PTR)j, (ULONG_PTR)v33, (ULONG_PTR)MemoryDescriptorList->StartVa);
            }
          }
          v34 = j->Next;
          if ( *(&j->Next->Next + 1) != j || (v35 = (_SLIST_ENTRY **)*((_QWORD *)&j->Next + 1), *v35 != j) )
            __fastfail(3u);
          *v35 = v34;
          v3 = j;
          *((_QWORD *)&v34->Next + 1) = v35;
        }
      }
      if ( !v3 && !byte_140E35C65 )
        KeBugCheckEx(0xDAu, 6uLL, (ULONG_PTR)MemoryDescriptorList, v23, BugCheckParameter4);
      qword_140E386B0 -= BugCheckParameter4;
      --qword_140E386B8;
      MiReleaseSpinLockExclusive(&dword_140E35AD0, v24);
      if ( v3 )
        RtlpInterlockedPushEntrySList(&stru_140E35AC0, v3);
    }
    MiReleasePtes(&qword_140E37328, v11, (unsigned int)BugCheckParameter4);
  }
}
