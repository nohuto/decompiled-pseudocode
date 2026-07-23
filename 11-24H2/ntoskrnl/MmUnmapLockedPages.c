/*
 * XREFs of MmUnmapLockedPages @ 0x14029D5C0
 * Callers:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiUnlockFlushMdl @ 0x1402571C0 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalFreeCommonBufferVector @ 0x140397BB0 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140397CC0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140397DB0 (HalFreeCommonBufferDmaThin.c)
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140432EDC (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 *     HalpDmaReleaseBufferMappings @ 0x14044FCA4 (HalpDmaReleaseBufferMappings.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     EtwpAllocatePartitionMemory @ 0x14047CF3C (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x14047EA6C (EtwpFreePartitionMemory.c)
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     MiPersistMdl @ 0x1404C10C8 (MiPersistMdl.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x14054DAE0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140595CAC (IopLiveDumpAllocateFromIOSpace.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E39B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E3AD8 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnmapLockedPagesWrapper @ 0x140633540 (DifMmUnmapLockedPagesWrapper.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiZeroPageFile @ 0x14066D090 (MiZeroPageFile.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x14067DB08 (MiUnlockAndFreeDvPatchImage.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FD694 (HalpDmaAllocateLocalScatterPool.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x140718A80 (IoFreeKsrPersistentMemory.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140718FD0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x1407199A0 (PipGetPersistentMemory.c)
 *     ExpProfileDelete @ 0x1407C1F80 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1407C2560 (NtStopProfile.c)
 *     MiZeroPageFileFirstPage @ 0x1407EFFB8 (MiZeroPageFileFirstPage.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A86DC0 (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB8534 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140BA3030 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // ax
  _SLIST_ENTRY *v3; // r15
  unsigned int v5; // r8d
  PMDL v6; // rdi
  __int64 *v7; // r11
  __int64 v8; // rbp
  __int64 *i; // r14
  CSHORT v10; // ax
  ULONG ByteOffset; // r11d
  __int64 v12; // rdx
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v14; // rsi
  CSHORT v15; // ax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r14
  int v18; // r10d
  __int64 v19; // r11
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  ULONG_PTR v24; // rsi
  KIRQL v25; // r12
  _SLIST_ENTRY *v26; // rcx
  _SLIST_ENTRY *j; // r8
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
    v6 = MemoryDescriptorList + 1;
    v7 = (__int64 *)(&MemoryDescriptorList[1].Next
                   + ((MemoryDescriptorList->ByteCount
                     + 4095LL
                     + (unsigned __int64)((MemoryDescriptorList->ByteOffset + LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)) >> 12));
    do
    {
      v8 = *v7;
      for ( i = v7 + 1; v7 != (__int64 *)v6; --v7 )
        *v7 = *(v7 - 1);
      v6 = (PMDL)((char *)v6 + 8);
      ++v5;
      *v7 = v8 & 0x7FFFFFFFFFFFFFFFLL;
      v7 = i;
    }
    while ( v8 >= 0 );
    v10 = MemoryDescriptorList->MdlFlags;
    v5 <<= 12;
    MemoryDescriptorList->ByteCount += v5;
    MemoryDescriptorList->StartVa = (char *)MemoryDescriptorList->StartVa - v5;
    if ( (v10 & 1) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa - v5;
    MdlFlags = v10 & 0xFDFF;
    MemoryDescriptorList->MdlFlags = MdlFlags;
  }
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v12 = ((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF;
  BugCheckParameter4 = (v12 + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace(
      (ULONG_PTR)BaseAddress,
      (v12 + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  }
  else
  {
    v14 = (unsigned __int64)BaseAddress - v5;
    v15 = MdlFlags & 0xFFDE;
    v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MemoryDescriptorList->MdlFlags = v15;
    if ( (v15 & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v37 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = v37;
    v18 = 4;
    v38 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = 4LL;
    do
    {
      v20 = *(&v36 + v19--);
      --v18;
      v21 = *(_QWORD *)v20;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v22 = *(_QWORD *)v20;
        if ( (v21 & 1) == 0 )
          break;
        if ( ((v21 & 0x42) == 0 || (v21 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v30 = *(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v30 & 0x20) != 0 )
                LOBYTE(v22) = v21 | 0x20;
              LOBYTE(v21) = v22 | 0x42;
              if ( (v30 & 0x42) == 0 )
                LOBYTE(v21) = v22;
            }
          }
        }
      }
      if ( (v21 & 1) == 0 )
        break;
      if ( (v21 & 0x80u) != 0LL )
      {
        for ( ; v18; --v18 )
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        break;
      }
    }
    while ( v19 != 1 );
    if ( (*(_QWORD *)v17 & 0x200LL) != 0 )
      MiClearMappingAndDereferenceIoSpace(v14, BugCheckParameter4);
    if ( MmProtectFreedNonPagedPool )
      ++BugCheckParameter4;
    if ( (dword_140FC51FC & 1) != 0 )
    {
      v23 = (40543 * (v14 >> 12)) ^ ((40543 * (v14 >> 12)) >> 32);
      v24 = v14 & 0xFFFFFFFFFFFFF000uLL;
      if ( KeGetCurrentIrql() == 2 )
      {
        v25 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35E50);
      }
      else
      {
        v25 = ExAcquireSpinLockExclusive(&dword_140E35E50);
      }
      v26 = (_SLIST_ENTRY *)((char *)&unk_140E38930 + 16 * (v23 & 0xF));
      for ( j = v26->Next; j != v26; j = j->Next )
      {
        Next = (ULONG_PTR)j[2].Next;
        if ( v24 == (Next & 0xFFFFFFFFFFFFF000uLL) )
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
            if ( !byte_140E3745C )
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
      if ( !v3 && !byte_140E35FE5 )
        KeBugCheckEx(0xDAu, 6uLL, (ULONG_PTR)MemoryDescriptorList, v24, BugCheckParameter4);
      qword_140E38A30 -= BugCheckParameter4;
      --qword_140E38A38;
      MiReleaseSpinLockExclusive(&dword_140E35E50, v25);
      if ( v3 )
        RtlpInterlockedPushEntrySList(&ListHead, v3);
    }
    MiReleasePtes(&qword_140E376A8, v16, (unsigned int)BugCheckParameter4);
  }
}
