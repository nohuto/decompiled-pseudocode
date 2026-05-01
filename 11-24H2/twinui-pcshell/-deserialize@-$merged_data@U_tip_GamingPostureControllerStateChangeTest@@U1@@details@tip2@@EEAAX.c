/*
 * XREFs of ?deserialize@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180336070
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18032BFC4 (--$serialize@Vinput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVinput_a.c)
 */

void __fastcall tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_GamingPostureControllerStateChangeTest::serialize<tson::input_archive>(
    (a1 + 256) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
