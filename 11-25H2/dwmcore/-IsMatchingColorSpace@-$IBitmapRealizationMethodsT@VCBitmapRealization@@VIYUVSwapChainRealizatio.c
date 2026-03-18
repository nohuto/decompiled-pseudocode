/*
 * XREFs of ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801FBF60
 * Callers:
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802DFFC0 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealiz.c)
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802E11A0 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapReali.c)
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802E2AE0 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIG_ea_1802E2AE0.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063B40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA?AUPixelFormatInfo@@XZ @ 0x1802B6540 (-GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::IsMatchingColorSpace(
        __int64 a1,
        int a2)
{
  _DWORD *(__fastcall *v3)(__int64, _DWORD *); // rax
  _DWORD *PixelFormatInfo; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 24LL);
  if ( v3 == CDxHandleBitmapRealization::GetPixelFormatInfo )
  {
    PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(a1, v6);
  }
  else if ( (char *)v3 == (char *)CAtlasBitmapResource::GetPixelFormatInfo )
  {
    PixelFormatInfo = (_DWORD *)CAtlasBitmapResource::GetPixelFormatInfo(a1, v6);
  }
  else
  {
    PixelFormatInfo = v3(a1, v6);
  }
  return PixelFormatInfo[2] == a2;
}
