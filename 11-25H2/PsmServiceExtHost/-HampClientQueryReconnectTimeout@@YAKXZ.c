/*
 * XREFs of ?HampClientQueryReconnectTimeout@@YAKXZ @ 0x180071D4C
 * Callers:
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DB38 (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180063800 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 */

__int64 HampClientQueryReconnectTimeout(void)
{
  LSTATUS v0; // eax
  bool v1; // sf
  __int64 result; // rax
  unsigned int v3; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+20h] BYREF

  v4 = 0;
  hKey = 0LL;
  v3 = 60000;
  v0 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v1 = v0 < 0;
  if ( v0 > 0 )
    v1 = 1;
  if ( v1
    || (v4 = 4, HampSystemQueryValue(hKey, L"ClientReconnectTimeoutMs", (BYTE *)&v3, &v4) < 0)
    || v4 != 4
    || (result = v3) == 0 )
  {
    result = 60000LL;
    v3 = 60000;
  }
  if ( hKey )
  {
    RegCloseKey(hKey);
    return v3;
  }
  return result;
}
