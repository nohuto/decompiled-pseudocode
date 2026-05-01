/*
 * XREFs of ?Release@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@AEAAKXZ @ 0x180332338
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18032D0A0 (--1-$com_ptr_t@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Ue.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803360E0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180337FF0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2.c)
 * Callees:
 *     ??1?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@QEAA@XZ @ 0x18032D11C (--1-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 74);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::~merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
