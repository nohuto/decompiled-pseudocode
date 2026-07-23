/*
 * XREFs of MiReleaseProcessorFlushList @ 0x140208120
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiDeleteNonPagedPoolTail @ 0x14020EFE0 (MiDeleteNonPagedPoolTail.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiEmptyWorkingSetTail @ 0x140295FF0 (MiEmptyWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140296100 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x140296210 (MiAgeWorkingSetTail.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiCleanupLazyStampedPageTable @ 0x140305F5C (MiCleanupLazyStampedPageTable.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x14038DA30 (MiClearPteAccessedBitRange.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiDeleteSystemPageTableTail @ 0x14044FA20 (MiDeleteSystemPageTableTail.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiFinishPteChangesInPageTable @ 0x14046D518 (MiFinishPteChangesInPageTable.c)
 *     MiCreateSystemPageTableTail @ 0x14046F510 (MiCreateSystemPageTableTail.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MiRevokeExecuteTail @ 0x140483AD0 (MiRevokeExecuteTail.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x140681A4C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
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
