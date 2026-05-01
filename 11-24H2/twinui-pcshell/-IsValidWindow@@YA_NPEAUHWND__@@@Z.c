/*
 * XREFs of ?IsValidWindow@@YA_NPEAUHWND__@@@Z @ 0x1801B3EE0
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180249290 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1804209D0 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidWindow(HWND a1)
{
  int v2; // eax
  char v3; // bl

  SetLastError(0);
  v2 = IsWindowInDestroy(a1);
  v3 = 0;
  if ( !v2 )
    return GetLastError() != 1400;
  return v3;
}
