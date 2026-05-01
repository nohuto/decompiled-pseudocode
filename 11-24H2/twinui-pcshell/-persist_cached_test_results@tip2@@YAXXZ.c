/*
 * XREFs of ?persist_cached_test_results@tip2@@YAXXZ @ 0x1806433F0
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180669030 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x180193D60 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall tip2::persist_cached_test_results(tip2 *this)
{
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax

  ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
  if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
    || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
        (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
  }
}
