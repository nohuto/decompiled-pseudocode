/*
 * XREFs of ??$?RV?$nvp@AEAU?$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@Vtest_data_basic@tip2@@@details@tip2@@@1@@Z @ 0x18010696C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180109100 (-serialize@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800A54B4 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800A6350 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<tip2::test_data_basic> &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  **(_DWORD **)(v4 + 8) = 0;
  tson::output_archive::finishNode(this, v5, v6, v7);
  return this;
}
