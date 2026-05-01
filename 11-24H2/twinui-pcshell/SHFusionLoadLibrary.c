/*
 * XREFs of SHFusionLoadLibrary @ 0x1802DE708
 * Callers:
 *     DelayLoadCC @ 0x1802C9D2C (DelayLoadCC.c)
 * Callees:
 *     SHActivateContext @ 0x18022CFC4 (SHActivateContext.c)
 *     SHDeactivateContext @ 0x1802DE6E0 (SHDeactivateContext.c)
 */

HMODULE SHFusionLoadLibrary()
{
  HMODULE Library; // rbx
  ULONG_PTR ulCookie; // [rsp+30h] [rbp+8h] BYREF

  ulCookie = 0LL;
  if ( !SHActivateContext(&ulCookie) )
    return 0LL;
  Library = LoadLibraryExW(L"comctl32.dll", 0LL, 0x4000u);
  SHDeactivateContext(ulCookie);
  return Library;
}
