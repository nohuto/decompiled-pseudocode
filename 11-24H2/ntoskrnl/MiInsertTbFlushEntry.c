/*
 * XREFs of MiInsertTbFlushEntry @ 0x1402137F0
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     MiDeleteNonPagedPoolPte @ 0x14020E950 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14020EDF8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiTrimPteWorker @ 0x140212FB0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiGetPteFromCopyList @ 0x140252D60 (MiGetPteFromCopyList.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiCleanupLazyStampedPageTable @ 0x140305F5C (MiCleanupLazyStampedPageTable.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiClearPteAccessedBitRange @ 0x14038DA30 (MiClearPteAccessedBitRange.c)
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x14044D858 (MiReadyReservedView.c)
 *     MiRevokeExecutePte @ 0x14044DEC0 (MiRevokeExecutePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 *     MiMapMemoryDumpMdl @ 0x14049665C (MiMapMemoryDumpMdl.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7974 (MiDecommitAddTbFlushEntries.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiStackTheftFreezeProcessors @ 0x140676544 (MiStackTheftFreezeProcessors.c)
 *     MiFlushEnclaveTb @ 0x140681A4C (MiFlushEnclaveTb.c)
 *     MiInsertAweFlushList @ 0x14068398C (MiInsertAweFlushList.c)
 *     MiUnmapLegacyAwePage @ 0x1406842DC (MiUnmapLegacyAwePage.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14068FEB4 (MiCalibrateTbFlush.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1409752C0 (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A87C74 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
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
