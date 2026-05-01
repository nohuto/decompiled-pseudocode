/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063ED30
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CE74 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063E30C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EEE0 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EF88 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1806428B0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEA.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18064332C (-open_helper@-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEAA_NP.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ @ 0x180641EEC (-Release@-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::Release(v1);
  return result;
}
