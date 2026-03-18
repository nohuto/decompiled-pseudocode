/*
 * XREFs of ?GetPixelFormatInfo@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802D9780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetPixelFormatInfo(
        __int64 a1,
        _DWORD *a2)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetPixelFormatInfo(a1 - 256, a2);
}
