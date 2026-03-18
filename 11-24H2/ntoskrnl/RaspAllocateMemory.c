/*
 * XREFs of RaspAllocateMemory @ 0x140467288
 * Callers:
 *     RaspInitializeGlyphData @ 0x14046612C (RaspInitializeGlyphData.c)
 *     RaspRectangleCreate @ 0x1404665F0 (RaspRectangleCreate.c)
 *     RaspInterpolatePoint @ 0x140466668 (RaspInterpolatePoint.c)
 *     RaspScanConvert @ 0x1404666F0 (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x140466E68 (RaspCreateSegmentList.c)
 *     RaspCreatePointList @ 0x14069AD9C (RaspCreatePointList.c)
 *     RaspGetCompositeGlyphList @ 0x14069AECC (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x14069B2F4 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x14069B4B0 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14069BB90 (RaspLoadGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
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
