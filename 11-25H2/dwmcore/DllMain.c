/*
 * XREFs of DllMain @ 0x180230390
 * Callers:
 *     dllmain_dispatch @ 0x18025C4F8 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
