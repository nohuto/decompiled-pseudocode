/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180387088
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801E6388 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180383010 (--0-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18038339C (--1-$com_ptr_t@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_retu.c)
 *     ?Release@?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@AEAAKXZ @ 0x180385270 (-Release@-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x120uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
