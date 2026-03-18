/*
 * XREFs of ?GetBackdropBrushNoRef@CWindowBackgroundTreatment@@QEBAPEBVCBackdropBrush@@PEA_N@Z @ 0x18022455C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CBackdropBrush *__fastcall CWindowBackgroundTreatment::GetBackdropBrushNoRef(
        CWindowBackgroundTreatment *this,
        bool *a2)
{
  *a2 = *((_BYTE *)this + 302);
  return (const struct CBackdropBrush *)*((_QWORD *)this + 38);
}
