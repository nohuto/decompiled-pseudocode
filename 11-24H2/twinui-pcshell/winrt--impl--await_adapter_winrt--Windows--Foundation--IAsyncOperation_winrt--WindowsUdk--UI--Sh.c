/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_InitCoro$2 @ 0x180335BC4
 * Callers:
 *     ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x180335DE8 (-cancel_asynchronously@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@C.c)
 * Callees:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180335CE0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windo_ea_180335CE0.c)
 */

__int64 __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rax

  v4 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 17) = v4;
  *(_QWORD *)a3 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__ResumeCoro_1;
  *(_DWORD *)(a3 + 8) = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  *(_BYTE *)(a3 + 16) = 0;
  return winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__ResumeCoro_1(a3);
}
