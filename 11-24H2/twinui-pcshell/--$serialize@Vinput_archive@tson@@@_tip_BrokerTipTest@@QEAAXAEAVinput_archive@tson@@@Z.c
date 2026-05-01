/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_BrokerTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180666484
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180666960 (-deserialize@-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18063CEBC (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@$$QEA.c)
 */

char __fastcall _tip_BrokerTipTest::serialize<tson::input_archive>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  char *v5; // rax
  char v6; // cl
  bool v7; // al
  const char *v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  const char *v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  *((_BYTE *)a2 + 24) = 13;
  v9 = "isGetProviderService";
  v10 = 20;
  v11 = a1 + 32;
  v12 = "appWindow";
  v13 = 9;
  v14 = a1 + 24;
  a2[2] = (__int64)"isObjectFound";
  if ( !tson::input_archive::search((tson::input_archive *)a2) )
  {
    v7 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a2, 10, -2147023267);
  v4 = *a2;
  v5 = *(char **)(*a2 + 8);
  if ( (unsigned __int64)v5 < *(_QWORD *)(*a2 + 16) )
  {
    v6 = *v5;
    *(_QWORD *)(v4 + 8) = v5 + 1;
    v7 = v6 != 0;
LABEL_6:
    *(_BYTE *)(a1 + 16) = v7;
    return tson::input_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<bool &>>(
             (tson::input_archive *)a2,
             (__int64)&v12,
             (__int64)&v9);
  }
  *(_BYTE *)(v4 + 24) = 1;
  return tson::input_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<bool &>>(
           (tson::input_archive *)a2,
           (__int64)&v12,
           (__int64)&v9);
}
