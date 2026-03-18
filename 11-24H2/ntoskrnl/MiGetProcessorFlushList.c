/*
 * XREFs of MiGetProcessorFlushList @ 0x1402894BC
 * Callers:
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140231E18 (MiAcquirePrcbAgeTrimLists.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiDecommitHandleValidPte @ 0x140288180 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x140394414 (MiClearPteAccessedBitRange.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiRevokeExecutePte @ 0x140458A10 (MiRevokeExecutePte.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404FA094 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x14068084C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x1406824E4 (MiGetAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
