/*
 * XREFs of StringCbPrintfW @ 0x1800813B8
 * Callers:
 *     LdrpReportError @ 0x180032720 (LdrpReportError.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetVolumeHandle @ 0x18010C9C4 (RtlpGetVolumeHandle.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015B614 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     _vsnwprintf @ 0x180120D90 (_vsnwprintf.c)
 */

HRESULT StringCbPrintfW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  HRESULT v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    v6 = -2147024809;
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147024774;
    }
    else if ( v7 != v5 )
    {
      return v6;
    }
    pszDest[v5] = 0;
  }
  return v6;
}
