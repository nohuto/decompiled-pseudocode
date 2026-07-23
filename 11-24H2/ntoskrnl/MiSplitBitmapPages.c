/*
 * XREFs of MiSplitBitmapPages @ 0x14026C5E4
 * Callers:
 *     MiExpandPtes @ 0x14026C728 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x14026ECB4 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1407EC424 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407FB5D0 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 *     MxMarkActiveDriverBits @ 0x140C5E158 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiReduceSystemRegionType @ 0x14026D544 (MiReduceSystemRegionType.c)
 */

__int64 __fastcall MiSplitBitmapPages(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // r9d
  unsigned __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  int v7; // ecx

  v1 = MiReduceSystemRegionType(a1);
  v5 = v2 != 0 ? 4640 : 544;
  if ( v1 == 8 )
    goto LABEL_2;
  if ( v1 > 0xF || (v7 = 57552, !_bittest(&v7, v1)) )
  {
    if ( ((v2 != 0 ? 4640 : 544) & 0x1000) == 0 )
    {
      v5 = (unsigned int)v5 | 1;
      return MiMakeZeroedPageTables(
               ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               (((v3 + ((unsigned __int64)(v4 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               v5,
               8LL);
    }
  }
  if ( v1 == 4 )
LABEL_2:
    v5 = (unsigned int)v5 | 0x10;
  return MiMakeZeroedPageTables(
           ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((v3 + ((unsigned __int64)(v4 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5,
           8LL);
}
