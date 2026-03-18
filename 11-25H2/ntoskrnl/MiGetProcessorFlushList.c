/*
 * XREFs of MiGetProcessorFlushList @ 0x140381500
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiFlushTbAsNeeded @ 0x140237D10 (MiFlushTbAsNeeded.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiClearPteAccessedBitRange @ 0x1402D1788 (MiClearPteAccessedBitRange.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402FAF80 (MiDeleteNonPagedPoolPte.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiRevokeExecutePte @ 0x14037CEC0 (MiRevokeExecutePte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     MiDecommitHandleValidPte @ 0x140381970 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiFlushValidPteFromTb @ 0x1403FF67C (MiFlushValidPteFromTb.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14042C6C4 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiCleanupLazyStampedPageTable @ 0x140432F28 (MiCleanupLazyStampedPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7924 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x14067502C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x140676CC4 (MiGetAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140678120 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 *MiGetProcessorFlushList()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rcx
  ULONG_PTR v2; // rax
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 *v5; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = (__int64 *)CurrentPrcb->MmInternal;
  if ( !MmInternal )
  {
    dword_141010694 = 512;
    MmInternal = MxTempPrcb;
    dword_14100E620 = 1;
  }
  v2 = *((unsigned int *)MmInternal + 87);
  if ( (_DWORD)v2 == *((_DWORD *)MmInternal + 88) )
    KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, v2, 0LL);
  v3 = &MmInternal[2575 * v2];
  v3[2622] = (__int64)KeGetCurrentThread();
  v4 = 2LL;
  ++*((_DWORD *)MmInternal + 87);
  v5 = v3 + 48;
  do
  {
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    v5[4] = 0LL;
    *((_DWORD *)v5 + 3) = 512;
    v5 += 517;
    --v4;
  }
  while ( v4 );
  return v3 + 48;
}
