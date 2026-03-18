/*
 * XREFs of ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18020EECC
 * Callers:
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18028D3F4 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x180295930 (-UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::SetTransform(CComponentTransform2D *this, const struct D2D_MATRIX_3X2_F *a2)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_TransformMatrix,
           a2);
}
