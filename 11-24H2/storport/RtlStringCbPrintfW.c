/*
 * XREFs of RtlStringCbPrintfW @ 0x1400375F0
 * Callers:
 *     PortMapDeleteAdapterEntry @ 0x1400374E0 (PortMapDeleteAdapterEntry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     PortMapDeleteLunEntry @ 0x14013AEE4 (PortMapDeleteLunEntry.c)
 *     NvmeDumpCreateDumpDriverInfo @ 0x14019F4E0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A08A8 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     PortOpenDeviceKey @ 0x1401B98D0 (PortOpenDeviceKey.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BB2C0 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  NTSTATUS v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147483643;
      goto LABEL_5;
    }
    if ( v7 == v5 )
LABEL_5:
      pszDest[v5] = 0;
  }
  return v6;
}
