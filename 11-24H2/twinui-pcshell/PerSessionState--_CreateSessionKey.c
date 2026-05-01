/*
 * XREFs of PerSessionState::_CreateSessionKey @ 0x1801E5DE4
 * Callers:
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D11C4 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS PerSessionState::_CreateSessionKey()
{
  LSTATUS result; // eax
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp+10h] BYREF

  hKey = 0LL;
  result = SHCreateSessionKey(131078LL, &hKey);
  if ( result >= 0 )
  {
    phkResult = 0LL;
    if ( !RegCreateKeyExW(hKey, L"DesktopSwitchCompleted", 0, 0LL, 1u, 0x20006u, 0LL, &phkResult, 0LL) )
      RegCloseKey(phkResult);
    return RegCloseKey(hKey);
  }
  return result;
}
