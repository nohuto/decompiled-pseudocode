/*
 * XREFs of ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180190880
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800A41A4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PixelAlign(double a1, int a2, double a3)
{
  unsigned int v3; // r8d
  int v4; // ecx
  __m128 v6; // rt1
  float v7; // [rsp+30h] [rbp+8h]

  v3 = 0x7FFFFFFF;
  if ( (_mm_cvtsi128_si32(*(__m128i *)&a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)&a1 - *(float *)&a1;
    v6.m128_f32[0] = FLOAT_N0_5;
    v4 = (int)*(float *)&a1 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v6));
  }
  else
  {
    v7 = *(float *)&a1 + 6291456.25;
    v4 = (int)(LODWORD(v7) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&a1 - (float)v4) & _xmm) <= 0.00390625 )
    return (unsigned int)v4;
  if ( a2 )
  {
    if ( *(float *)&a1 >= -2147483600.0 )
    {
      if ( *(float *)&a1 < 2147483600.0 )
        return (unsigned int)(int)ceilf_0(*(float *)&a1);
      return v3;
    }
  }
  else if ( *(float *)&a1 >= -2147483600.0 )
  {
    if ( *(float *)&a1 < 2147483600.0 )
      return (unsigned int)(int)floorf_0(*(float *)&a1);
    return v3;
  }
  return 0x80000000LL;
}
