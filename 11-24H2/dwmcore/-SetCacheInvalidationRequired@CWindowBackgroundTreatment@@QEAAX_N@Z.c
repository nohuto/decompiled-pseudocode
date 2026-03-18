/*
 * XREFs of ?SetCacheInvalidationRequired@CWindowBackgroundTreatment@@QEAAX_N@Z @ 0x180224104
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBackgroundTreatment::SetCacheInvalidationRequired(CWindowBackgroundTreatment *this, char a2)
{
  *((_BYTE *)this + 301) = a2;
}
