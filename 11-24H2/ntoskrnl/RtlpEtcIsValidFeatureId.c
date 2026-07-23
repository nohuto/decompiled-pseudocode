/*
 * XREFs of RtlpEtcIsValidFeatureId @ 0x1405EC8D4
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x1405EC610 (RtlIsFeatureEnabledForEnterprise.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405EC858 (RtlpEtcGetDwordFromRegistry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

bool __fastcall RtlpEtcIsValidFeatureId(unsigned int a1, int a2)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-1A8h]
  _DWORD v7[4]; // [rsp+30h] [rbp-198h] BYREF
  wchar_t v8[32]; // [rsp+40h] [rbp-188h] BYREF
  wchar_t pszDest[152]; // [rsp+80h] [rbp-148h] BYREF

  v4 = 0;
  v7[0] = 0;
  memset_0(pszDest, 0, 0x12CuLL);
  memset_0(v8, 0, sizeof(v8));
  v6 = a2;
  if ( RtlStringCchPrintfW(
         pszDest,
         0x96uLL,
         L"%s\\%lu",
         L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls",
         v6) >= 0
    && RtlStringCchPrintfW(v8, 0x20uLL, L"%lu", a1) >= 0
    && RtlpEtcGetDwordFromRegistry(pszDest, v8, v7) >= 0 )
  {
    return v7[0] != 0;
  }
  return v4;
}
