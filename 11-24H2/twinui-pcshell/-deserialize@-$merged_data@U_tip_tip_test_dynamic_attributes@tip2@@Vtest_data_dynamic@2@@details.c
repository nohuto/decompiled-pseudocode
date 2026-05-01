/*
 * XREFs of ?deserialize@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1803C25F0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803B4320 (--$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z.c)
 */

void __fastcall tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  tip2::test_data_dynamic::serialize<tson::input_archive>(
    (tip2::test_data_dynamic *)((a1 + 256) & -(__int64)(a1 != 0)),
    (struct tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
