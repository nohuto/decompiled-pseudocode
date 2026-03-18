/*
 * XREFs of ?HitTest@CBlurredWallpaperBackdropBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801FA330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBlurredWallpaperBackdropBrush::HitTest(
        CBlurredWallpaperBackdropBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm0_4
  bool v5; // al

  v5 = 0;
  if ( a3->x >= 0.0 && a2->width > a3->x )
  {
    y = a3->y;
    if ( y >= 0.0 && a2->height > y )
      v5 = 1;
  }
  *a4 = v5;
  return 0LL;
}
