/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_BootToCloudPCTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18063DC0C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180642720 (-deserialize@-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063CF68 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_st_ea_18063CF68.c)
 */

__int64 __fastcall _tip_BootToCloudPCTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  __int64 v3; // [rsp+90h] [rbp-80h] BYREF
  char v4; // [rsp+98h] [rbp-78h]
  __int64 v5; // [rsp+A0h] [rbp-70h]
  __int64 v6; // [rsp+A8h] [rbp-68h] BYREF
  char v7; // [rsp+B0h] [rbp-60h]
  __int64 v8; // [rsp+B8h] [rbp-58h]
  __int64 v9; // [rsp+C0h] [rbp-50h] BYREF
  char v10; // [rsp+C8h] [rbp-48h]
  __int64 v11; // [rsp+D0h] [rbp-40h]
  __int64 v12; // [rsp+D8h] [rbp-38h] BYREF
  char v13; // [rsp+E0h] [rbp-30h]
  __int64 v14; // [rsp+E8h] [rbp-28h]
  __int64 v15; // [rsp+F0h] [rbp-20h] BYREF
  char v16; // [rsp+F8h] [rbp-18h]
  __int64 v17; // [rsp+100h] [rbp-10h]
  __int64 v18; // [rsp+108h] [rbp-8h] BYREF
  char v19; // [rsp+110h] [rbp+0h]
  __int64 v20; // [rsp+118h] [rbp+8h]
  __int64 v21; // [rsp+120h] [rbp+10h] BYREF
  char v22; // [rsp+128h] [rbp+18h]
  __int64 v23; // [rsp+130h] [rbp+20h]
  __int64 v24; // [rsp+138h] [rbp+28h] BYREF
  char v25; // [rsp+140h] [rbp+30h]
  __int64 v26; // [rsp+148h] [rbp+38h]
  __int64 v27; // [rsp+150h] [rbp+40h] BYREF
  char v28; // [rsp+158h] [rbp+48h]
  __int64 v29; // [rsp+160h] [rbp+50h]
  __int64 v30; // [rsp+168h] [rbp+58h] BYREF
  char v31; // [rsp+170h] [rbp+60h]
  __int64 v32; // [rsp+178h] [rbp+68h]
  __int64 v33; // [rsp+180h] [rbp+70h] BYREF
  char v34; // [rsp+188h] [rbp+78h]
  __int64 v35; // [rsp+190h] [rbp+80h]
  __int64 v36; // [rsp+198h] [rbp+88h] BYREF
  char v37; // [rsp+1A0h] [rbp+90h]
  __int64 v38; // [rsp+1A8h] [rbp+98h]
  __int64 v39; // [rsp+1B0h] [rbp+A0h] BYREF
  char v40; // [rsp+1B8h] [rbp+A8h]
  __int64 v41; // [rsp+1C0h] [rbp+B0h]
  const char *v42; // [rsp+1C8h] [rbp+B8h] BYREF
  char v43; // [rsp+1D0h] [rbp+C0h]
  __int64 v44; // [rsp+1D8h] [rbp+C8h]
  const char *v45; // [rsp+1E0h] [rbp+D0h] BYREF
  char v46; // [rsp+1E8h] [rbp+D8h]
  __int64 v47; // [rsp+1F0h] [rbp+E0h]
  const char *v48; // [rsp+1F8h] [rbp+E8h] BYREF
  char v49; // [rsp+200h] [rbp+F0h]
  __int64 v50; // [rsp+208h] [rbp+F8h]

  v4 = 8;
  v3 = (__int64)"modeType";
  v7 = 24;
  v5 = a1 + 96;
  v6 = (__int64)"networkFailFastTriggered";
  v8 = a1 + 27;
  v9 = (__int64)"maxConnectionTimeoutInMinutes";
  v11 = a1 + 104;
  v12 = (__int64)"providerAppNotAvailable";
  v14 = a1 + 26;
  v15 = (__int64)"correlationId";
  v17 = a1 + 64;
  v18 = (__int64)"userDismissedConnectScreen";
  v20 = a1 + 25;
  v21 = (__int64)"infoText";
  v23 = a1 + 32;
  v24 = (__int64)"timeoutOccurred";
  v26 = a1 + 24;
  v27 = (__int64)"cloudpcExited";
  v29 = a1 + 23;
  v30 = (__int64)"errorTransitionScreenTriggered";
  v32 = a1 + 22;
  v33 = (__int64)"clientDisconnected";
  v35 = a1 + 21;
  v36 = (__int64)"shellappruntimeRestarted";
  v38 = a1 + 20;
  v39 = (__int64)"shelldesktopswitcheventFailed";
  v41 = a1 + 19;
  v42 = "providerAppAlreadyLaunched";
  v44 = a1 + 18;
  v45 = "providerAppNotLaunched";
  v47 = a1 + 17;
  v48 = "cloudpcSuccessfullyConnected";
  v50 = a1 + 16;
  v10 = 29;
  v13 = 23;
  v16 = 13;
  v19 = 26;
  v22 = 8;
  v25 = 15;
  v28 = 13;
  v31 = 30;
  v34 = 18;
  v37 = 24;
  v40 = 29;
  v43 = 26;
  v46 = 22;
  v49 = 28;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
           a2,
           (__int64)&v48,
           (__int64)&v45,
           (__int64)&v42,
           (__int64)&v39,
           (__int64)&v36,
           (__int64)&v33,
           (__int64)&v30,
           (__int64)&v27,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
