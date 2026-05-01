/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180653778
 * Callers:
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@2@XZ @ 0x180654EE4 (-watch_errors@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@1@XZ @ 0x180658EF4 (--C-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18065DD30 (-start@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806489EC (--0-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649940 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A440 (--4-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x160uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
