/*
 * XREFs of dllmain_dispatch @ 0x1802D1518
 * Callers:
 *     _DllMainCRTStartup @ 0x1802D1650 (_DllMainCRTStartup.c)
 * Callees:
 *     DllMain @ 0x18016BD50 (DllMain.c)
 *     dllmain_crt_dispatch @ 0x1802D1320 (dllmain_crt_dispatch.c)
 *     __scrt_dllmain_exception_filter @ 0x1802D17CC (__scrt_dllmain_exception_filter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !fdwReason && dword_1808C7ED0 <= 0 )
    return 0LL;
  if ( fdwReason - 1 > 1
    || (!pRawDllMain || (v7 = ((__int64 (*)(void))pRawDllMain)()) != 0)
    && (v7 = dllmain_crt_dispatch((__int64)hinstDLL, fdwReason, (__int64)lpvReserved)) != 0 )
  {
    v8 = DllMain(hinstDLL, fdwReason, lpvReserved);
    v7 = v8;
    if ( fdwReason == 1 && !v8 )
    {
      DllMain(hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch((__int64)hinstDLL, 0, (__int64)lpvReserved);
      if ( pRawDllMain )
        pRawDllMain(hinstDLL, 0LL, lpvReserved);
    }
    if ( !fdwReason || fdwReason == 3 )
      JUMPOUT(0x1802D15F6LL);
  }
  return v7;
}
