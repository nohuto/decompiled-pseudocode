/*
 * XREFs of ?GetFlatteningVisualTree@CLayerVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18025BBEC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CLayerVisual::GetFlatteningVisualTree(CLayerVisual *this)
{
  return (struct CVisualTree *)*((_QWORD *)this + 86);
}
