/*
 * XREFs of ?Release@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@AEAAKXZ @ 0x1803BE358
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803B55F0 (--1-$com_ptr_t@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@deta.c)
 * Callees:
 *     ??1?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@QEAA@XZ @ 0x1803B5700 (--1-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@QEA.c)
 */

__int64 __fastcall tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 112);
  if ( !v2 )
  {
    tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::~merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>((__int64)pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
