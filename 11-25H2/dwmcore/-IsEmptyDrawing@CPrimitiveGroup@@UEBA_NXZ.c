/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800D0EE0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800CF7F0 (-IsReadyToDraw@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0440 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0590 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18012EA2C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 62)
    || *((float *)this + 29) <= *((float *)this + 27)
    || *((float *)this + 30) <= *((float *)this + 28) )
  {
    return 1;
  }
  return result;
}
