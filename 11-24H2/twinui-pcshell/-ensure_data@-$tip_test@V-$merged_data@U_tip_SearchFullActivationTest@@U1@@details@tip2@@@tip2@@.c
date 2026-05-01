/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028BF8C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x180247188 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18028BEA0 (-start@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-A.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028BF04 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@2@XZ @ 0x18028BF30 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@.c)
 *     ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAAXIPEBD@Z @ 0x18028C64C (-config_set_identity@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@.c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028BBA8 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@$$V@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180291DE0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180291FC4 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(
        void **a1)
{
  void **v2; // rax
  void *v3; // rdx
  void *v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = (void **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,>(&v6);
    v3 = *v2;
    *v2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v4);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(&v6);
  }
  return a1;
}
