/*
 * XREFs of HvpFreeBin @ 0x140A674FC
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407D0164 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407D0228 (HvpMapHiveImage.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     CmpProtectPool @ 0x14047D948 (CmpProtectPool.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return guard_dispatch_icall_no_overrides(a3);
}
