/*
 * XREFs of ?GetSharedModeType@@YA?AW4SharedModeType@@XZ @ 0x180350C10
 * Callers:
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1806403AC (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 GetSharedModeType()
{
  __int64 result; // rax
  unsigned int pvData; // [rsp+40h] [rbp-28h] BYREF
  int v2; // [rsp+44h] [rbp-24h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-20h] BYREF
  DWORD v4; // [rsp+4Ch] [rbp-1Ch] BYREF

  result = (unsigned int)`GetSharedModeType'::`2'::sharedModeCached;
  if ( `GetSharedModeType'::`2'::sharedModeCached == -1 )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SharedPC",
      L"SharedPCMode",
      0x20010010u,
      0LL,
      &pvData,
      &pcbData);
    v2 = 0;
    v4 = 4;
    RegGetValueW(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SharedPC",
      L"DoNotCacheSharedPCMode",
      0x20010010u,
      0LL,
      &v2,
      &v4);
    result = pvData;
    if ( !v2 )
      `GetSharedModeType'::`2'::sharedModeCached = pvData;
  }
  return result;
}
