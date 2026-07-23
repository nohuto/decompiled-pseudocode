/*
 * XREFs of SiGetFirmwareType @ 0x140A4086C
 * Callers:
 *     SiGetSystemDeviceName @ 0x140A407A8 (SiGetSystemDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 */

__int64 SiGetFirmwareType()
{
  unsigned int v0; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v0 = 1;
  SystemInformation = 0LL;
  v3 = 0LL;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v0 = 0;
    if ( (int)v3 < 3 )
      return (unsigned int)v3;
  }
  return v0;
}
