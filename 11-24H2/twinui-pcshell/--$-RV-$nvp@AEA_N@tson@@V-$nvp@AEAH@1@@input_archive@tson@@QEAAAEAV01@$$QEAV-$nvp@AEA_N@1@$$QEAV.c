/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x18069C678
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18069DAF0 (-deserialize@-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEA.c)
 *     ?deserialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806A8170 (-deserialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinp.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180467D48 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

__int64 *__fastcall tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  bool *v6; // rsi
  __int64 v7; // rdx
  char *v8; // rax
  char v9; // cl
  bool v10; // al
  __int64 v11; // rax

  v3 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v3;
  v6 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v10 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v7 = *a1;
  v8 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v8 < *(_QWORD *)(*a1 + 16) )
  {
    v9 = *v8;
    *(_QWORD *)(v7 + 8) = v8 + 1;
    v10 = v9 != 0;
LABEL_6:
    *v6 = v10;
    goto LABEL_7;
  }
  *(_BYTE *)(v7 + 24) = 1;
LABEL_7:
  v11 = *a3;
  *((_BYTE *)a1 + 24) = *((_BYTE *)a3 + 8);
  a1[2] = v11;
  tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a3[2]);
  return a1;
}
