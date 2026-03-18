/*
 * XREFs of ?Initialize@OSInfo@@SAXXZ @ 0x18023074C
 * Callers:
 *     ?Startup@@YAJXZ @ 0x180259CDC (-Startup@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

void OSInfo::Initialize(void)
{
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-168h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-138h] BYREF

  memset(&SystemInfo, 0, sizeof(SystemInfo));
  GetSystemInfo(&SystemInfo);
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  GetVersionExW(&VersionInformation);
}
