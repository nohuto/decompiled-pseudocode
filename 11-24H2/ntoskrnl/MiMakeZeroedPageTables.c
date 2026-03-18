/*
 * XREFs of MiMakeZeroedPageTables @ 0x1403A582C
 * Callers:
 *     MiSplitBitmapPages @ 0x1403A52F4 (MiSplitBitmapPages.c)
 *     MiExpandPtes @ 0x1403A5438 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiExpandPartitionIds @ 0x1407FBF28 (MiExpandPartitionIds.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A3E36C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReserveExistingDriverPtes @ 0x140A71AD8 (MiReserveExistingDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 *     MiInitializeKernelCfg @ 0x140C598DC (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5C384 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(int a1, int a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
