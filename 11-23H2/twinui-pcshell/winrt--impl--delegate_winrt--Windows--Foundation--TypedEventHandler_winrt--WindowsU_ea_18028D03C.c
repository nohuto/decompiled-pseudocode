/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___ @ 0x18028D03C
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___ @ 0x18028CD68 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--Display_ea_18028CD68.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax

  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(*a2);
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = a2[2];
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_DWORD *)(a1 + 32) = 1;
  *(_QWORD *)a1 = off_1809866F8;
  return a1;
}
