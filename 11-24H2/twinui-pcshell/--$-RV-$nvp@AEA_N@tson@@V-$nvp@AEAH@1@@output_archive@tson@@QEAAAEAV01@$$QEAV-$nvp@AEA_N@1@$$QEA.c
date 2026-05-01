/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x1802BC4E0
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_GamingTaskViewShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_GamingTaskViewShowTest@SwitcherTip@@@1@@Z @ 0x18069C5F0 (--$-RV-$nvp@AEAU_tip_GamingTaskViewShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01.c)
 *     ?serialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806A86B0 (-serialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutpu.c)
 * Callees:
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DCD30 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v5; // dl
  __int64 v6; // r8

  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  v5 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 8) = v5;
  tson::output_archive::operator()<int &>(a1, *(int **)(a3 + 16), v6);
  return a1;
}
