/*
 * XREFs of _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18028959C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180052640 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

void __fastcall lambda_8d63a026ee05ea8998b7edda19b5853b_::operator()(__int64 *a1, const struct D2D_RECT_F *a2)
{
  CLegacyRenderTarget::NotifyRenderedRect(*a1, a2, 1);
  CTargetDirtyBase<8>::AddTightDeviceDirtyRect(*a1 + 31152, (__int64)a2);
}
