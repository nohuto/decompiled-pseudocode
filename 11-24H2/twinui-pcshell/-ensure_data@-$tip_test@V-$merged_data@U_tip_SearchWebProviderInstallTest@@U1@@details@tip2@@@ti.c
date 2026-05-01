/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803C2984
 * Callers:
 *     ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1803B50C8 (--0-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@A.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@1@XZ @ 0x1803B5FA4 (--C-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA-A.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803BC17C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803C0D14 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@2@XZ @ 0x1803C48EC (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@t.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAA@XZ @ 0x1803B4DA8 (--0-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803B55D0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returnc.c)
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803BE310 (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x1B8uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
