/*
 * XREFs of ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1805E5958
 * Callers:
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1805E4E2C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x18068C50C (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18008578C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

char __fastcall LoggingUtil::AppIdCensorUtility::ExtractDomain(LPCWSTR lpszUrl, unsigned __int16 **a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  $2B4FDC4BF487E67F052937EE78FAE255 UrlComponents; // [rsp+20h] [rbp-298h] BYREF
  WCHAR v10[264]; // [rsp+90h] [rbp-228h] BYREF

  v2 = 0;
  *a2 = 0LL;
  if ( lpszUrl )
  {
    memset_0(&UrlComponents, 0, sizeof(UrlComponents));
    UrlComponents.dwStructSize = 104;
    memset_0(v10, 0, 0x202uLL);
    UrlComponents.dwHostNameLength = 257;
    UrlComponents.lpszHostName = v10;
    v5 = -1LL;
    do
      ++v5;
    while ( lpszUrl[v5] );
    if ( InternetCrackUrlW(lpszUrl, v5, 0, &UrlComponents) || ResultFromKnownLastError() >= 0 )
    {
      v2 = 1;
      _AllocString<CTCoAllocPolicy>(v7, v6, v10, a2);
    }
  }
  return v2;
}
