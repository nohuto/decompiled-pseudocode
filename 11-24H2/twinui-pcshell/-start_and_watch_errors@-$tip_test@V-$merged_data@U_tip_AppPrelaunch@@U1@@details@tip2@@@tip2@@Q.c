/*
 * XREFs of ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@2@XZ @ 0x1805DD7BC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028B82C (-ensure_data@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV-$co.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028BA2C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802A9BB0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1805522A8 (--0-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@IEAA@A.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::start_and_watch_errors(
        void **a1,
        struct wil::details::IFailureCallback *a2)
{
  void *v4; // rcx
  _QWORD *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)v4 + 8) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::reset(a1);
  v5 = tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::ensure_data(a1);
  tip2::details::shared_data<1,0,0>::start(*v5 + 8LL, &v7);
  tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>(
    a2,
    (__int64 *)a1);
  return a2;
}
