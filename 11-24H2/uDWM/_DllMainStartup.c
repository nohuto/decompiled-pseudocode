/*
 * XREFs of _DllMainStartup @ 0x1800F5430
 * Callers:
 *     <none>
 * Callees:
 *     _DllMainCRTStartup @ 0x18009D4E0 (_DllMainCRTStartup.c)
 *     InitializeDefaultHeap @ 0x1800F4A20 (InitializeDefaultHeap.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  void *v3; // rdi
  HINSTANCE v4; // rsi
  BOOL v5; // ebx

  v3 = lpReserved;
  v4 = hinstDLL;
  v5 = 1;
  if ( !fdwReason )
  {
    if ( !g_fAlwaysDetach && lpReserved )
      return v5;
    if ( avalonutil_proc_attached <= 0 )
      return 0;
    --avalonutil_proc_attached;
    fdwReason = 0;
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( fdwReason == 1 )
  {
    ++avalonutil_proc_attached;
    InitializeDefaultHeap();
    lpReserved = v3;
    fdwReason = 1;
    hinstDLL = v4;
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( fdwReason - 2 <= 1 )
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  return v5;
}
