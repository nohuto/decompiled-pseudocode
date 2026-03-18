/*
 * XREFs of ?GetCoordinateSpaceVisualNoRef@CCompositionSpotLight@@UEBAPEAVCVisual@@XZ @ 0x1801E6D10
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801E6C30 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CCompositionSpotLight::GetCoordinateSpaceVisualNoRef(CCompositionSpotLight *this)
{
  return (struct CVisual *)*((_QWORD *)this + 38);
}
