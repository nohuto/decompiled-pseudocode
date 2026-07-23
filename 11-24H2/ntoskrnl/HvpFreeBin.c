/*
 * XREFs of HvpFreeBin @ 0x140A634EC
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407DFF8C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     CmpProtectPool @ 0x140479388 (CmpProtectPool.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2, a3);
  CmpProtectPool(a3, a2, 4u);
  return guard_dispatch_icall_no_overrides(a3, a2);
}
