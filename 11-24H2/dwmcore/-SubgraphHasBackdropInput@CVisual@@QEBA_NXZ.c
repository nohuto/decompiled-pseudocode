/*
 * XREFs of ?SubgraphHasBackdropInput@CVisual@@QEBA_NXZ @ 0x18024FE8C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::SubgraphHasBackdropInput(CVisual *this)
{
  return *((_DWORD *)this + 66) > 0;
}
