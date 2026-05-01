/*
 * XREFs of _lambda_98adf11eaf318faf3b23b3a3a97862cc_::__lambda_98adf11eaf318faf3b23b3a3a97862cc_ @ 0x1802AE734
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_98adf11eaf318faf3b23b3a3a97862cc____::_1_::dtor$0 @ 0x1806D8BF5 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellViewCoordinato.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$20 @ 0x1806EC84A (_XamlLauncher--PublishServices_--_1_--dtor$20.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801E3084 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_98adf11eaf318faf3b23b3a3a97862cc_::__lambda_98adf11eaf318faf3b23b3a3a97862cc_(__int64 a1)
{
  volatile signed __int32 **v1; // rcx
  __int64 result; // rax

  v1 = (volatile signed __int32 **)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref(v1);
  return result;
}
