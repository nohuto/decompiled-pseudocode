/*
 * XREFs of PerSessionState::_DoesSessionKeyExist @ 0x1801FE790
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180219870 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D11C4 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall PerSessionState::_DoesSessionKeyExist(LPCWSTR lpSubKey)
{
  char v2; // bl
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  hKey = 0LL;
  if ( (int)SHCreateSessionKey(131097LL, &hKey) >= 0 )
  {
    phkResult = 0LL;
    if ( !RegOpenKeyExW(hKey, lpSubKey, 0, 0x20019u, &phkResult) )
    {
      v2 = 1;
      RegCloseKey(phkResult);
    }
    RegCloseKey(hKey);
  }
  return v2;
}
