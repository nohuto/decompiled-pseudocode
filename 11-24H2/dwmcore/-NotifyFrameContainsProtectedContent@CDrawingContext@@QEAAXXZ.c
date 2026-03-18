/*
 * XREFs of ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801EF728
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::NotifyFrameContainsProtectedContent(CDrawingContext *this)
{
  if ( *((_BYTE *)g_pComposition + 6466) )
    *((_BYTE *)this + 7983) = 1;
  else
    *((_BYTE *)this + 7980) = 1;
}
