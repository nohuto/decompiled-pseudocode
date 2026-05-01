/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_AppPrelaunchBackgroundTask@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805C8908
 * Callers:
 *     ?serialize@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805DD1F0 (-serialize@-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVoutput_arc.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C58B0 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$al_ea_1805C58B0.c)
 */

char __fastcall _tip_AppPrelaunchBackgroundTask::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-38h] BYREF
  char v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  const char *v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+48h] [rbp-10h]

  v3 = "packageFullName";
  v4 = 15;
  v5 = a1 + 24;
  v6 = "hr";
  v7 = 2;
  v8 = a1 + 16;
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(a2, (__int64 *)&v6, (__int64)&v3);
}
