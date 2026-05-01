/*
 * XREFs of StringCchCopyW @ 0x180092140
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180057550 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v4; // [rsp+20h] [rbp-18h]

  return StringCopyWorkerW(
           &::pszDest,
           0x78uLL,
           (size_t *)pszSrc,
           L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
           v4);
}
