/*
 * XREFs of ?GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ @ 0x1801FC73C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CVisualTreePath *__fastcall CDrawingContext::GetCurrentVisualTreePath(CDrawingContext *this)
{
  return (const struct CVisualTreePath *)*((_QWORD *)this + 996);
}
