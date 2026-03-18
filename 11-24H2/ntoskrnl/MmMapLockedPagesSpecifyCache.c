/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14028F9F0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiGetWorkingSetInfo @ 0x140267168 (MiGetWorkingSetInfo.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140279D00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14027A7D0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     SmFpAllocate @ 0x14037C660 (SmFpAllocate.c)
 *     HalpDmaFlushBuffer @ 0x14038D450 (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403902DC (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140391F30 (HalpDmaCheckMdlAccessibility.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14039AB00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14039B530 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     CcLockSystemCacheBuffer @ 0x14040CB58 (CcLockSystemCacheBuffer.c)
 *     PspIumFreePhysicalPages @ 0x14040F384 (PspIumFreePhysicalPages.c)
 *     EtwpAllocateTraceBuffer @ 0x14040FF9C (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x140410058 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     SmMapPage @ 0x14043CF70 (SmMapPage.c)
 *     KeFlushIoBuffers @ 0x14043D470 (KeFlushIoBuffers.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     MiPersistMdl @ 0x1404C7C68 (MiPersistMdl.c)
 *     MiTransferMemoryPagefileData @ 0x1404D1F70 (MiTransferMemoryPagefileData.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054FDB0 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405513C0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140551960 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140598D2C (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140599218 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiOpPatchCode @ 0x1405C535C (KiOpPatchCode.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E63B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E64D8 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060F110 (SmRecordDecompressionFailureDumpPayload.c)
 *     MdlInvariantPostProcessing1 @ 0x140611AD0 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140611CDC (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x140633D50 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     DifMmMapLockedPagesWrapper @ 0x140633F00 (DifMmMapLockedPagesWrapper.c)
 *     MmMapLockedPages @ 0x14066F250 (MmMapLockedPages.c)
 *     MiLockPatchIatForDV @ 0x14067BF00 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     IopAllocateAndLockMdl @ 0x14071194C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14071B440 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x14071BE10 (PipGetPersistentMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140987B34 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyVirtualMemory @ 0x1409A9D80 (MiCopyVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A021B0 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A8AB00 (HalpDmaAllocateScatterMemory.c)
 *     PopAllocatePages @ 0x140B6E34C (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140B88FD8 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140B89650 (ViMapDoubleBuffer.c)
 *     VfFillAllocatePagesForMdl @ 0x140BA1030 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140BB19D8 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C33C18 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiIssueNoPtesBugcheck @ 0x1404F5D50 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1406913D4 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  signed int v6; // edi
  char *v9; // rdx
  int v10; // r13d
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rax
  _QWORD *v14; // r12
  unsigned __int64 v15; // r15
  int v16; // eax
  unsigned int v17; // ebp
  int v18; // eax
  CSHORT MdlFlags; // cx
  char v20; // r8
  CSHORT *p_MdlFlags; // rbx
  ULONG_PTR v22; // r14
  int v23; // r10d
  __int64 v24; // r11
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  signed __int64 v28; // rbx
  bool v29; // zf
  signed __int64 v30; // rax
  CSHORT v31; // ax
  unsigned __int64 v33; // r8
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]
  unsigned __int64 v41; // [rsp+40h] [rbp-38h]
  __int64 v42; // [rsp+48h] [rbp-30h]
  __int64 v43; // [rsp+90h] [rbp+18h] BYREF

  v6 = Priority;
  v9 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  LODWORD(v43) = 0;
  if ( CacheType == MmHardwareCoherentCached )
    goto LABEL_2;
  if ( CacheType )
  {
    if ( CacheType == MmCached )
    {
LABEL_2:
      v10 = 1;
      goto LABEL_3;
    }
    if ( CacheType == MmWriteCombined )
      goto LABEL_68;
    if ( CacheType != MmNonCachedUnordered )
    {
      if ( CacheType != MmUSWCCached )
        return 0LL;
LABEL_68:
      v10 = 2;
      goto LABEL_3;
    }
  }
  v10 = 0;
LABEL_3:
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    (_DWORD)v9,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority,
                    v39[0]);
  if ( (Priority & 0x20000000) == 0 )
  {
    v11 = (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( (Priority & 0x20) == 0 )
    {
      v33 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v33 = 2048LL;
      if ( (qword_140E2EE70 - qword_140E38948) << 21 < (unsigned __int64)(0x4000000
                                                                        / ((unsigned int)((Priority & 0x3FFFFFFF) == 16)
                                                                         + 1))
        && (v33 >= qword_140E375C0 || v11 >= qword_140E375C0 - v33)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140E37598;
        return 0LL;
      }
    }
    v12 = (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( MmProtectFreedNonPagedPool )
      v12 = v11 + 1;
    v13 = MiReservePtes(&qword_140E37568, v12);
    v14 = (_QWORD *)v13;
    if ( !v13 )
    {
      if ( !_bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) && BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v11);
      return 0LL;
    }
    v15 = MemoryDescriptorList->ByteOffset + (v13 << 25 >> 16);
    v16 = 0x40000000;
    if ( (MiFlags & 0x8000) == 0 )
      v16 = v6;
    v17 = (((v6 >> 31) & 0xFFFFFFFD) + 4) | 2;
    if ( (v16 & 0x40000000) != 0 )
      v17 = ((v6 >> 31) & 0xFFFFFFFD) + 4;
    if ( v10 )
    {
      if ( v10 == 2 )
        v17 |= 0x18u;
    }
    else
    {
      v17 |= 8u;
    }
    v18 = MiFillSystemPtes((ULONG_PTR)v14, 0, (__int64)&v43);
    MdlFlags = MemoryDescriptorList->MdlFlags;
    if ( v18 < 0 )
    {
      if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v11);
      MiReleasePtes((__int64)&qword_140E37568, v14, v12);
      return 0LL;
    }
    v20 = v43;
    p_MdlFlags = &MemoryDescriptorList->MdlFlags;
    MemoryDescriptorList->MappedSystemVa = (PVOID)v15;
    MemoryDescriptorList->MdlFlags = MdlFlags | 1;
    if ( (v20 & 1) != 0 )
    {
      v22 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v23 = 4;
      v39[1] = v22;
      v40 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = 4LL;
      do
      {
        v25 = v39[v24--];
        --v23;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v27 = *(_QWORD *)v25;
          if ( (v26 & 1) == 0 )
            break;
          if ( ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v36 = *(_QWORD *)(KernelWaitTime + 8 * ((v25 >> 3) & 0x1FF));
                if ( (v36 & 0x20) != 0 )
                  LOBYTE(v27) = v26 | 0x20;
                LOBYTE(v26) = v27 | 0x42;
                if ( (v36 & 0x42) == 0 )
                  LOBYTE(v26) = v27;
              }
            }
          }
        }
        if ( (v26 & 1) == 0 )
          break;
        if ( (v26 & 0x80u) != 0LL )
        {
          for ( ; v23; --v23 )
            v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          break;
        }
      }
      while ( v24 != 1 );
      v28 = *(_QWORD *)v22;
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v28 & 0x21) == 1 && v22 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v22, v28 | 0x200, 128);
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v28 | 0x200, v28);
        v29 = v28 == v30;
        v28 = v30;
      }
      while ( !v29 );
      p_MdlFlags = &MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140FC41FC & 1) != 0 )
    {
      v37 = MiProtectionToCacheAttribute(v17);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v38, v37);
    }
    v31 = MemoryDescriptorList->MdlFlags;
    if ( (v31 & 0x10) != 0 )
      *p_MdlFlags = v31 | 0x20;
    return (PVOID)v15;
  }
  return 0LL;
}
