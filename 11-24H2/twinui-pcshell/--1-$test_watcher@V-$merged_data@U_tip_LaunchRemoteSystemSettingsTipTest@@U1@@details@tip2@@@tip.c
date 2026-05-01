/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658B60
 * Callers:
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x18065967C (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065AF2C (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 *     __lambda_57788f35bdd9b54a58cb4d12640be97c_::operator()_::_1_::dtor$0 @ 0x18070273B (__lambda_57788f35bdd9b54a58cb4d12640be97c_--operator()_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::LaunchRemoteSystemSettings_::_1_::dtor$0 @ 0x1807028B1 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Launc_ea_1807028B1.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658898 (--1-$com_ptr_t@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_re.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
