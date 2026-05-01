/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028AE7C
 * Callers:
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180056020 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@1@XZ @ 0x18028AAC4 (--C-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_c.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@2@XZ @ 0x18028AC44 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A8FC (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil.c)
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x18028A91C (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802952B4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@ti.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = (volatile signed __int32 **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,>(&v6);
    v3 = *v2;
    *v2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release(v4);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>(&v6);
  }
  return a1;
}
