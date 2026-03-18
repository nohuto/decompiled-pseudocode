/*
 * XREFs of ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC78
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1E0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000B380 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 */

bool __fastcall CBackdropVisualImage::HasValidRenderingRealization(
        CBackdropVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  const struct RenderTargetInfo *v2; // rdx
  CBackdropVisualImage *v3; // rcx

  return CBackdropVisualImage::IsValid(this) && !CBackdropVisualImage::RequiresRendering(v3, v2);
}
