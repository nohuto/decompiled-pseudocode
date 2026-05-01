/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18029CFCC
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18016F840 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18029CF38 (--1-$test_watcher@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18029CF60 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@t.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18029CFEC (-start@-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AU_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8AE4 (--1-$test_data_control@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805B5508 (-Release@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::Release(v1);
  return result;
}
