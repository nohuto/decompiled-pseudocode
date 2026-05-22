/*
 * XREFs of ?deserialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180108500
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x1801069B4 (--$-RV-$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAVtes.c)
 */

tson::input_archive *__fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::deserialize(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v3; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 4;
  v3 = "test";
  v5 = (a1 + 256) & -(__int64)(a1 != 0);
  return tson::input_archive::operator()<tson::nvp<tip2::test_data_basic &>>(a2, (__int64)&v3);
}
