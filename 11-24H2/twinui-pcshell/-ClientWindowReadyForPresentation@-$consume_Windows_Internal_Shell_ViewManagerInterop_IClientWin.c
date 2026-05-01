/*
 * XREFs of ?ClientWindowReadyForPresentation@?$consume_Windows_Internal_Shell_ViewManagerInterop_IClientWindowState@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180362284
 * Callers:
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180364A70 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_ViewManagerInterop_IClientWindowState<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>::ClientWindowReadyForPresentation(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+40h] [rbp-18h] BYREF

  v1 = *a1;
  v5 = 0;
  v7[0] = 0;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 72LL))(v1, v7);
  winrt::check_hresult(&v4, v2, (__int64)&v5);
  return v7[0];
}
