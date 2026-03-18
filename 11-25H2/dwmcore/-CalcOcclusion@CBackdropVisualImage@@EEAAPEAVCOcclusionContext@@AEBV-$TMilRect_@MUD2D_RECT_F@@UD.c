/*
 * XREFs of ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180082720
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008F30 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180082770 (-CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 */

__int64 __fastcall CBackdropVisualImage::CalcOcclusion(CBackdropVisualImage *this)
{
  if ( !*((_BYTE *)this + 2242) )
    return 0LL;
  CBackdropVisualImage::EnsureAncestorList(this);
  return CCachedVisualImage::CalcOcclusion(this);
}
