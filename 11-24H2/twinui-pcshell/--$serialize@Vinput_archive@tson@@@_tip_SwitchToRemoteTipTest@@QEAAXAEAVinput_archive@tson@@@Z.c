/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180647D9C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806536C0 (-deserialize@-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180182FE4 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x1803B0D8C (--$process@V-$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAH@2@V32@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAH@1@10$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18064776C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAH@2@V32@V12@V-$nvp@AEAV-$basic_string@GU-$char_trait.c)
 */

__int64 __fastcall _tip_SwitchToRemoteTipTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+40h] [rbp-59h] BYREF
  char v6; // [rsp+48h] [rbp-51h]
  __int64 v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h] BYREF
  char v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  __int64 v11; // [rsp+70h] [rbp-29h] BYREF
  char v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h] BYREF
  char v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  const char *v17; // [rsp+A0h] [rbp+7h] BYREF
  char v18; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+B0h] [rbp+17h]
  const char *v20; // [rsp+B8h] [rbp+1Fh] BYREF
  char v21; // [rsp+C0h] [rbp+27h]
  __int64 v22; // [rsp+C8h] [rbp+2Fh]
  const char *v23; // [rsp+D0h] [rbp+37h] BYREF
  char v24; // [rsp+D8h] [rbp+3Fh]
  __int64 v25; // [rsp+E0h] [rbp+47h]

  *(_BYTE *)(a2 + 24) = 8;
  v8 = (__int64)"correlationId";
  v9 = 13;
  v10 = a1 + 104;
  v12 = 9;
  v11 = (__int64)"isLocalPC";
  v13 = a1 + 96;
  v14 = (__int64)"hostProcessCount";
  v16 = a1 + 92;
  v17 = "providerWindowCount";
  v19 = a1 + 88;
  v20 = "switchDelivered";
  v22 = a1 + 85;
  v23 = "remoteSystemFound";
  v25 = a1 + 84;
  v5 = "state";
  v7 = a1 + 80;
  *(_QWORD *)(a2 + 16) = "systemId";
  v15 = 16;
  v18 = 19;
  v21 = 15;
  v24 = 17;
  v6 = 5;
  tson::load_nothrow((tson::input_archive *)a2, (_WORD *)(a1 + 16));
  *(_BYTE *)(a2 + 24) = 15;
  *(_QWORD *)(a2 + 16) = "remoteDesktopId";
  tson::load_nothrow((tson::input_archive *)a2, (_WORD *)(a1 + 48));
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(a2, (__int64)&v5);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           (tson::input_archive *)a2,
           (__int64)&v23,
           (__int64)&v20,
           (__int64)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8);
}
