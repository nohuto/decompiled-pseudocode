/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x14038BC74
 * Callers:
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiFlushValidPteFromTb @ 0x1403FF67C (MiFlushValidPteFromTb.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiZeroPageWorkMapping @ 0x14043AE70 (MiZeroPageWorkMapping.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7924 (MiDecommitAddTbFlushEntries.c)
 *     MiInsertAweFlushList @ 0x140676F7C (MiInsertAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x140678120 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x140678880 (MiWritePteHighLevel.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
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
