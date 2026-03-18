/*
 * XREFs of ?GetDisplayId@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AVDisplayId@@XZ @ 0x1802D6C40
 * Callers:
 *     ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x180202D70 (-GetDisplayId@CColorKeyBitmap@@UEBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetDisplayId(
        __int64 a1,
        _DWORD *a2)
{
  return CColorKeyBitmapRealization::GetDisplayId(a1 - 312, a2);
}
