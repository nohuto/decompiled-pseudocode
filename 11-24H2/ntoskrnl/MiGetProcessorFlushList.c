/*
 * XREFs of MiGetProcessorFlushList @ 0x1402990BC
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiDeleteNonPagedPoolPte @ 0x14020E950 (MiDeleteNonPagedPoolPte.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiDecommitHandleValidPte @ 0x140297D80 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 *     MiCleanupLazyStampedPageTable @ 0x140305F5C (MiCleanupLazyStampedPageTable.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x14038DA30 (MiClearPteAccessedBitRange.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiRevokeExecutePte @ 0x14044DEC0 (MiRevokeExecutePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7974 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x140681A4C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x1406836D4 (MiGetAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
    dword_141011694 = 512;
    MmInternal = MxTempPrcb;
    dword_14100F620 = 1;
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
