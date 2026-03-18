/*
 * XREFs of MiInitializeTbFlushList @ 0x140233BB0
 * Callers:
 *     MiGetPteFromCopyList @ 0x1402259B0 (MiGetPteFromCopyList.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x140394414 (MiClearPteAccessedBitRange.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiQueryVpabAccessedState @ 0x1403AACE4 (MiQueryVpabAccessedState.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiRevokeExecutePte @ 0x140458A10 (MiRevokeExecutePte.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiMapMemoryDumpMdl @ 0x14049BB2C (MiMapMemoryDumpMdl.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiReadyReservedView @ 0x1404C04A8 (MiReadyReservedView.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404FA094 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140675374 (MiStackTheftFreezeProcessors.c)
 *     MiFlushEnclaveTb @ 0x14068084C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x1406824E4 (MiGetAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x14068410C (MiWritePteHighLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14068EDD8 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1408F8080 (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A8B784 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
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
