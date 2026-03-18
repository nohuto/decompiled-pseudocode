/*
 * XREFs of MiSplitBitmapPages @ 0x14038E594
 * Callers:
 *     MiExpandPtes @ 0x14038E6D8 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403905A4 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1407DBFB4 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407EAFD0 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 *     MxMarkActiveDriverBits @ 0x140C4AC48 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 *     MiReduceSystemRegionType @ 0x14038F4F0 (MiReduceSystemRegionType.c)
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
