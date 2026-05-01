/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180296FD4
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x180273D10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A664 (--1-$test_data_control@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028B3EC (-ensure_data@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180296FAC (--1-$test_watcher@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D0DFC (--1-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x180289840 (-Release@-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::Release(v1);
  return result;
}
