/*
 * XREFs of _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18027E580
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800D3FE0 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

void __fastcall lambda_8d63a026ee05ea8998b7edda19b5853b_::operator()(__int64 *a1, struct D2D_RECT_F *a2, double a3)
{
  CLegacyRenderTarget::NotifyRenderedRect(*a1, a2, 1);
  CTargetDirtyBase<8>::AddTightDeviceDirtyRect(*a1 + 30768, (unsigned int *)a2, a3);
}
