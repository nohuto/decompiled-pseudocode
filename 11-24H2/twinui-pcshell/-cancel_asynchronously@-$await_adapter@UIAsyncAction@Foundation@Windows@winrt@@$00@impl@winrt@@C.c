/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x180335DE8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_6df262792ed19d9f37b8132f1161a915_@@CA@PEAX@Z @ 0x180329430 (-_lambda_invoker_cdecl_@_lambda_6df262792ed19d9f37b8132f1161a915_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_InitCoro$2 @ 0x180335BC4 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--WindowsUdk--UI--Sh.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::cancel_asynchronously(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+68h] [rbp+10h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = operator new(0x20uLL);
  v6 = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__InitCoro_2(
    &v5,
    &v6,
    (__int64)v2,
    (__int64 *)this);
  v3 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
  return v3;
}
