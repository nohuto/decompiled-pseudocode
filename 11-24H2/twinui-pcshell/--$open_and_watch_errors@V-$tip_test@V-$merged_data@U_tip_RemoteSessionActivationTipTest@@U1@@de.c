/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180657254
 * Callers:
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A084 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BB50 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670BF4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 * Callees:
 *     ??0?$test_watcher@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1806586BC (--0-$test_watcher@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806588B8 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18065D0D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D908 (-open_helper@-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>>(
        struct wil::details::IFailureCallback *a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::open_helper(&v3);
  tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::ensure_data(&v3);
  tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>(a1);
  wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>(&v3);
  return a1;
}
