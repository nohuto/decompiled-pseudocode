/*
 * XREFs of DllMain @ 0x1800024CC
 * Callers:
 *     dllmain_dispatch @ 0x1800012D8 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
