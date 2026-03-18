/*
 * XREFs of MiReleaseProcessorFlushList @ 0x14023FFD0
 * Callers:
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteNonPagedPoolTail @ 0x140235020 (MiDeleteNonPagedPoolTail.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x140394414 (MiClearPteAccessedBitRange.c)
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1403AAA70 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x1403AAB80 (MiAgeWorkingSetTail.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiDeleteSystemPageTableTail @ 0x14045A5D0 (MiDeleteSystemPageTableTail.c)
 *     MiEmptyWorkingSetTail @ 0x140463F60 (MiEmptyWorkingSetTail.c)
 *     MiCreateSystemPageTableTail @ 0x140473190 (MiCreateSystemPageTableTail.c)
 *     MiFinishPteChangesInPageTable @ 0x1404738AC (MiFinishPteChangesInPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MiRevokeExecuteTail @ 0x140488980 (MiRevokeExecuteTail.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x14068084C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 *MiReleaseProcessorFlushList()
{
  __int64 *result; // rax

  result = (__int64 *)KeGetCurrentPrcb()->MmInternal;
  if ( !result )
    result = MxTempPrcb;
  result[2575 * (unsigned int)--*((_DWORD *)result + 87) + 2622] = 0LL;
  return result;
}
