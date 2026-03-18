/*
 * XREFs of ?SetCacheInvalidationRequired@CWindowBackgroundTreatment@@QEAAX_N@Z @ 0x18022FA54
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBackgroundTreatment::SetCacheInvalidationRequired(CWindowBackgroundTreatment *this, char a2)
{
  *((_BYTE *)this + 301) = a2;
}
