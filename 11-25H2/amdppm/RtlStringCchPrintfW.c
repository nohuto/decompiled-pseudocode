/*
 * XREFs of RtlStringCchPrintfW @ 0x14000BE5C
 * Callers:
 *     EmiProcessIoctl @ 0x14003CDD0 (EmiProcessIoctl.c)
 *     PopulateEnergyEstimationModel @ 0x1400442A8 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x140044408 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x140044614 (ReadPowerCurve.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147483643;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    pszDest[v5] = 0;
    return v4;
  }
  v4 = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return v4;
}
