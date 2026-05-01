/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___ @ 0x180103048
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::Release @ 0x180103000 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180103000.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180103104 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  if ( *(_QWORD *)(a1 + 24) )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref();
  return result;
}
