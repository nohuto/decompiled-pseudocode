/*
 * XREFs of ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801FB9C8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::NotifyFrameContainsProtectedContent(CDrawingContext *this)
{
  if ( *((_BYTE *)g_pComposition + 6490) )
    *((_BYTE *)this + 7983) = 1;
  else
    *((_BYTE *)this + 7980) = 1;
}
