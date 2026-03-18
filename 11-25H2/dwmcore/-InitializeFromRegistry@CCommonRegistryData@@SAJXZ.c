/*
 * XREFs of ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x180215474
 * Callers:
 *     ?Startup@@YAJXZ @ 0x180259CDC (-Startup@@YAJXZ.c)
 * Callees:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x18021553C (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x1802B7C58 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeFromRegistry(void)
{
  unsigned int v1; // [rsp+40h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+18h] BYREF

  hKey = 0LL;
  CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, &hKey) )
  {
    v1 = 0;
    RegReadDWORD(hKey, L"UseD3DDebugLayer", &v1);
    v1 = 0;
    if ( RegReadDWORD(hKey, L"Force10Level9", &v1) )
      CCommonRegistryData::m_fForce10Level9 = v1;
    v1 = 0;
    if ( RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v1) )
      CCommonRegistryData::m_fForce10OnWDDM1_0 = v1;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
