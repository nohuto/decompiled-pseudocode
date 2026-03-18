/*
 * XREFs of MiSplitBitmapPages @ 0x1403A52F4
 * Callers:
 *     MiExpandPtes @ 0x1403A5438 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403A7584 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1407EBE54 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407FAE60 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 *     MxMarkActiveDriverBits @ 0x140C5BFC8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1403A582C (MiMakeZeroedPageTables.c)
 *     MiReduceSystemRegionType @ 0x1403A6254 (MiReduceSystemRegionType.c)
 */

__int64 __fastcall MiSplitBitmapPages(__int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // r10

  MiReduceSystemRegionType(a1);
  return MiMakeZeroedPageTables(
           ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((v2 + ((unsigned __int64)(v1 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
