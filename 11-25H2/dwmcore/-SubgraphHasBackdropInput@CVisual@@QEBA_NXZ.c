/*
 * XREFs of ?SubgraphHasBackdropInput@CVisual@@QEBA_NXZ @ 0x18025B3BC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::SubgraphHasBackdropInput(CVisual *this)
{
  return *((_DWORD *)this + 66) > 0;
}
