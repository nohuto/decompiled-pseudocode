/*
 * XREFs of RaspAllocateMemory @ 0x14045EBE4
 * Callers:
 *     RaspInitializeGlyphData @ 0x14045DA88 (RaspInitializeGlyphData.c)
 *     RaspRectangleCreate @ 0x14045DF4C (RaspRectangleCreate.c)
 *     RaspInterpolatePoint @ 0x14045DFC4 (RaspInterpolatePoint.c)
 *     RaspScanConvert @ 0x14045E04C (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x14045E7C4 (RaspCreateSegmentList.c)
 *     RaspCreatePointList @ 0x14069BE1C (RaspCreatePointList.c)
 *     RaspGetCompositeGlyphList @ 0x14069BF4C (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x14069C374 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x14069C530 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14069CC10 (RaspLoadGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
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
