/*
 * XREFs of TelpReadRegistryString @ 0x180003710
 * Callers:
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180003468 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelGetRegionalSettingsValue @ 0x180003FD0 (TelGetRegionalSettingsValue.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004E38 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180004FF4 (TelpReadOfflineSoftwareRegistryString.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

LSTATUS __fastcall TelpReadRegistryString(__int64 a1, const WCHAR *a2, const WCHAR *a3, void *pvData, unsigned int *a5)
{
  unsigned int *v5; // rbx
  LSTATUS result; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 pcbData; // [rsp+50h] [rbp+8h] BYREF

  pcbData = a1;
  v5 = a5;
  if ( a5 )
  {
    LODWORD(pcbData) = 2 * *a5;
    result = RegGetValueW(HKEY_LOCAL_MACHINE, a2, a3, 2u, 0LL, pvData, (LPDWORD)&pcbData);
    *v5 = (unsigned int)pcbData >> 1;
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x8D, (__int64)a3, (const char *)0x80070057LL);
    return -2147024809;
  }
  return result;
}
