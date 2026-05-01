/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_FileMappingTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180647C38
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180653600 (-deserialize@-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@ts.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x18032B188 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEA_K@2@V?$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x1806479E0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEA_K@2@V-$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV-$nvp.c)
 */

tson::input_archive *__fastcall _tip_FileMappingTipTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-60h] BYREF
  char v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  const char *v7; // [rsp+38h] [rbp-48h] BYREF
  char v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const char *v10; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  const char *v13; // [rsp+68h] [rbp-18h] BYREF
  char v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]

  v8 = 5;
  v11 = 15;
  v7 = "state";
  v14 = 13;
  v9 = a1 + 40;
  v10 = "updateTimestamp";
  v12 = a1 + 32;
  v13 = "isValidBuffer";
  v15 = a1 + 24;
  v4 = "appWindow";
  v6 = a1 + 16;
  v5 = 9;
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64)&v4);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<int &>>(
           a2,
           (__int64)&v13,
           (__int64)&v10,
           (__int64 *)&v7);
}
