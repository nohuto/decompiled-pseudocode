/*
 * XREFs of MiInsertTbFlushEntry @ 0x1402432E0
 * Callers:
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MiGetPteFromCopyList @ 0x1402259B0 (MiGetPteFromCopyList.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140234E68 (MiInsertRecursiveTbFlushEntries.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     MiTrimPteWorker @ 0x140242AA4 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140242BA0 (MiTrimPte.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiClearPteAccessedBitRange @ 0x140394414 (MiClearPteAccessedBitRange.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiQueryVpabAccessedState @ 0x1403AACE4 (MiQueryVpabAccessedState.c)
 *     MiDeleteRotateVa @ 0x1403CDA5C (MiDeleteRotateVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiRevokeExecutePte @ 0x140458A10 (MiRevokeExecutePte.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
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
 *     MiDecommitAddTbFlushEntries @ 0x1404FA094 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140675374 (MiStackTheftFreezeProcessors.c)
 *     MiFlushEnclaveTb @ 0x14068084C (MiFlushEnclaveTb.c)
 *     MiInsertAweFlushList @ 0x14068279C (MiInsertAweFlushList.c)
 *     MiUnmapLegacyAwePage @ 0x1406830EC (MiUnmapLegacyAwePage.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14068EDD8 (MiCalibrateTbFlush.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1408F8080 (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A8B784 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  int i; // r10d
  __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 *v16; // r11
  __int64 v17; // rdx
  int v18; // r9d
  int v19; // eax
  unsigned __int64 v20; // rcx

  v5 = a4;
  v7 = a2;
  v8 = 4096LL << (9 * (unsigned __int8)a4);
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    v19 = *(_DWORD *)(a1 + 16);
    if ( (v19 & 4) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(a1 + 16) = v19 | 4;
  }
LABEL_2:
  for ( i = 0; ; i = 1 )
  {
    v10 = *(unsigned int *)(a1 + 28);
    if ( (_DWORD)v10 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 2) == 0 )
      {
        v11 = a1 + 8LL * (unsigned int)(v10 - 1);
        v12 = *(_QWORD *)(v11 + 40);
        if ( ((v12 >> 10) & 3) == v5 )
        {
          v13 = *(_QWORD *)(v11 + 40) & 0x3FFLL;
          if ( (v12 & 0xFFFFFFFFFFFFF000uLL) + v8 * (v13 + 1) == v7 && v13 + a3 > v13 && v13 + a3 <= 0x3FF )
          {
            *(_QWORD *)(a1 + 32) += a3;
            *(_QWORD *)(v11 + 40) = (v12 + a3) ^ (v12 ^ (v12 + a3)) & 0xFFFFFFFFFFFFFC00uLL;
            return;
          }
          v14 = (unsigned int)(v10 - 1) + 5LL;
          v15 = *(_QWORD *)(a1 + 8 * v14);
          v16 = (unsigned __int64 *)(a1 + 8 * v14);
          if ( (v15 & 0xFFFFFFFFFFFFF000uLL) == a3 * v8 + v7 )
          {
            v20 = v15 & 0x3FF;
            if ( v20 + a3 <= 0x3FF && v20 + a3 > v20 )
            {
              *(_QWORD *)(a1 + 32) += a3;
              *v16 = (v15 - a3 * v8 + a3) ^ ((v15 - a3 * v8) ^ (v15 - a3 * v8 + a3)) & 0xFFFFFFFFFFFFFC00uLL;
              return;
            }
          }
        }
      }
    }
    if ( (_DWORD)v10 != *(_DWORD *)(a1 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(a1 + 25) )
        *(_BYTE *)(a1 + 25) = 1;
      return;
    }
    if ( *(_BYTE *)(a1 + 25) )
      return;
    qsort((void *)(a1 + 40), *(unsigned int *)(a1 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(a1);
  }
  while ( a3 )
  {
    v17 = 1024LL;
    if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
      v17 = a3;
    *(_QWORD *)(a1 + 8 * v10 + 40) = v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v17 - 1) & 0x3FF | ((unsigned __int64)(v5 & 3) << 10);
    v18 = *(_DWORD *)(a1 + 28);
    *(_QWORD *)(a1 + 32) += v17;
    v10 = (unsigned int)(v18 + 1);
    *(_DWORD *)(a1 + 28) = v10;
    v7 += v17 * v8;
    a3 -= v17;
    if ( a3 && (_DWORD)v10 == *(_DWORD *)(a1 + 12) )
      goto LABEL_2;
  }
}
