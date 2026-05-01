/*
 * XREFs of ??$process@AEAU_tip_BrokerTipTest@@@output_archive@tson@@AEAAXAEAU_tip_BrokerTipTest@@@Z @ 0x1806663E4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806669E0 (-serialize@-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18063CF38 (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@$$QE.c)
 */

void __fastcall tson::output_archive::process<_tip_BrokerTipTest &>(tson::output_archive *this, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-50h] BYREF
  char v5; // [rsp+28h] [rbp-48h]
  __int64 v6; // [rsp+30h] [rbp-40h]
  const char *v7; // [rsp+38h] [rbp-38h] BYREF
  char v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  const char *v10; // [rsp+50h] [rbp-20h] BYREF
  char v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  tson::output_archive::startNode(this);
  v8 = 20;
  v7 = "isGetProviderService";
  v11 = 9;
  v9 = a2 + 32;
  v5 = 13;
  v10 = "appWindow";
  v12 = a2 + 24;
  v4 = "isObjectFound";
  v6 = a2 + 16;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v4);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<bool &>>(
    (__int64)this,
    (__int64 *)&v10,
    (__int64)&v7);
  tson::output_archive::finishNode(this);
}
