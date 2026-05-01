/*
 * XREFs of _lambda_41a5be3df1abdb7d9ca9b34ed498e931_::operator() @ 0x1805CBB6C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_41a5be3df1abdb7d9ca9b34ed498e931__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805DAC60 (std--_Func_impl_no_alloc__lambda_41a5be3df1abdb7d9ca9b34ed498e931__void_winrt--Wind_ea_1805DAC60.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802B4764 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_41a5be3df1abdb7d9ca9b34ed498e931_::operator()(__int64 a1, IUnknown **a2)
{
  int v4; // eax
  HRESULT v5; // eax
  IUnknown *v6; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+50h] [rbp-28h] BYREF
  __int128 v12; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  IUnknown **v15; // [rsp+88h] [rbp+10h]

  v15 = a2;
  v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7B9,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7BA,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = *a2;
  v11 = 0;
  v12 = 0LL;
  lpVtbl = v6->lpVtbl;
  v9 = *(_OWORD *)(a1 + 28);
  v10 = *(_OWORD *)(a1 + 8);
  v8 = ((__int64 (__fastcall *)(IUnknown *, __int128 *, _QWORD, __int128 *))lpVtbl[2].QueryInterface)(
         v6,
         &v10,
         *(unsigned int *)(a1 + 24),
         &v9);
  winrt::check_hresult(&v14, v8, (__int64)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
