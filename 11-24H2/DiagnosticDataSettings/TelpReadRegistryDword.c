/*
 * XREFs of TelpReadRegistryDword @ 0x180003690
 * Callers:
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003B00 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelpReadGroupPolicySetting @ 0x180004A1C (TelpReadGroupPolicySetting.c)
 *     TelpReadLocalSetting @ 0x180004AE8 (TelpReadLocalSetting.c)
 *     TelpReadUsersPolicySetting @ 0x1800051AC (TelpReadUsersPolicySetting.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

LSTATUS __fastcall TelpReadRegistryDword(PVOID pvData, HKEY hkey, LPCWSTR lpSubKey, LPCWSTR lpValue)
{
  LSTATUS result; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( pvData )
  {
    pcbData = 4;
    result = RegGetValueW(hkey, lpSubKey, lpValue, 0x10010u, 0LL, pvData, &pcbData);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x5A, (__int64)lpSubKey, (const char *)0x80070057LL);
    return -2147024809;
  }
  return result;
}
