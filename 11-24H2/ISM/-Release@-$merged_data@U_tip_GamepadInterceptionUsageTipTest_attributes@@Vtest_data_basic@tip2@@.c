/*
 * XREFs of ?Release@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x1801080DC
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180107AB8 (--1-$com_ptr_t@V-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18010947C (-start@-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_HapticMouseAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18018E1A8 (-start@-$tip_test@V-$merged_data@U_tip_HapticMouseAttachedTipTest_attributes@@Vtest_data_basic@t.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18018E248 (-start@-$tip_test@V-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18018E2E8 (-start@-$tip_test@V-$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basi.c)
 * Callees:
 *     ??1?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180107AE4 (--1-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 84);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_HapticPenAttachedTipTest_attributes,tip2::test_data_basic>::~merged_data<_tip_HapticPenAttachedTipTest_attributes,tip2::test_data_basic>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
