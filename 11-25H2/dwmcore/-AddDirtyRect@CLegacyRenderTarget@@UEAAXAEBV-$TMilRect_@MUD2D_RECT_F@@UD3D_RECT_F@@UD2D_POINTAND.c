/*
 * XREFs of ?AddDirtyRect@CLegacyRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacyRenderTarget::AddDirtyRect(__int64 a1, float *a2)
{
  CTargetDirtyBase<8>::AddDirtyRect(a1 + 30992, a2);
}
