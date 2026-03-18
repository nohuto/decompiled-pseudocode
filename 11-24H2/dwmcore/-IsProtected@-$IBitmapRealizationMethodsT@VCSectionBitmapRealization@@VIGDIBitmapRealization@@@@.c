/*
 * XREFs of ?IsProtected@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA_NXZ @ 0x1802D6D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::IsProtected(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - 312));
}
