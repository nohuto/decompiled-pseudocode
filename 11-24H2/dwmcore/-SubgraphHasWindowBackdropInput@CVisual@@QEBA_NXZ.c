/*
 * XREFs of ?SubgraphHasWindowBackdropInput@CVisual@@QEBA_NXZ @ 0x18024FEA0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::SubgraphHasWindowBackdropInput(CVisual *this)
{
  return *((_DWORD *)this + 67) > 0;
}
