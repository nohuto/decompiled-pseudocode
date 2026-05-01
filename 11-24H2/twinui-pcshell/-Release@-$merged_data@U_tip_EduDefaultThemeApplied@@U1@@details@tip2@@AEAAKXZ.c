/*
 * XREFs of ?Release@?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@AEAAKXZ @ 0x180606010
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806049E4 (--1-$com_ptr_t@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180606CB8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@Uerr_returncod.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180606EE0 (-start@-$tip_test@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA-AU_.c)
 * Callees:
 *     ??1?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@QEAA@XZ @ 0x180604A90 (--1-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>::~merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
