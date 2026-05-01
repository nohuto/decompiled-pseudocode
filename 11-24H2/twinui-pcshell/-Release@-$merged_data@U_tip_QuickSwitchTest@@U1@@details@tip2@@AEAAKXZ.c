/*
 * XREFs of ?Release@?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@AEAAKXZ @ 0x18049F4B0
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18049C2D8 (--1-$com_ptr_t@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wi.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1804A0784 (-start@-$tip_test@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@X.c)
 * Callees:
 *     ??1?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@QEAA@XZ @ 0x18049C350 (--1-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>::~merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
