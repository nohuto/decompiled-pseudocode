/*
 * XREFs of ?GetCoordinateSpaceVisualNoRef@CCompositionPointLight@@UEBAPEAVCVisual@@XZ @ 0x1801EB4E0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CCompositionPointLight::GetCoordinateSpaceVisualNoRef(CCompositionPointLight *this)
{
  return (struct CVisual *)*((_QWORD *)this + 32);
}
