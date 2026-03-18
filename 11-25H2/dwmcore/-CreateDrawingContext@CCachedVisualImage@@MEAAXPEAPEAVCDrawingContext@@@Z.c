/*
 * XREFs of ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x180221B30
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::CreateDrawingContext(CCachedVisualImage *this, struct CDrawingContext **a2)
{
  CDrawingContext::Create(a2);
}
