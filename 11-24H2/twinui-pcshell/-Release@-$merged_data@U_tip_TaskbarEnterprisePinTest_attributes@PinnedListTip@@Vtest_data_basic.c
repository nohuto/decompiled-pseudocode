/*
 * XREFs of ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x1806940B4
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18068ADE0 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_dat.c)
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180698B8C (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806990D4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18068AE00 (--1-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@.c)
 */

__int64 __fastcall tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::Release(
        volatile signed __int32 *pv,
        unsigned int a2)
{
  unsigned __int32 v3; // ebx

  v3 = _InterlockedDecrement(pv + 84);
  if ( !v3 )
  {
    tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::~merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>(
      (__int64)pv,
      a2);
    CoTaskMemFree((LPVOID)pv);
  }
  return v3;
}
