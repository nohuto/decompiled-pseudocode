/*
 * XREFs of LdrpFusionManifestCodePages @ 0x1800AC848
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800AC560 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlQueryActivationContextApplicationSettings @ 0x1800AC950 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18011ED5C (RtlpGetProcessCodepagesForLocale.c)
 *     MayBeLocaleName @ 0x18011FCAC (MayBeLocaleName.c)
 *     wcscmp @ 0x180127720 (wcscmp.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool __fastcall LdrpFusionManifestCodePages(_DWORD *a1, _DWORD *a2)
{
  bool v4; // zf
  wchar_t String1[16]; // [rsp+40h] [rbp-38h] BYREF

  *a1 = 0;
  *a2 = 0;
  if ( (int)RtlQueryActivationContextApplicationSettings(
              0LL,
              0LL,
              L"http://schemas.microsoft.com/SMI/2019/WindowsSettings",
              L"activeCodePage",
              String1,
              15LL,
              0LL) < 0 )
    goto LABEL_2;
  if ( !wcscmp(String1, L"UTF-8") )
  {
LABEL_8:
    *a1 = 65001;
    *a2 = 65001;
LABEL_2:
    v4 = *a1 == 0;
    return !v4;
  }
  if ( wcscmp(String1, L"Legacy") )
  {
    if ( !(unsigned __int8)MayBeLocaleName(String1) || (int)RtlpGetProcessCodepagesForLocale(String1, a1, a2) >= 0 )
      goto LABEL_2;
    goto LABEL_8;
  }
  RtlpGetProcessCodepagesForLocale(0LL, a1, a2);
  if ( *a1 == 65001 || (v4 = *a1 == 0, !*a1) )
  {
    *a1 = 1252;
    *a2 = 437;
    goto LABEL_2;
  }
  return !v4;
}
