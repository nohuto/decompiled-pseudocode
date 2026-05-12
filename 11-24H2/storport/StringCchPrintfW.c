/*
 * XREFs of StringCchPrintfW @ 0x140070E78
 * Callers:
 *     NvmeDeleteAuthKey @ 0x14006ED14 (NvmeDeleteAuthKey.c)
 *     NvmeSaveAuthKey @ 0x14006EFD0 (NvmeSaveAuthKey.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1400B3A88 (StorpTelemetryGetStartStopCycleCounter.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x140070EC8 (StringVPrintfWorkerW.c)
 *     StringValidateDestW @ 0x140070F2C (StringValidateDestW.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT result; // eax
  size_t *v4; // r8
  size_t v5; // r10
  wchar_t *v6; // r11
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  result = StringValidateDestW(pszDest, cchDest, (const size_t)pszFormat);
  if ( result >= 0 )
    return StringVPrintfWorkerW(v6, v5, v4, (STRSAFE_LPCWSTR)v4, va);
  if ( v5 )
    *v6 = 0;
  return result;
}
