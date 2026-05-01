/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180657884
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18065D020 (-deserialize@-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXAEAV.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V12@V12@V12@V12@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1200002@Z @ 0x18065729C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V-$n.c)
 */

__int64 __fastcall _tip_RemoteSessionOnStateChangedTipTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+A8h] [rbp-58h] BYREF
  char v4; // [rsp+B0h] [rbp-50h]
  __int64 v5; // [rsp+B8h] [rbp-48h]
  __int64 v6; // [rsp+C0h] [rbp-40h] BYREF
  char v7; // [rsp+C8h] [rbp-38h]
  __int64 v8; // [rsp+D0h] [rbp-30h]
  __int64 v9; // [rsp+D8h] [rbp-28h] BYREF
  char v10; // [rsp+E0h] [rbp-20h]
  __int64 v11; // [rsp+E8h] [rbp-18h]
  __int64 v12; // [rsp+F0h] [rbp-10h] BYREF
  char v13; // [rsp+F8h] [rbp-8h]
  __int64 v14; // [rsp+100h] [rbp+0h]
  __int64 v15; // [rsp+108h] [rbp+8h] BYREF
  char v16; // [rsp+110h] [rbp+10h]
  __int64 v17; // [rsp+118h] [rbp+18h]
  const char *v18; // [rsp+120h] [rbp+20h] BYREF
  char v19; // [rsp+128h] [rbp+28h]
  __int64 v20; // [rsp+130h] [rbp+30h]
  const char *v21; // [rsp+138h] [rbp+38h] BYREF
  char v22; // [rsp+140h] [rbp+40h]
  __int64 v23; // [rsp+148h] [rbp+48h]
  const char *v24; // [rsp+150h] [rbp+50h] BYREF
  char v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]

  v4 = 33;
  v7 = 25;
  v3 = (__int64)"transitionScreenAlreadyNotShowing";
  v5 = a1 + 92;
  v6 = (__int64)"systemIdNotFoundInRSWMMap";
  v8 = a1 + 88;
  v9 = (__int64)"systemId";
  v11 = a1 + 16;
  v12 = (__int64)"state";
  v14 = a1 + 80;
  v15 = (__int64)"remoteDesktopId";
  v17 = a1 + 48;
  v18 = "oldState";
  v20 = a1 + 84;
  v21 = "handleConnectionStateChangedDidNothing";
  v23 = a1 + 89;
  v24 = "failedToGetViewForHwnd";
  v26 = a1 + 90;
  v10 = 8;
  v13 = 5;
  v16 = 15;
  v19 = 8;
  v22 = 38;
  v25 = 22;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
