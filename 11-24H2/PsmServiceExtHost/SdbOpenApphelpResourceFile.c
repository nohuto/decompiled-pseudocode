/*
 * XREFs of SdbOpenApphelpResourceFile @ 0x180095494
 * Callers:
 *     SdbpReadApphelpDisplayResources @ 0x180095DD8 (SdbpReadApphelpDisplayResources.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetPathResourceDll @ 0x180095FD8 (SdbGetPathResourceDll.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

HMODULE SdbOpenApphelpResourceFile()
{
  HMODULE Library; // rbx
  WCHAR LibFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  Library = 0LL;
  memset_0(LibFileName, 0, 0x208uLL);
  if ( (unsigned int)SdbGetPathResourceDll(LibFileName) )
  {
    Library = LoadLibraryExW(LibFileName, 0LL, 2u);
    if ( !Library )
    {
      GetLastError();
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return Library;
}
