/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806A8170
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x18069C678 (--$-RV-$nvp@AEA_N@tson@@V-$nvp@AEAH@1@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@$$QEAV.c)
 */

void __fastcall tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 17;
  v6 = "switcherItemCount";
  v10 = 5;
  v4 = a1 + 276;
  if ( !a1 )
    v4 = 20LL;
  v8 = v4;
  v9 = "shown";
  v5 = a1 + 272;
  if ( !a1 )
    v5 = 16LL;
  v11 = v5;
  tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>>((__int64 *)a2, (__int64)&v9, (__int64 *)&v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
