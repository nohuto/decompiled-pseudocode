/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180274B60
 * Callers:
 *     ?serialize@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805DD150 (-serialize@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4s.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C06C4 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C5A80 (--$process@V-$nvp@AEAV-$vector@HV-$allocator@H@std@@@std@@@tson@@V-$nvp@AEAV-$basic_string@GU-$c.c)
 */

__int64 __fastcall _tip_AppPrelaunch::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  __int64 v3; // r8
  const char *v5; // [rsp+20h] [rbp-39h] BYREF
  char v6; // [rsp+28h] [rbp-31h]
  __int64 v7; // [rsp+30h] [rbp-29h]
  const char *v8; // [rsp+38h] [rbp-21h] BYREF
  char v9; // [rsp+40h] [rbp-19h]
  __int64 v10; // [rsp+48h] [rbp-11h]
  const char *v11; // [rsp+50h] [rbp-9h] BYREF
  char v12; // [rsp+58h] [rbp-1h]
  __int64 v13; // [rsp+60h] [rbp+7h]
  const char *v14; // [rsp+68h] [rbp+Fh] BYREF
  char v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  const char *v17; // [rsp+80h] [rbp+27h]
  char v18; // [rsp+88h] [rbp+2Fh]
  __int64 v19; // [rsp+90h] [rbp+37h]
  const char *v20; // [rsp+98h] [rbp+3Fh]
  char v21; // [rsp+A0h] [rbp+47h]
  __int64 v22; // [rsp+A8h] [rbp+4Fh]

  v18 = 15;
  v17 = "packageFullName";
  v21 = 16;
  v19 = a1 + 64;
  v15 = 12;
  v20 = "extensionVersion";
  v22 = a1 + 40;
  v14 = "desktopDelay";
  v16 = a1 + 32;
  v11 = "startUpDelay";
  v13 = a1 + 24;
  v8 = "readShouldPrelaunchRegistryResult";
  v10 = a1 + 20;
  v5 = "shouldPrelaunch";
  v7 = a1 + 16;
  v12 = 12;
  v9 = 33;
  v6 = 15;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v5);
  tson::output_archive::process<tson::nvp<long &>>((__int64)a2, (__int64 *)&v8, v3);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v11);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v14);
  return tson::output_archive::process<tson::nvp<std::vector<int> &>,tson::nvp<std::wstring &>>(a2);
}
