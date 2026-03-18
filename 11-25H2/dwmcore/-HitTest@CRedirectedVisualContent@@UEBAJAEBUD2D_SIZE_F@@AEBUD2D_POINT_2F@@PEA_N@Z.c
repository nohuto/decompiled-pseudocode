/*
 * XREFs of ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801C2530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1801C270C (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeede.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z @ 0x1801C2760 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::HitTest(
        CRedirectedVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  char IsInfinite; // al
  const struct D2D_RECT_F *v5; // rdx
  const struct D2D_POINT_2F *v6; // r8
  bool *v7; // r9
  bool v8; // r10

  IsInfinite = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::IsInfinite((char *)this + 88);
  v8 = 0;
  if ( !IsInfinite )
    v8 = IsPointInRect(v6, v5);
  *v7 = v8;
  return 0LL;
}
