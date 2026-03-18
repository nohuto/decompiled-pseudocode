/*
 * XREFs of ?Top@CLayerStack@@QEAAPEAVCLayer@@XZ @ 0x1801E2284
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CLayer *__fastcall CLayerStack::Top(CLayerStack *this)
{
  return *(struct CLayer **)(*(_QWORD *)this + 8LL * (unsigned int)(*((_DWORD *)this + 6) - 1));
}
