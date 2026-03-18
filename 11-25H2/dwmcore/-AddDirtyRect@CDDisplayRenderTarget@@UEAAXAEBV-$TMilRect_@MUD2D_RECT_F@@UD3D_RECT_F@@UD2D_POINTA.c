/*
 * XREFs of ?AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180232610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDDisplayRenderTarget::AddDirtyRect(__int64 a1, float *a2)
{
  CTargetDirtyBase<8>::AddDirtyRect(a1 + 31000, a2);
}
