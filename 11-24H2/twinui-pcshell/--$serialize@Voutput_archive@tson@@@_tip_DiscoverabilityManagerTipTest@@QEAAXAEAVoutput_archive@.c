/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_DiscoverabilityManagerTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180290C30
 * Callers:
 *     ?serialize@?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180290B90 (-serialize@-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

void __fastcall _tip_DiscoverabilityManagerTipTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v6; // [rsp+20h] [rbp-89h] BYREF
  char v7; // [rsp+28h] [rbp-81h]
  __int64 v8; // [rsp+30h] [rbp-79h]
  const char *v9; // [rsp+38h] [rbp-71h] BYREF
  char v10; // [rsp+40h] [rbp-69h]
  __int64 v11; // [rsp+48h] [rbp-61h]
  const char *v12; // [rsp+50h] [rbp-59h] BYREF
  char v13; // [rsp+58h] [rbp-51h]
  __int64 v14; // [rsp+60h] [rbp-49h]
  const char *v15; // [rsp+68h] [rbp-41h] BYREF
  char v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  const char *v18; // [rsp+80h] [rbp-29h] BYREF
  char v19; // [rsp+88h] [rbp-21h]
  __int64 v20; // [rsp+90h] [rbp-19h]
  const char *v21; // [rsp+98h] [rbp-11h] BYREF
  char v22; // [rsp+A0h] [rbp-9h]
  __int64 v23; // [rsp+A8h] [rbp-1h]
  const char *v24; // [rsp+B0h] [rbp+7h] BYREF
  char v25; // [rsp+B8h] [rbp+Fh]
  __int64 v26; // [rsp+C0h] [rbp+17h]
  const char *v27; // [rsp+C8h] [rbp+1Fh] BYREF
  char v28; // [rsp+D0h] [rbp+27h]
  __int64 v29; // [rsp+D8h] [rbp+2Fh]
  const char *v30; // [rsp+E0h] [rbp+37h] BYREF
  char v31; // [rsp+E8h] [rbp+3Fh]
  __int64 v32; // [rsp+F0h] [rbp+47h]

  v31 = 24;
  v30 = "succeedIfCampaignInvoked";
  v28 = 19;
  v32 = a1 + 24;
  v25 = 31;
  v27 = "succeedIfSubscribed";
  v22 = 28;
  v29 = a1 + 23;
  v24 = "ignoreIfCampaignThresholdNotMet";
  v26 = a1 + 22;
  v21 = "ignoreIfMiracastNotAvailable";
  v23 = a1 + 21;
  v18 = "failedGetViewCount";
  v20 = a1 + 20;
  v15 = "failedGetViews";
  v17 = a1 + 19;
  v12 = "failedToSubscribeApplicationView";
  v14 = a1 + 18;
  v9 = "failedToGetAvailableDeviceInformation";
  v11 = a1 + 17;
  v6 = "failedToInitializeComponent";
  v8 = a1 + 16;
  v19 = 18;
  v16 = 14;
  v13 = 32;
  v10 = 37;
  v7 = 27;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v6);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v9);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v12);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v15);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v18);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v21);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v24);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v27);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v30);
  *((_BYTE *)a2 + 8) = 11;
  *(_QWORD *)a2 = "description";
  tson::save_nothrow((__int64)a2, (const void **)(a1 + 32), v4);
  *(_QWORD *)a2 = "invokeType";
  *((_BYTE *)a2 + 8) = 10;
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 64), v5);
}
