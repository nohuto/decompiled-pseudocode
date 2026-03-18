/*
 * XREFs of BreakOnUnexpectedErrors @ 0x180254800
 * Callers:
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18025475C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x18023AC24 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool BreakOnUnexpectedErrors()
{
  char v0; // di
  bool Dword; // bl
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 0x20019u, &hKey) )
  {
    Dword = RegGetDword(hKey, L"BreakOnUnexpectedErrors", &v3);
    RegCloseKey(hKey);
    if ( Dword )
      return v3 != 0;
  }
  return v0;
}
