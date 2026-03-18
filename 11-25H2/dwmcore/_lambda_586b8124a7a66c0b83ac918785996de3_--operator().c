/*
 * XREFs of _lambda_586b8124a7a66c0b83ac918785996de3_::operator() @ 0x18028A078
 * Callers:
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x1800C59E8 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 * Callees:
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801F8C50 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 */

void __fastcall lambda_586b8124a7a66c0b83ac918785996de3_::operator()(__int64 *a1, struct D2D_RECT_F *a2)
{
  CDDisplayRenderTarget::NotifyRenderedRect(*a1, a2, 1);
  CTargetDirtyBase<8>::AddTightDeviceDirtyRect(*a1 + 31160, (__int64)a2);
}
