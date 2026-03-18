/*
 * XREFs of DllMain @ 0x180224B80
 * Callers:
 *     dllmain_dispatch @ 0x180250EC8 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
