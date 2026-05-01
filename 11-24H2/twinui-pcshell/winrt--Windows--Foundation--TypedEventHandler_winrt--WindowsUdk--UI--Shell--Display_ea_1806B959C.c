/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___ @ 0x1806B959C
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180115058 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::__lambda_5b1893e84c025059ea9350e935de1321_ @ 0x1802CA3A8 (_lambda_5b1893e84c025059ea9350e935de1321_--__lambda_5b1893e84c025059ea9350e935de1321_.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 1));
  v6[2] = __abi_winrt_ptr_ctor(*a2);
  v4 = a2[1];
  a2[1] = 0LL;
  v6[3] = v4;
  v6[4] = a2[2];
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v6 = off_1808C3278;
  *a1 = v6;
  lambda_5b1893e84c025059ea9350e935de1321_::__lambda_5b1893e84c025059ea9350e935de1321_(a2);
  return a1;
}
