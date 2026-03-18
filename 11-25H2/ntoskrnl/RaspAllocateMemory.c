/*
 * XREFs of RaspAllocateMemory @ 0x140468BD8
 * Callers:
 *     RaspInitializeGlyphData @ 0x140467A7C (RaspInitializeGlyphData.c)
 *     RaspRectangleCreate @ 0x140467F40 (RaspRectangleCreate.c)
 *     RaspInterpolatePoint @ 0x140467FB8 (RaspInterpolatePoint.c)
 *     RaspScanConvert @ 0x140468040 (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x1404687B8 (RaspCreateSegmentList.c)
 *     RaspCreatePointList @ 0x14068FA4C (RaspCreatePointList.c)
 *     RaspGetCompositeGlyphList @ 0x14068FB7C (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x14068FFA4 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x140690160 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x140690840 (RaspLoadGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
