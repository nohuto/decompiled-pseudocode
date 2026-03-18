/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0044C1C
 * Callers:
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0045160 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C00454E8 (UsbhGetRegUsbClassFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0046A7C (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetDeviceFlags @ 0x1C00519E8 (UsbhGetDeviceFlags.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0056F88 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0059864 (UsbhBuildUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0059B28 (UsbhDeleteUxdPortSettings.c)
 *     UsbhGetUxdPortKey @ 0x1C005A540 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005A7DC (UsbhPropagateUxdState.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147483643;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    pszDest[v6] = 0;
    return v5;
  }
  v5 = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return v5;
}
