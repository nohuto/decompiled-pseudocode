/*
 * XREFs of ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801B3A70
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::HasProtectedContent(CVisual *this)
{
  return *((_BYTE *)this + 106) >> 7;
}
