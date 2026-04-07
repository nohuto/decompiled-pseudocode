/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800F5020
 * Callers:
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800F4EA0 (-IsWCOSContainer@@YA_NXZ.c)
 *     BreakForInstrumentation @ 0x1800F4EF8 (BreakForInstrumentation.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x1800F4FB0 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool __fastcall RegGetHKLMDword(LPCWSTR lpSubKey, const WCHAR *a2, unsigned int *a3)
{
  bool Dword; // bl
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  Dword = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20019u, &hKey) )
  {
    Dword = RegGetDword(hKey, a2, a3);
    RegCloseKey(hKey);
  }
  return Dword;
}
