/*
 * XREFs of MiMakeZeroedPageTables @ 0x14038EACC
 * Callers:
 *     MiSplitBitmapPages @ 0x14038E594 (MiSplitBitmapPages.c)
 *     MiExpandPtes @ 0x14038E6D8 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1403903C8 (MiExpandSystemCache.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     MiExpandPartitionIds @ 0x1407EC098 (MiExpandPartitionIds.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A3A04C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140A6FB18 (MiReserveExistingDriverPtes.c)
 *     MiInitializeKernelCfg @ 0x140C485AC (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C4B004 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(int a1, int a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
