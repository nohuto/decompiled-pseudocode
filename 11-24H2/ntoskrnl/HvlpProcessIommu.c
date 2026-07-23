/*
 * XREFs of HvlpProcessIommu @ 0x1404CD7F4
 * Callers:
 *     HvlQueryVsmProtectionInfo @ 0x140A7A6F8 (HvlQueryVsmProtectionInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 */

bool HvlpProcessIommu()
{
  char v0; // bl
  int v1; // eax
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  int SystemInformation; // [rsp+28h] [rbp-28h] BYREF
  __int64 v5; // [rsp+2Ch] [rbp-24h]
  __int64 v6; // [rsp+34h] [rbp-1Ch]

  v0 = 0;
  v5 = 1LL;
  v6 = 0LL;
  SystemInformation = 1094930505;
  ReturnLength = 20;
  v1 = KiGetCpuVendor() - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return v0;
    HIDWORD(v5) = 1380011332;
  }
  else
  {
    HIDWORD(v5) = 1397904969;
  }
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, &SystemInformation, ReturnLength, &ReturnLength) == -1073741789 )
    return ReturnLength != 0;
  return v0;
}
