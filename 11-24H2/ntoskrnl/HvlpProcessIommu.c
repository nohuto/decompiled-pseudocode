/*
 * XREFs of HvlpProcessIommu @ 0x1404D45E4
 * Callers:
 *     HvlQueryVsmProtectionInfo @ 0x140A7FC98 (HvlQueryVsmProtectionInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     KiGetCpuVendor @ 0x140B6D9F4 (KiGetCpuVendor.c)
 */

char HvlpProcessIommu()
{
  char v0; // bl
  int v1; // eax
  int v3; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+2Ch] [rbp-24h]
  __int64 v5; // [rsp+34h] [rbp-1Ch]

  v0 = 0;
  v4 = 1LL;
  v5 = 0LL;
  v3 = 1094930505;
  v1 = KiGetCpuVendor() - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return v0;
    HIDWORD(v4) = 1380011332;
  }
  else
  {
    HIDWORD(v4) = 1397904969;
  }
  if ( (unsigned int)ZwQuerySystemInformation(76LL, &v3) == -1073741789 )
    return 1;
  return v0;
}
