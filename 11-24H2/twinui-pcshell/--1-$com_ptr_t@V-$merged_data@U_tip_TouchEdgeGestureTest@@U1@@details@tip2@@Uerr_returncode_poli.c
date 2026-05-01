/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C6944
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801ED1D0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289A38 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C691C (--1-$test_watcher@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8950 (--1-$test_data_control@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D0D24 (--1-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     _lambda_e144cef1f387178a308841941c02025f_::__lambda_e144cef1f387178a308841941c02025f_ @ 0x180593C90 (_lambda_e144cef1f387178a308841941c02025f_--__lambda_e144cef1f387178a308841941c02025f_.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@AEAAKXZ @ 0x180593F58 (-Release@-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::Release(v1);
  return result;
}
