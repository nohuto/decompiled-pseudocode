/*
 * XREFs of _DllMainStartup @ 0x180010CC0
 * Callers:
 *     <none>
 * Callees:
 *     _DllMainCRTStartup @ 0x180003A20 (_DllMainCRTStartup.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  BOOL v3; // r9d

  v3 = 1;
  if ( !fdwReason )
  {
    if ( !g_fAlwaysDetach && lpReserved )
      return v3;
    if ( avalonutil_proc_attached <= 0 )
      return 0;
    --avalonutil_proc_attached;
    fdwReason = 0;
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( fdwReason == 1 )
  {
    ++avalonutil_proc_attached;
    fdwReason = 1;
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( fdwReason - 2 <= 1 )
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  return v3;
}
