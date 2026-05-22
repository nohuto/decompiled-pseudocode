/*
 * XREFs of ?serialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180107200
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800A6810 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800A7640 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1801058A0 (--$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archi.c)
 */

void __fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2, v6, v7, v8);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    v9 = (a1 + 248) & -(__int64)(a1 != 0);
    tson::output_archive::startNode(a2);
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 12LL) & 0x40000) != 0 )
      tip2::details::stored_flag_requirements::serialize<tson::output_archive>(v9 + 8, a2);
    tson::output_archive::finishNode(a2, v10, v11, v12);
  }
}
