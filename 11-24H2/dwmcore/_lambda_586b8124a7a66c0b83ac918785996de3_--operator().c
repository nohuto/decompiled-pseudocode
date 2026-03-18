/*
 * XREFs of _lambda_586b8124a7a66c0b83ac918785996de3_::operator() @ 0x18027F038
 * Callers:
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x180097998 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 * Callees:
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801EC14C (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 */

void __fastcall lambda_586b8124a7a66c0b83ac918785996de3_::operator()(__int64 *a1, struct D2D_RECT_F *a2, double a3)
{
  CDDisplayRenderTarget::NotifyRenderedRect(*a1, a2, 1);
  CTargetDirtyBase<8>::AddTightDeviceDirtyRect(*a1 + 30776, (unsigned int *)a2, a3);
}
