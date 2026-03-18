/*
 * XREFs of gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___ @ 0x1801E5C64
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x1801E5C84 (-CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z.c)
 */

void __fastcall gsl::final_action__lambda_1069039fee6473a405e5e4b65285ddf4___::_final_action__lambda_1069039fee6473a405e5e4b65285ddf4___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CBrushRenderingGraph::CleanupEffectStage(*(struct EffectStage **)a1);
}
