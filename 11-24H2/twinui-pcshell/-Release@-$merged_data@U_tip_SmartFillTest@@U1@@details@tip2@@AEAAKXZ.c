/*
 * XREFs of ?Release@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805AC4A8
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A1DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$c.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C69E8 (--1-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805ACC5C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805A9E58 (--1-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 94);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::~merged_data<_tip_SmartFillTest,_tip_SmartFillTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
