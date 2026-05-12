/*
 * XREFs of RtlStringCchPrintfW @ 0x140039774
 * Callers:
 *     RaidCreateDeviceName @ 0x1400396C8 (RaidCreateDeviceName.c)
 *     StorCreateSymbolicLink @ 0x14004D2B0 (StorCreateSymbolicLink.c)
 *     StorDeleteSymbolicLink @ 0x14004D4A8 (StorDeleteSymbolicLink.c)
 *     NvmeCreateSymbolicLink @ 0x140087B08 (NvmeCreateSymbolicLink.c)
 *     NvmeDeleteSymbolicLink @ 0x140087CD4 (NvmeDeleteSymbolicLink.c)
 *     RaidUnitGetDeviceId @ 0x14009E9BC (RaidUnitGetDeviceId.c)
 *     RaidUnitGetInstanceId @ 0x14009F19C (RaidUnitGetInstanceId.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B0FA0 (StorpLogPhysicalTopologyInfo.c)
 *     NvmeNamespaceGetDeviceId @ 0x140103C30 (NvmeNamespaceGetDeviceId.c)
 *     NvmeNamespaceGetDeviceIdEx @ 0x140103D18 (NvmeNamespaceGetDeviceIdEx.c)
 *     NvmeNamespaceGetInstanceId @ 0x1401045F8 (NvmeNamespaceGetInstanceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x140185CFC (RaUnitQueryDeviceTextIrp.c)
 *     NvmeNamespaceQueryDeviceTextIrp @ 0x1401A68F0 (NvmeNamespaceQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  NTSTATUS v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      pszDest[v4] = 0;
  }
  return v5;
}
