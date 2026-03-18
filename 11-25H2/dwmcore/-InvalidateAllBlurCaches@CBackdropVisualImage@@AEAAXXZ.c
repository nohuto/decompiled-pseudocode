/*
 * XREFs of ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18000ABF8
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18003F7FC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 */

void __fastcall CBackdropVisualImage::InvalidateAllBlurCaches(CBackdropVisualImage *this)
{
  const struct CCachedVisualImage::CCachedTarget **v1; // rsi
  const struct CCachedVisualImage::CCachedTarget **i; // rbx

  v1 = (const struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
  for ( i = (const struct CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 23); i != v1; ++i )
    CBackdropVisualImage::InvalidateBlurCache(this, *i);
}
