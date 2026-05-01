/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_StartMenuInvokeTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18045C3D8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180461910 (-deserialize@-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x180459FD4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V32@V32@V32@V12@.c)
 */

__int64 __fastcall _tip_StartMenuInvokeTest::serialize<tson::input_archive>(__int64 a1, __int64 *a2)
{
  const char *v3; // [rsp+E8h] [rbp-80h] BYREF
  char v4; // [rsp+F0h] [rbp-78h]
  __int64 v5; // [rsp+F8h] [rbp-70h]
  const char *v6; // [rsp+100h] [rbp-68h] BYREF
  char v7; // [rsp+108h] [rbp-60h]
  __int64 v8; // [rsp+110h] [rbp-58h]
  const char *v9; // [rsp+118h] [rbp-50h] BYREF
  char v10; // [rsp+120h] [rbp-48h]
  __int64 v11; // [rsp+128h] [rbp-40h]
  const char *v12; // [rsp+130h] [rbp-38h] BYREF
  char v13; // [rsp+138h] [rbp-30h]
  __int64 v14; // [rsp+140h] [rbp-28h]
  const char *v15; // [rsp+148h] [rbp-20h] BYREF
  char v16; // [rsp+150h] [rbp-18h]
  __int64 v17; // [rsp+158h] [rbp-10h]
  const char *v18; // [rsp+160h] [rbp-8h] BYREF
  char v19; // [rsp+168h] [rbp+0h]
  __int64 v20; // [rsp+170h] [rbp+8h]
  const char *v21; // [rsp+178h] [rbp+10h] BYREF
  char v22; // [rsp+180h] [rbp+18h]
  __int64 v23; // [rsp+188h] [rbp+20h]
  const char *v24; // [rsp+190h] [rbp+28h] BYREF
  char v25; // [rsp+198h] [rbp+30h]
  __int64 v26; // [rsp+1A0h] [rbp+38h]
  const char *v27; // [rsp+1A8h] [rbp+40h] BYREF
  char v28; // [rsp+1B0h] [rbp+48h]
  __int64 v29; // [rsp+1B8h] [rbp+50h]
  const char *v30; // [rsp+1C0h] [rbp+58h] BYREF
  char v31; // [rsp+1C8h] [rbp+60h]
  __int64 v32; // [rsp+1D0h] [rbp+68h]
  const char *v33; // [rsp+1D8h] [rbp+70h] BYREF
  char v34; // [rsp+1E0h] [rbp+78h]
  __int64 v35; // [rsp+1E8h] [rbp+80h]
  const char *v36; // [rsp+1F0h] [rbp+88h] BYREF
  char v37; // [rsp+1F8h] [rbp+90h]
  __int64 v38; // [rsp+200h] [rbp+98h]
  const char *v39; // [rsp+208h] [rbp+A0h] BYREF
  char v40; // [rsp+210h] [rbp+A8h]
  __int64 v41; // [rsp+218h] [rbp+B0h]
  const char *v42; // [rsp+220h] [rbp+B8h] BYREF
  char v43; // [rsp+228h] [rbp+C0h]
  __int64 v44; // [rsp+230h] [rbp+C8h]
  const char *v45; // [rsp+238h] [rbp+D0h] BYREF
  char v46; // [rsp+240h] [rbp+D8h]
  __int64 v47; // [rsp+248h] [rbp+E0h]
  const char *v48; // [rsp+250h] [rbp+E8h] BYREF
  char v49; // [rsp+258h] [rbp+F0h]
  __int64 v50; // [rsp+260h] [rbp+F8h]
  const char *v51; // [rsp+268h] [rbp+100h] BYREF
  char v52; // [rsp+270h] [rbp+108h]
  __int64 v53; // [rsp+278h] [rbp+110h]
  const char *v54; // [rsp+280h] [rbp+118h] BYREF
  char v55; // [rsp+288h] [rbp+120h]
  __int64 v56; // [rsp+290h] [rbp+128h]
  const char *v57; // [rsp+298h] [rbp+130h] BYREF
  char v58; // [rsp+2A0h] [rbp+138h]
  __int64 v59; // [rsp+2A8h] [rbp+140h]
  const char *v60; // [rsp+2B0h] [rbp+148h] BYREF
  char v61; // [rsp+2B8h] [rbp+150h]
  __int64 v62; // [rsp+2C0h] [rbp+158h]
  const char *v63; // [rsp+2C8h] [rbp+160h] BYREF
  char v64; // [rsp+2D0h] [rbp+168h]
  __int64 v65; // [rsp+2D8h] [rbp+170h]
  const char *v66; // [rsp+2E0h] [rbp+178h] BYREF
  char v67; // [rsp+2E8h] [rbp+180h]
  __int64 v68; // [rsp+2F0h] [rbp+188h]
  const char *v69; // [rsp+2F8h] [rbp+190h] BYREF
  char v70; // [rsp+300h] [rbp+198h]
  __int64 v71; // [rsp+308h] [rbp+1A0h]
  const char *v72; // [rsp+310h] [rbp+1A8h] BYREF
  char v73; // [rsp+318h] [rbp+1B0h]
  __int64 v74; // [rsp+320h] [rbp+1B8h]
  const char *v75; // [rsp+328h] [rbp+1C0h] BYREF
  char v76; // [rsp+330h] [rbp+1C8h]
  __int64 v77; // [rsp+338h] [rbp+1D0h]
  const char *v78; // [rsp+340h] [rbp+1D8h] BYREF
  char v79; // [rsp+348h] [rbp+1E0h]
  __int64 v80; // [rsp+350h] [rbp+1E8h]

  v4 = 20;
  v3 = "isUsingUndockedFrame";
  v7 = 23;
  v5 = a1 + 67;
  v6 = "isCompanionInitializing";
  v8 = a1 + 66;
  v9 = "isCompanionPresent";
  v11 = a1 + 65;
  v12 = "isFulltrustApp";
  v14 = a1 + 64;
  v15 = "undockedContentError";
  v17 = a1 + 60;
  v18 = "cannotGetUndockedExtension";
  v20 = a1 + 57;
  v21 = "isAutomaticInvoke";
  v23 = a1 + 56;
  v24 = "invalidInternalState";
  v26 = a1 + 52;
  v27 = "searchSetForegroundResult";
  v29 = a1 + 48;
  v30 = "desktopSwitchTimeoutDuringInvoke";
  v32 = a1 + 28;
  v33 = "searchLaunchedDuringInvoke";
  v35 = a1 + 27;
  v36 = "startLaunchedDuringInvoke";
  v38 = a1 + 26;
  v39 = "rootFrameInitialization";
  v41 = a1 + 44;
  v42 = "utmInitialization";
  v44 = a1 + 40;
  v45 = "searchActivationResult";
  v47 = a1 + 36;
  v48 = "startActivationResult";
  v50 = a1 + 32;
  v10 = 18;
  v13 = 14;
  v16 = 20;
  v19 = 26;
  v22 = 17;
  v25 = 20;
  v28 = 25;
  v31 = 32;
  v34 = 26;
  v37 = 25;
  v40 = 23;
  v43 = 17;
  v46 = 22;
  v49 = 21;
  v52 = 32;
  v51 = "invalidStateTransitionDuringShow";
  v53 = a1 + 25;
  v54 = "startShownWithoutSearchAfterCutoffTimer";
  v56 = a1 + 24;
  v57 = "searchActivationFailed";
  v59 = a1 + 23;
  v60 = "searchCrashedDuringInvoke";
  v62 = a1 + 22;
  v63 = "startCrashedDuringInvoke";
  v65 = a1 + 21;
  v66 = "timedOutAfterFiveSeconds";
  v68 = a1 + 20;
  v69 = "canceledDeviceLocked";
  v71 = a1 + 19;
  v72 = "foregroundLostInvokeAbort";
  v74 = a1 + 18;
  v75 = "foregroundCouldNotBeClaimed";
  v77 = a1 + 17;
  v78 = "canceledForegroundLost";
  v80 = a1 + 16;
  v55 = 39;
  v58 = 22;
  v61 = 25;
  v64 = 24;
  v67 = 24;
  v70 = 20;
  v73 = 25;
  v76 = 27;
  v79 = 22;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v78,
           (int)&v75,
           (int)&v72,
           (__int64)&v69,
           (__int64)&v66,
           (__int64)&v63,
           (__int64)&v60,
           (__int64)&v57,
           (__int64)&v54,
           (__int64)&v51,
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
