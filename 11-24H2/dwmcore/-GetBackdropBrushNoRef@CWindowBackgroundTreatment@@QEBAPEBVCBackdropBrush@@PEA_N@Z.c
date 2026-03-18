/*
 * XREFs of ?GetBackdropBrushNoRef@CWindowBackgroundTreatment@@QEBAPEBVCBackdropBrush@@PEA_N@Z @ 0x18021889C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
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
