/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_LaunchRemoteSystemSettingsTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180657A04
 * Callers:
 *     ?serialize@?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18065DB50 (-serialize@-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEAVout.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802271D0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

char __fastcall _tip_LaunchRemoteSystemSettingsTipTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
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

  v10 = 8;
  v13 = 24;
  v9 = "systemId";
  v7 = 22;
  v11 = a1 + 16;
  v12 = "registrationDataNotFound";
  v14 = a1 + 81;
  v6 = "failedToLaunchSettings";
  v8 = a1 + 80;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v6);
  *(_BYTE *)(a2 + 8) = 17;
  *(_QWORD *)a2 = "packageFamilyName";
  tson::save_nothrow(a2, (const void **)(a1 + 48), v4);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>>(a2, (__int64)&v12, (__int64)&v9);
}
