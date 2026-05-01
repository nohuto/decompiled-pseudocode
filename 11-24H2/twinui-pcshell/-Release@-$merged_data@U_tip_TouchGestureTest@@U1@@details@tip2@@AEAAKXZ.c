/*
 * XREFs of ?Release@?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@AEAAKXZ @ 0x180591D58
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18058FCA8 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18058FD1C (--4-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180592F1C (-reset@-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@QEAA@XZ @ 0x18058FCC8 (--1-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 78);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::~merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
