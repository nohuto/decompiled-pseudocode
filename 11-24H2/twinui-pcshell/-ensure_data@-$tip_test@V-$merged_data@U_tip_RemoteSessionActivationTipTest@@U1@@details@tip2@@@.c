/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18065D0D8
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180657254 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@de.c)
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180659E7C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B430 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806581B4 (--0-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806588B8 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180658D90 (--4-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x1A0uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
