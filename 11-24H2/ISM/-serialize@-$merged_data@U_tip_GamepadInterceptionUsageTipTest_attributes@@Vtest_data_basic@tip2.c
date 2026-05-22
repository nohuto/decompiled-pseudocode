/*
 * XREFs of ?serialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180109100
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@1@@Z @ 0x18010696C (--$-RV-$nvp@AEAU-$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@tson@@@output_archive.c)
 *     ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x180106A10 (--$-RV-$nvp@AEAVtest_data_basic@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAVte.c)
 */

tson::output_archive *__fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  tson::output_archive *result; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  const char *v8; // [rsp+30h] [rbp-20h] BYREF
  char v9; // [rsp+38h] [rbp-18h]
  _QWORD *v10; // [rsp+40h] [rbp-10h]

  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v7[0] = a1 + 256;
    else
      v7[0] = 0LL;
    v9 = 7;
    v7[1] = a1 + 184;
    v8 = "metrics";
    v10 = v7;
    result = tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<tip2::test_data_basic> &>>(
               a2,
               (__int64)&v8);
  }
  if ( (a3 & 1) != 0 )
  {
    v9 = 4;
    v8 = "test";
    v10 = (_QWORD *)((a1 + 256) & -(__int64)(a1 != 0));
    return tson::output_archive::operator()<tson::nvp<tip2::test_data_basic &>>(a2, (__int64)&v8);
  }
  return result;
}
