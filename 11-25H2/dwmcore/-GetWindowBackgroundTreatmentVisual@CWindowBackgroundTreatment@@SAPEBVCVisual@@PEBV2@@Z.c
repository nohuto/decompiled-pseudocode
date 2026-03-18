/*
 * XREFs of ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z @ 0x1801FBCC8
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CVisual *__fastcall CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(
        const struct CVisual *a1)
{
  const struct CVisual *result; // rax

  for ( result = a1; result; result = (const struct CVisual *)*((_QWORD *)result + 11) )
  {
    if ( (**((_DWORD **)result + 29) & 0x400000) != 0 )
      break;
  }
  return result;
}
