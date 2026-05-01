/*
 * XREFs of ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x18068EB68
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z @ 0x180693FD0 (-ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z.c)
 */

bool GetInstalledBrowserChannelInfo()
{
  bool v0; // bl
  unsigned __int16 *v1; // r8
  const unsigned __int16 *phkResult; // [rsp+20h] [rbp-458h]
  HKEY hKey; // [rsp+30h] [rbp-448h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-438h] BYREF
  struct HKEY__ v6; // [rsp+250h] [rbp-228h] BYREF

  _o_wcscpy_s(SubKey, 260LL, L"Software\\Microsoft\\EdgeUpdate\\Clients\\");
  _o_wcscat_s(SubKey, 260LL, L"{56EB18F8-B008-4CBD-B6D2-8C97FE7E9062}");
  v0 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20219u, &hKey) )
  {
    v0 = BrowserChannels::Private::ReadExePath(
           (BrowserChannels::Private *)hKey,
           &v6,
           v1,
           (unsigned int)L"msedge.exe",
           phkResult);
    RegCloseKey(hKey);
  }
  return v0;
}
