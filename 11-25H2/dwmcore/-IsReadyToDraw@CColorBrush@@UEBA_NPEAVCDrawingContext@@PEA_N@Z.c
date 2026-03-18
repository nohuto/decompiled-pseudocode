/*
 * XREFs of ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18005A960 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180072230 (-Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0440 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D3ED0 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CColorBrush::IsReadyToDraw(CColorBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = COERCE_FLOAT(*((_DWORD *)this + 29) & _xmm) < 0.0000011920929;
  return 1;
}
