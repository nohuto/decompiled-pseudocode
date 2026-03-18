/*
 * XREFs of ?IsBackdropWalk@CDrawingContext@@AEBA_NXZ @ 0x1801C31A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsBackdropWalk(CDrawingContext *this)
{
  return *((_QWORD *)this + 25) != 0LL;
}
