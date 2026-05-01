/*
 * XREFs of ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800F10B4
 * Callers:
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1800F278C (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x1800F2F78 (-IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaExperienceHelpers::GetCortanaRegKey(LPCWSTR lpValueName, LPBYTE lpData, unsigned int *a3)
{
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  bool v7; // cc
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)lpData = 0;
  hKey = 0LL;
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Cortana", 0, 0x20019u, &hKey);
  v6 = v5;
  v7 = v5 <= 0;
  if ( v5
    || (cbData = 4, v5 = RegQueryValueExW(hKey, lpValueName, 0LL, 0LL, lpData, &cbData), v6 = v5, v7 = v5 <= 0, v5) )
  {
    if ( !v7 )
      v6 = (unsigned __int16)v5 | 0x80070000;
    if ( hKey )
      RegCloseKey(hKey);
    return v6;
  }
  else
  {
    if ( hKey )
      RegCloseKey(hKey);
    return 0LL;
  }
}
