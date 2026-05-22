/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180105814
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180106660 (-deserialize@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@ti.c)
 * Callees:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180105454 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 */

void __fastcall tip2::details::stored_flag_requirements::serialize<tson::input_archive>(__int64 a1, tson *a2)
{
  const char *v3; // [rsp+20h] [rbp-50h] BYREF
  char v4; // [rsp+28h] [rbp-48h]
  __int64 v5; // [rsp+30h] [rbp-40h]
  const char *v6; // [rsp+38h] [rbp-38h] BYREF
  char v7; // [rsp+40h] [rbp-30h]
  __int64 v8; // [rsp+48h] [rbp-28h]
  const char *v9; // [rsp+50h] [rbp-20h] BYREF
  char v10; // [rsp+58h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp-10h]

  v5 = a1;
  v10 = 9;
  v9 = "req_clear";
  v7 = 7;
  v11 = a1 + 48;
  v6 = "req_any";
  v8 = a1 + 24;
  v4 = 7;
  v3 = "req_set";
  tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2, (__int64)&v3);
  tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2, (__int64)&v6);
  tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2, (__int64)&v9);
}
