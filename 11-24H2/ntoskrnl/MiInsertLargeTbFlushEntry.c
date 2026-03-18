/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x1403A4A2C
 * Callers:
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404FA094 (MiDecommitAddTbFlushEntries.c)
 *     MiInsertAweFlushList @ 0x14068279C (MiInsertAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x14068410C (MiWritePteHighLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
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
