/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806588F8
 * Callers:
 *     _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x180655DB8 (_lambda_2f7fc8b500d57ad36b179527aa3b33ab_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658C00 (--1-$test_watcher@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D9E0 (-open_helper@-$tip_test@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@2@XZ @ 0x18065DE44 (-watch_errors@-$tip_test@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenU.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@AEAAKXZ @ 0x18065C0D0 (-Release@-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@d.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::Release(v1);
  return result;
}
