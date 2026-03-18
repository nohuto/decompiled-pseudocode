/*
 * XREFs of MiInsertTbFlushEntry @ 0x1403278B0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiFlushTbAsNeeded @ 0x140237D10 (MiFlushTbAsNeeded.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiReleasePteMappings @ 0x1402BF490 (MiReleasePteMappings.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiClearPteAccessedBitRange @ 0x1402D1788 (MiClearPteAccessedBitRange.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402FAF80 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402FB420 (MiInsertRecursiveTbFlushEntries.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiRevokeExecutePte @ 0x14037CEC0 (MiRevokeExecutePte.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiTrimPteWorker @ 0x140387E98 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140387FA0 (MiTrimPte.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiDeleteRotateVa @ 0x14039106C (MiDeleteRotateVa.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14042C6C4 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiCleanupLazyStampedPageTable @ 0x140432F28 (MiCleanupLazyStampedPageTable.c)
 *     MiZeroPageWorkMapping @ 0x14043AE70 (MiZeroPageWorkMapping.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
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
 *     MiInsertAweFlushList @ 0x140676F7C (MiInsertAweFlushList.c)
 *     MiUnmapLegacyAwePage @ 0x1406778CC (MiUnmapLegacyAwePage.c)
 *     MiClearSystemAccessBits @ 0x140678120 (MiClearSystemAccessBits.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x1406834F4 (MiCalibrateTbFlush.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1409CF9E0 (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A86B54 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  int i; // r11d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 *v16; // r10
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
