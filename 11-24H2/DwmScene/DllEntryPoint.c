/*
 * XREFs of DllEntryPoint @ 0x18000B630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BDC8 @ 0x18000BDC8 (sub_18000BDC8.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_18000BDC8();
  return dllmain_dispatch((charNode *)hinstDLL, fdwReason, lpReserved);
}
