/*
 * XREFs of RaspRasterize @ 0x14069CE9C
 * Callers:
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x14069C374 (RaspGetXExtent.c)
 * Callees:
 *     RaspScanConvert @ 0x14045E04C (RaspScanConvert.c)
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     RaspScaleCoordinates @ 0x1404B9388 (RaspScaleCoordinates.c)
 *     RaspCreatePointList @ 0x14069BE1C (RaspCreatePointList.c)
 *     RaspGetUnscaledGlyphData @ 0x14069C27C (RaspGetUnscaledGlyphData.c)
 */

__int64 __fastcall RaspRasterize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7,
        int *a8,
        __int64 *a9)
{
  __int64 *v9; // rdi
  __int64 v11; // rcx
  int UnscaledGlyphData; // ebx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  int v17; // edx
  __int64 *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  int v22; // [rsp+88h] [rbp+38h] BYREF

  v9 = a9;
  v22 = 0;
  v19 = 0LL;
  v11 = *(_QWORD *)(a1 + 8);
  v20 = 0LL;
  v21 = 0LL;
  UnscaledGlyphData = RaspGetUnscaledGlyphData(v11, a2, &v21, (__int64)&v22, a9);
  if ( UnscaledGlyphData >= 0 )
  {
    UnscaledGlyphData = RaspScaleCoordinates(a1, v21);
    if ( UnscaledGlyphData >= 0 )
    {
      v13 = RaspCreatePointList(v21, &v20, v9);
      v16 = v20;
      UnscaledGlyphData = v13;
      if ( v13 >= 0 )
      {
        UnscaledGlyphData = RaspScanConvert(v21, v20, v14, v15, a5, &v19, a8, (__int64)v9);
        if ( UnscaledGlyphData < 0 )
        {
          if ( v19 )
            RaspFreeMemory((__int64)v19, v9);
        }
        else
        {
          v17 = *((_DWORD *)v19 + 1) >> 2;
          *a6 = v19;
          *a7 = v17;
        }
      }
      if ( v16 )
        RaspFreeMemory(v16, v9);
    }
  }
  if ( v21 )
    RaspFreeMemory(v21, v9);
  return (unsigned int)UnscaledGlyphData;
}
