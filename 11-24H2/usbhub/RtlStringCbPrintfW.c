/*
 * XREFs of RtlStringCbPrintfW @ 0x140025D00
 * Callers:
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140025A98 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetRegUsbClassFlags @ 0x140025F28 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1400263B0 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetDeviceFlags @ 0x14005A590 (UsbhGetDeviceFlags.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x14005D0DC (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdDeviceKey @ 0x14005E934 (UsbhBuildUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005EABC (UsbhDeleteUxdPortSettings.c)
 *     UsbhGetUxdPortKey @ 0x14005EFA0 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x14005F23C (UsbhPropagateUxdState.c)
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
  }
  else
  {
    v5 = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return v5;
}
