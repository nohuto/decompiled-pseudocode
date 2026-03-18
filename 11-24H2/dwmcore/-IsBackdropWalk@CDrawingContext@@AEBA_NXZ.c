/*
 * XREFs of ?IsBackdropWalk@CDrawingContext@@AEBA_NXZ @ 0x1801B34A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsBackdropWalk(CDrawingContext *this)
{
  return *((_QWORD *)this + 25) != 0LL;
}
