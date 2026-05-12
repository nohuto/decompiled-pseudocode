/*
 * XREFs of StringCchPrintfA @ 0x1400BD388
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400B7B28 (StorpTelemetryNvmeSendNamespaceIoSizeDistributionData.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400BB4B0 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 * Callees:
 *     <none>
 */

HRESULT StringCchPrintfA(STRSAFE_LPSTR pszDest, size_t cchDest, STRSAFE_LPCSTR pszFormat, ...)
{
  HRESULT v4; // ebx
  size_t v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  else
  {
    v4 = -2147024809;
    if ( cchDest )
      *pszDest = 0;
  }
  return v4;
}
