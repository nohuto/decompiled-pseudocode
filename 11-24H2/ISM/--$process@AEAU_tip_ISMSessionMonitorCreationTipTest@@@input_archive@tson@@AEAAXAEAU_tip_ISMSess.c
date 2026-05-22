/*
 * XREFs of ??$process@AEAU_tip_ISMSessionMonitorCreationTipTest@@@input_archive@tson@@AEAAXAEAU_tip_ISMSessionMonitorCreationTipTest@@@Z @ 0x1800A3EE8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800A4DB0 (-deserialize@-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVin.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800A3FEC (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800A4298 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A6324 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::input_archive::process<_tip_ISMSessionMonitorCreationTipTest &>(
        tson::input_archive *this,
        __int64 a2)
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

  tson::input_archive::startNode(this);
  v11 = 9;
  v10 = "errorCode";
  v8 = 14;
  v12 = a2 + 20;
  v5 = 10;
  v7 = "fallbackFailed";
  v9 = a2 + 17;
  v4 = "waitFailed";
  v6 = a2 + 16;
  tson::input_archive::process<tson::nvp<bool &>>(this, &v4);
  tson::input_archive::process<tson::nvp<bool &>>(this, &v7);
  tson::input_archive::process<tson::nvp<long &>>(this, &v10);
  tson::input_archive::finishNode(this);
}
