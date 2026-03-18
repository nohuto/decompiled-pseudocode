/*
 * XREFs of HvpFreeBin @ 0x140A6A13C
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407DFA3C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407DFB00 (HvpMapHiveImage.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     CmpProtectPool @ 0x14047E198 (CmpProtectPool.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return guard_dispatch_icall_no_overrides(a3, a2, v5, v6);
}
