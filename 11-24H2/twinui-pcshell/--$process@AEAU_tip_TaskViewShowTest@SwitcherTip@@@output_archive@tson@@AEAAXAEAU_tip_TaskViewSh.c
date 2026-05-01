/*
 * XREFs of ??$process@AEAU_tip_TaskViewShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_TaskViewShowTest@SwitcherTip@@@Z @ 0x1806A36A0
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806A6200 (-serialize@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DCD30 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DD708 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::output_archive::process<SwitcherTip::_tip_TaskViewShowTest &>(
        tson::output_archive *this,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  tson::output_archive::startNode(this);
  v8 = 5;
  v7 = "shown";
  v9 = a2 + 16;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v7);
  *((_BYTE *)this + 8) = 15;
  *(_QWORD *)this = "switchItemCount";
  tson::output_archive::operator()<int &>((__int64)this, (int *)(a2 + 20), v4);
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "monitorCount";
  tson::output_archive::operator()<int &>((__int64)this, (int *)(a2 + 24), v5);
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "invokeMethod";
  tson::output_archive::saveValue(this, *(unsigned int *)(a2 + 28), v6);
  tson::output_archive::finishNode(this);
}
