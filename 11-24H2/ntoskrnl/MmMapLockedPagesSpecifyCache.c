/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14029F5F0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1402F7E00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402F8830 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14038B860 (HalpDmaCheckMdlAccessibility.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     SmMapPage @ 0x140431210 (SmMapPage.c)
 *     KeFlushIoBuffers @ 0x140431710 (KeFlushIoBuffers.c)
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     EtwpAllocateTraceBuffer @ 0x14047CE80 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x14047CF3C (EtwpAllocatePartitionMemory.c)
 *     MiPersistMdl @ 0x1404C10C8 (MiPersistMdl.c)
 *     MiTransferMemoryPagefileData @ 0x1404CAFB0 (MiTransferMemoryPagefileData.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054D6F0 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14054ED00 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14054F2A0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x140595CAC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140596198 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiOpPatchCode @ 0x1405C2A90 (KiOpPatchCode.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E39B4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E3AD8 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     MdlInvariantPostProcessing1 @ 0x140610090 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14061029C (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x140632310 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     DifMmMapLockedPagesWrapper @ 0x1406324C0 (DifMmMapLockedPagesWrapper.c)
 *     MmMapLockedPages @ 0x140670420 (MmMapLockedPages.c)
 *     MiLockPatchIatForDV @ 0x14067D0E0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     IopAllocateAndLockMdl @ 0x14070F4DC (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140718FD0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x1407199A0 (PipGetPersistentMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140970318 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1409FF180 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     HalpDmaAllocateScatterMemory @ 0x140A86E40 (HalpDmaAllocateScatterMemory.c)
 *     PopAllocatePages @ 0x140B6FDEC (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140B89EAC (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140B8AFD8 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140B8B650 (ViMapDoubleBuffer.c)
 *     VfFillAllocatePagesForMdl @ 0x140BA3030 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140BB39D8 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiIssueNoPtesBugcheck @ 0x1404F3650 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
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
      if ( (qword_140E2EFB0 - qword_140E38A88) << 21 < (unsigned __int64)(0x4000000
                                                                        / ((unsigned int)((Priority & 0x3FFFFFFF) == 16)
                                                                         + 1))
        && (v33 >= qword_140E37700 || v11 >= qword_140E37700 - v33)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140E376D8;
        return 0LL;
      }
    }
    v12 = (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( MmProtectFreedNonPagedPool )
      v12 = v11 + 1;
    v13 = MiReservePtes(&qword_140E376A8, v12);
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
      MiReleasePtes((__int64)&qword_140E376A8, v14, v12);
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
          MiCheckLinearProtectedPteAccessedBit(v22, v28 | 0x200, 128LL);
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v28 | 0x200, v28);
        v29 = v28 == v30;
        v28 = v30;
      }
      while ( !v29 );
      p_MdlFlags = &MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140FC51FC & 1) != 0 )
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
