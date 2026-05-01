/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C89F8
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806001DC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$11 @ 0x1806CDA4B (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$11.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180603894 (-reset@-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returnco.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::~test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(a1);
}
