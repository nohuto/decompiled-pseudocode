/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180666678
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180666540 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806666C8 (--1-$test_data_control@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180666700 (--1-$test_watcher@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180666A70 (-start@-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x180666728 (-Release@-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::Release(v1);
  return result;
}
