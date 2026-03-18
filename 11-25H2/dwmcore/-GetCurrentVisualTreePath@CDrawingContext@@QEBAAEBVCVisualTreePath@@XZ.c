/*
 * XREFs of ?GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ @ 0x18020910C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CVisualTreePath *__fastcall CDrawingContext::GetCurrentVisualTreePath(CDrawingContext *this)
{
  return (const struct CVisualTreePath *)*((_QWORD *)this + 996);
}
