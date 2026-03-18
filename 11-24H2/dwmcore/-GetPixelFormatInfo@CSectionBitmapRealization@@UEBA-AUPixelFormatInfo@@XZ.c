/*
 * XREFs of ?GetPixelFormatInfo@CSectionBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801EABF0
 * Callers:
 *     ?GetPixelFormatInfo@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6C80 (-GetPixelFormatInfo@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealizat.c)
 *     ?GetPixelFormatInfo@CSectionBitmapRealization@@WPI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6CA0 (-GetPixelFormatInfo@CSectionBitmapRealization@@WPI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // eax

  v2 = a1[6] == 0;
  *a2 = a1[73];
  v3 = 3;
  if ( !v2 )
    v3 = a1[6];
  a2[1] = v3;
  a2[2] = a1[18];
  return a2;
}
