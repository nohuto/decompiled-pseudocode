/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x14021C25C
 * Callers:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7974 (MiDecommitAddTbFlushEntries.c)
 *     MiInsertAweFlushList @ 0x14068398C (MiInsertAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x140685238 (MiWritePteHighLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 */

void __fastcall MiInsertLargeTbFlushEntry(__int64 a1, int a2, unsigned __int64 a3)
{
  signed int i; // esi

  if ( a2 >= 0 )
  {
    for ( i = 0; i <= a2; ++i )
    {
      a3 = (__int64)(a3 << 25) >> 16;
      MiInsertTbFlushEntry(a1, a3, 1LL, i);
    }
  }
}
