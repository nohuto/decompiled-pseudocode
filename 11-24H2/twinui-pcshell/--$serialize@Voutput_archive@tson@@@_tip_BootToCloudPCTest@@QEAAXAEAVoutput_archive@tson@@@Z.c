/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_BootToCloudPCTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18063DF84
 * Callers:
 *     ?serialize@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806434D0 (-serialize@-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063D724 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_18063D724.c)
 */

void __fastcall _tip_BootToCloudPCTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  const char *v3; // [rsp+60h] [rbp-A0h] BYREF
  char v4; // [rsp+68h] [rbp-98h]
  __int64 v5; // [rsp+70h] [rbp-90h]
  const char *v6; // [rsp+78h] [rbp-88h] BYREF
  char v7; // [rsp+80h] [rbp-80h]
  __int64 v8; // [rsp+88h] [rbp-78h]
  const char *v9; // [rsp+90h] [rbp-70h] BYREF
  char v10; // [rsp+98h] [rbp-68h]
  __int64 v11; // [rsp+A0h] [rbp-60h]
  const char *v12; // [rsp+A8h] [rbp-58h] BYREF
  char v13; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+B8h] [rbp-48h]
  const char *v15; // [rsp+C0h] [rbp-40h] BYREF
  char v16; // [rsp+C8h] [rbp-38h]
  __int64 v17; // [rsp+D0h] [rbp-30h]
  const char *v18; // [rsp+D8h] [rbp-28h] BYREF
  char v19; // [rsp+E0h] [rbp-20h]
  __int64 v20; // [rsp+E8h] [rbp-18h]
  __int64 v21; // [rsp+F0h] [rbp-10h] BYREF
  char v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h] BYREF
  char v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  __int64 v27; // [rsp+120h] [rbp+20h] BYREF
  char v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h] BYREF
  char v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  __int64 v33; // [rsp+150h] [rbp+50h] BYREF
  char v34; // [rsp+158h] [rbp+58h]
  __int64 v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h] BYREF
  char v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  __int64 v39; // [rsp+180h] [rbp+80h] BYREF
  char v40; // [rsp+188h] [rbp+88h]
  __int64 v41; // [rsp+190h] [rbp+90h]
  const char *v42; // [rsp+198h] [rbp+98h] BYREF
  char v43; // [rsp+1A0h] [rbp+A0h]
  __int64 v44; // [rsp+1A8h] [rbp+A8h]
  const char *v45; // [rsp+1B0h] [rbp+B0h] BYREF
  char v46; // [rsp+1B8h] [rbp+B8h]
  __int64 v47; // [rsp+1C0h] [rbp+C0h]
  const char *v48; // [rsp+1C8h] [rbp+C8h] BYREF
  char v49; // [rsp+1D0h] [rbp+D0h]
  __int64 v50; // [rsp+1D8h] [rbp+D8h]

  v22 = 8;
  v21 = (__int64)"modeType";
  v25 = 24;
  v23 = a1 + 96;
  v24 = (__int64)"networkFailFastTriggered";
  v26 = a1 + 27;
  v27 = (__int64)"maxConnectionTimeoutInMinutes";
  v29 = a1 + 104;
  v30 = (__int64)"providerAppNotAvailable";
  v32 = a1 + 26;
  v33 = (__int64)"correlationId";
  v35 = a1 + 64;
  v36 = (__int64)"userDismissedConnectScreen";
  v38 = a1 + 25;
  v39 = (__int64)"infoText";
  v41 = a1 + 32;
  v42 = "timeoutOccurred";
  v44 = a1 + 24;
  v45 = "cloudpcExited";
  v47 = a1 + 23;
  v48 = "errorTransitionScreenTriggered";
  v50 = a1 + 22;
  v18 = "clientDisconnected";
  v20 = a1 + 21;
  v15 = "shellappruntimeRestarted";
  v17 = a1 + 20;
  v12 = "shelldesktopswitcheventFailed";
  v14 = a1 + 19;
  v9 = "providerAppAlreadyLaunched";
  v11 = a1 + 18;
  v6 = "providerAppNotLaunched";
  v8 = a1 + 17;
  v3 = "cloudpcSuccessfullyConnected";
  v5 = a1 + 16;
  v28 = 29;
  v31 = 23;
  v34 = 13;
  v37 = 26;
  v40 = 8;
  v43 = 15;
  v46 = 13;
  v49 = 30;
  v19 = 18;
  v16 = 24;
  v13 = 29;
  v10 = 26;
  v7 = 22;
  v4 = 28;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v6);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v9);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v12);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v15);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v18);
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
    a2,
    (__int64)&v48,
    (__int64)&v45,
    (__int64)&v42,
    (__int64)&v39,
    (__int64)&v36,
    &v33,
    (__int64)&v30,
    &v27,
    (__int64)&v24,
    &v21);
}
