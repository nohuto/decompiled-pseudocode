/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x140329CF0
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14020B450 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14020BE80 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiGetWorkingSetInfo @ 0x1402D41D4 (MiGetWorkingSetInfo.c)
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     SmMapPage @ 0x140327EC0 (SmMapPage.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140332BD0 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14034B1F0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     PspIumFreePhysicalPages @ 0x140411AF4 (PspIumFreePhysicalPages.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     KeFlushIoBuffers @ 0x14043D260 (KeFlushIoBuffers.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     EtwpAllocateTraceBuffer @ 0x140480E94 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x140480F50 (EtwpAllocatePartitionMemory.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MiPersistMdl @ 0x1404C7140 (MiPersistMdl.c)
 *     MiTransferMemoryPagefileData @ 0x1404D2020 (MiTransferMemoryPagefileData.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054D450 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14054EA60 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14054F060 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14059561C (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140595B08 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiOpPatchCode @ 0x1405C0FB8 (KiOpPatchCode.c)
 *     PspIumAllocatePhysicalPages @ 0x1405DA234 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405DA358 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140603150 (SmRecordDecompressionFailureDumpPayload.c)
 *     MdlInvariantPostProcessing1 @ 0x140605B10 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140605D1C (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x140627D90 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     DifMmMapLockedPagesWrapper @ 0x140627F40 (DifMmMapLockedPagesWrapper.c)
 *     MmMapLockedPages @ 0x140663730 (MmMapLockedPages.c)
 *     MiLockPatchIatForDV @ 0x140670740 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     IopAllocateAndLockMdl @ 0x14070584C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14070F340 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x14070FD10 (PipGetPersistentMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407B2640 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1409D1E28 (MiQueryMemoryPhysicalContiguity.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A02350 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A03080 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A03D20 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     MiCreateMdl @ 0x140A2A938 (MiCreateMdl.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A8604C (HalpDmaAllocateScatterMemory.c)
 *     PopAllocatePages @ 0x140B5F2A0 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140B77ECC (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140B78FF8 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140B79670 (ViMapDoubleBuffer.c)
 *     VfFillAllocatePagesForMdl @ 0x140B91050 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140BA19D8 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C229DC (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIssueNoPtesBugcheck @ 0x1404F33F8 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x140685F74 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
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
  __int64 ByteOffset; // rcx
  char *v9; // rcx
  int v10; // r12d
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rax
  unsigned __int64 *v14; // r13
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
  signed __int64 v27; // rbx
  bool v28; // zf
  signed __int64 v29; // rax
  CSHORT v30; // ax
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // r8
  _QWORD v39[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]
  unsigned __int64 v41; // [rsp+40h] [rbp-38h]
  __int64 v42; // [rsp+48h] [rbp-30h]
  int v43; // [rsp+90h] [rbp+18h] BYREF

  v6 = Priority;
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v43 = 0;
  v9 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
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
      goto LABEL_67;
    if ( CacheType != MmNonCachedUnordered )
    {
      if ( CacheType != MmUSWCCached )
        return 0LL;
LABEL_67:
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
      v32 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v32 = 2048LL;
      if ( (qword_140E2EC30 - qword_140E38708) << 21 < (unsigned __int64)(0x4000000
                                                                        / ((unsigned int)((Priority & 0x3FFFFFFF) == 16)
                                                                         + 1))
        && (v32 >= qword_140E37380 || v11 >= qword_140E37380 - v32)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140E37358;
        return 0LL;
      }
    }
    v12 = (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( MmProtectFreedNonPagedPool )
      v12 = v11 + 1;
    v13 = MiReservePtes(&qword_140E37328, v12);
    v14 = (unsigned __int64 *)v13;
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
      MiReleasePtes((__int64)&qword_140E37328, v14, v12);
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
      while ( 1 )
      {
        v25 = v39[v24--];
        --v23;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v33 = *(_QWORD *)v25;
          if ( (v26 & 1) == 0 )
            goto LABEL_25;
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
                  LOBYTE(v33) = v26 | 0x20;
                LOBYTE(v26) = v33 | 0x42;
                if ( (v36 & 0x42) == 0 )
                  LOBYTE(v26) = v33;
              }
            }
          }
        }
        if ( (v26 & 1) == 0 )
          goto LABEL_25;
        if ( (v26 & 0x80u) != 0LL )
          break;
        if ( v24 == 1 )
          goto LABEL_25;
      }
      for ( ; v23; --v23 )
        v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_25:
      v27 = *(_QWORD *)v22;
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v27 & 0x21) == 1 && v22 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v22, v27 | 0x200);
        v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v27 | 0x200, v27);
        v28 = v27 == v29;
        v27 = v29;
      }
      while ( !v28 );
      p_MdlFlags = &MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140FC41EC & 1) != 0 )
    {
      v37 = MiProtectionToCacheAttribute(v17);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v38, v37);
    }
    v30 = MemoryDescriptorList->MdlFlags;
    if ( (v30 & 0x10) != 0 )
      *p_MdlFlags = v30 | 0x20;
    return (PVOID)v15;
  }
  return 0LL;
}
