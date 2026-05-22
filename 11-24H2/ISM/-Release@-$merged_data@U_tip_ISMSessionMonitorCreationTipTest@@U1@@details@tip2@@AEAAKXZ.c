/*
 * XREFs of ?Release@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x1800A4B14
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A46EC (--1-$com_ptr_t@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_ret.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A4F20 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800A58BC (-reset@-$com_ptr_t@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1800A470C (--1-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>::~merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>((__int64)pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
