/*
 * XREFs of ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801C3840
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::HasProtectedContent(CVisual *this)
{
  return *((_BYTE *)this + 106) >> 7;
}
