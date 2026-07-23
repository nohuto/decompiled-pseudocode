/*
 * XREFs of MiMakeZeroedPageTables @ 0x14026CB1C
 * Callers:
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 *     MiExpandPtes @ 0x14026C728 (MiExpandPtes.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A33C7C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140A6AEB8 (MiReserveExistingDriverPtes.c)
 *     MiInitializeKernelCfg @ 0x140C5BA6C (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140C5E514 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(int a1, int a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
