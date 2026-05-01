/*
 * XREFs of ?Release@?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@AEAAKXZ @ 0x180593F58
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289A38 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C6944 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18059467C (-reset@-$com_ptr_t@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@QEAA@XZ @ 0x180593CF0 (--1-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 80);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>::~merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
