/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_LaunchRemoteSystemSettingsTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18065770C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18065CF60 (-deserialize@-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEAVi.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@01@Z @ 0x18065739C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18065739C.c)
 */

_WORD *__fastcall _tip_LaunchRemoteSystemSettingsTipTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+30h] [rbp-9h] BYREF
  char v4; // [rsp+38h] [rbp-1h]
  __int64 v5; // [rsp+40h] [rbp+7h]
  const char *v6; // [rsp+48h] [rbp+Fh] BYREF
  char v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  const char *v9; // [rsp+60h] [rbp+27h] BYREF
  char v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  const char *v12; // [rsp+78h] [rbp+3Fh] BYREF
  char v13; // [rsp+80h] [rbp+47h]
  __int64 v14; // [rsp+88h] [rbp+4Fh]

  v4 = 8;
  v7 = 24;
  v3 = (__int64)"systemId";
  v10 = 17;
  v5 = a1 + 16;
  v13 = 22;
  v6 = "registrationDataNotFound";
  v8 = a1 + 81;
  v9 = "packageFamilyName";
  v11 = a1 + 48;
  v12 = "failedToLaunchSettings";
  v14 = a1 + 80;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v12,
           (__int64 *)&v9,
           (__int64)&v6,
           &v3);
}
