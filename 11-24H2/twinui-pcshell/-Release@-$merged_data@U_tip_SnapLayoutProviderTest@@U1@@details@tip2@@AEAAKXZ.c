/*
 * XREFs of ?Release@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805B5508
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18029CFCC (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18029CFEC (-start@-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AU_.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B573C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncod.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805B4D68 (--1-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 88);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::~merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
