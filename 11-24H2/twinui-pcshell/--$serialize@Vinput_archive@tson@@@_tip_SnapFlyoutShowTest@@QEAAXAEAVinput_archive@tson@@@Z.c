/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18059C0FC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805A3B70 (-deserialize@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@ts.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x18059BC94 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V-$nvp@AEAW4SnapControlType@SnapComponent@.c)
 */

__int64 __fastcall _tip_SnapFlyoutShowTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  __int64 v3; // [rsp+50h] [rbp-B0h] BYREF
  char v4; // [rsp+58h] [rbp-A8h]
  __int64 v5; // [rsp+60h] [rbp-A0h]
  __int64 v6; // [rsp+68h] [rbp-98h] BYREF
  char v7; // [rsp+70h] [rbp-90h]
  __int64 v8; // [rsp+78h] [rbp-88h]
  __int64 v9; // [rsp+80h] [rbp-80h] BYREF
  char v10; // [rsp+88h] [rbp-78h]
  __int64 v11; // [rsp+90h] [rbp-70h]
  __int64 v12; // [rsp+98h] [rbp-68h] BYREF
  char v13; // [rsp+A0h] [rbp-60h]
  __int64 v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h] BYREF
  char v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+C8h] [rbp-38h] BYREF
  char v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h]
  const char *v21; // [rsp+E0h] [rbp-20h] BYREF
  char v22; // [rsp+E8h] [rbp-18h]
  __int64 v23; // [rsp+F0h] [rbp-10h]
  const char *v24; // [rsp+F8h] [rbp-8h] BYREF
  char v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  const char *v27; // [rsp+110h] [rbp+10h] BYREF
  char v28; // [rsp+118h] [rbp+18h]
  __int64 v29; // [rsp+120h] [rbp+20h]

  v4 = 13;
  v3 = (__int64)"instanceReady";
  v7 = 11;
  v5 = a1 + 16;
  v10 = 12;
  v6 = (__int64)"controlType";
  v13 = 13;
  v8 = a1 + 28;
  v16 = 19;
  v9 = (__int64)"threadCreate";
  v11 = a1 + 25;
  v12 = (__int64)"noMonitorInfo";
  v14 = a1 + 23;
  v15 = (__int64)"controlFailedToLoad";
  v17 = a1 + 21;
  v18 = (__int64)"threadFailedToStart";
  v20 = a1 + 22;
  v21 = "reused";
  v23 = a1 + 24;
  v24 = "shown";
  v26 = a1 + 17;
  v27 = "canceled";
  v29 = a1 + 18;
  v19 = 19;
  v22 = 6;
  v25 = 5;
  v28 = 8;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
           a2,
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
