/*
 * XREFs of ?Release@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18064FEE0
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649980 (--1-$com_ptr_t@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180654968 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_return.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180654DBC (-start@-$tip_test@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 * Callees:
 *     ??1?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180649D18 (--1-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::~merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
