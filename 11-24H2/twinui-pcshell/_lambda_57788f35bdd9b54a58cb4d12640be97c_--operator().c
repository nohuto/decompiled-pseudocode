/*
 * XREFs of _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x18065967C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___::Invoke @ 0x18065A900 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___lambda_5.c)
 * Callees:
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180054CAC (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288C5C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028BD78 (--0-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805C9C88 (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180658668 (--0-$test_watcher@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658898 (--1-$com_ptr_t@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_re.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658ACC (--1-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658B60 (--1-$test_watcher@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18065D078 (-ensure_data@-$tip_test@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065D89C (-open_helper@-$tip_test@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_57788f35bdd9b54a58cb4d12640be97c_::operator()(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  unsigned int v4; // eax
  enum AsyncStatus v5; // edx
  _BYTE v6[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+58h] [rbp-10h] BYREF
  _BYTE *v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::open_helper(&v8);
  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::ensure_data(&v8);
  tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
    (struct wil::details::IFailureCallback *)v6,
    v3);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>,wil::err_returncode_policy>((void **)&v8);
  v4 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2);
  if ( !v4 )
    v4 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(a2);
  winrt::impl::check_status_canceled((winrt::impl *)v4, v5);
  if ( !winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(a2) )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
      (__int64 *)&v8,
      &v7);
    v8[336] = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>((void **)&v8);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock(v7 + 8);
  tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>((__int64)v6);
}
