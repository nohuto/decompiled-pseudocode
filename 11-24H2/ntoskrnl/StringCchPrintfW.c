/*
 * XREFs of StringCchPrintfW @ 0x14046A284
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildGuidString @ 0x140810FB8 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408110E0 (AdtpBuildHexInt64String.c)
 *     PfVerifyScenarioBuffer @ 0x140959760 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x140A05034 (AdtpBuildMessageString.c)
 *     AdtpBuildIPv4Strings @ 0x140A157AC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140A15904 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A46438 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  HRESULT v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    pszDest[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( cchDest )
    *pszDest = 0;
  return v5;
}
