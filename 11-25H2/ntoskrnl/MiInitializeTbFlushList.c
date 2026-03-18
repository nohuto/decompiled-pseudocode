/*
 * XREFs of MiInitializeTbFlushList @ 0x140388790
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
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
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiFlushValidPteFromTb @ 0x1403FF67C (MiFlushValidPteFromTb.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14042C6C4 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiZeroPageWorkMapping @ 0x14043AE70 (MiZeroPageWorkMapping.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiMapMemoryDumpMdl @ 0x14049C45C (MiMapMemoryDumpMdl.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiReadyReservedView @ 0x1404C30BC (MiReadyReservedView.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7924 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140669914 (MiStackTheftFreezeProcessors.c)
 *     MiFlushEnclaveTb @ 0x14067502C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x140676CC4 (MiGetAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140678120 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x140678880 (MiWritePteHighLevel.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x1406834F4 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1409CF9E0 (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A86B54 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeTbFlushList(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  BOOL v5; // r8d
  __int64 result; // rax

  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 24) = (*(_DWORD *)(a2 + 184) & 0x800) != 0;
  if ( (*(_DWORD *)(a2 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)a2 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v5 = (*(_DWORD *)(a2 + 184) & 0xF) == 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 9u;
    v5 = 0;
  }
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFFDB;
  *(_DWORD *)(a1 + 8) = v5;
  *(_WORD *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 16) = result;
  if ( (a4 & 4) != 0 )
  {
    result = (unsigned int)result | 4;
    *(_DWORD *)(a1 + 16) = result;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
