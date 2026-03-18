/*
 * XREFs of ?GetFlatteningVisualTree@CLayerVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1802505BC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CLayerVisual::GetFlatteningVisualTree(CLayerVisual *this)
{
  return (struct CVisualTree *)*((_QWORD *)this + 87);
}
