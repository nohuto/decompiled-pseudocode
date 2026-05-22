/*
 * XREFs of ?Release@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x1801062D8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180105C74 (--1-$com_ptr_t@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180107570 (-start@-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 * Callees:
 *     ??1?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180105CA0 (--1-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@detai.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 82);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::~merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>((__int64)pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
