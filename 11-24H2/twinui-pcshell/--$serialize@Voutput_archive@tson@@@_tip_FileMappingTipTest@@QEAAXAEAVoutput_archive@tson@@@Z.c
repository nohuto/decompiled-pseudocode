/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_FileMappingTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180648090
 * Callers:
 *     ?serialize@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180654AA0 (-serialize@-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C06C4 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

__int64 __fastcall _tip_FileMappingTipTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  const char *v6; // [rsp+20h] [rbp-50h] BYREF
  char v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  const char *v9; // [rsp+38h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  const char *v12; // [rsp+50h] [rbp-20h] BYREF
  char v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]

  v13 = 15;
  v10 = 13;
  v12 = "updateTimestamp";
  v7 = 9;
  v14 = a1 + 32;
  v9 = "isValidBuffer";
  v11 = a1 + 24;
  v6 = "appWindow";
  v8 = a1 + 16;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v6);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v9);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v12);
  *(_BYTE *)(a2 + 8) = 5;
  *(_QWORD *)a2 = "state";
  return tson::output_archive::operator()<int &>(a2, (int *)(a1 + 40), v4);
}
