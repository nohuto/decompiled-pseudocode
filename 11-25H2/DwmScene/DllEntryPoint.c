/*
 * XREFs of DllEntryPoint @ 0x18000B260
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7BC @ 0x18000B7BC (sub_18000B7BC.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_18000B7BC();
  return dllmain_dispatch((charNode *)hinstDLL, fdwReason, lpReserved);
}
