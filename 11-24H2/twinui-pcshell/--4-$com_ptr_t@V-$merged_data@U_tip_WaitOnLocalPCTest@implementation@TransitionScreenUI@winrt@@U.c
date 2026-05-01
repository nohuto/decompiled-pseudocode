/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180658DF0
 * Callers:
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D9E0 (-open_helper@-$tip_test@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@@2@XZ @ 0x18065DE44 (-watch_errors@-$tip_test@V-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenU.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@details@tip2@@AEAAKXZ @ 0x18065C0D0 (-Release@-$merged_data@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@U1234@@d.c)
 */

void **__fastcall wil::com_ptr_t<tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>,wil::err_returncode_policy>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip2::details::merged_data<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest,winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::Release(v4);
  return a1;
}
