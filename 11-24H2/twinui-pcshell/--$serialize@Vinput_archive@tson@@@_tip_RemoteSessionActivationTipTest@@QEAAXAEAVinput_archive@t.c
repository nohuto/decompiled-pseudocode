/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806577A8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18065CFC0 (-deserialize@-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@EEAAXAEAVinpu.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1011@Z @ 0x180657450 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_180657450.c)
 */

_WORD *__fastcall _tip_RemoteSessionActivationTipTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+40h] [rbp-39h] BYREF
  char v4; // [rsp+48h] [rbp-31h]
  __int64 v5; // [rsp+50h] [rbp-29h]
  __int64 v6; // [rsp+58h] [rbp-21h] BYREF
  char v7; // [rsp+60h] [rbp-19h]
  __int64 v8; // [rsp+68h] [rbp-11h]
  __int64 v9; // [rsp+70h] [rbp-9h] BYREF
  char v10; // [rsp+78h] [rbp-1h]
  __int64 v11; // [rsp+80h] [rbp+7h]
  const char *v12; // [rsp+88h] [rbp+Fh] BYREF
  char v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  const char *v15; // [rsp+A0h] [rbp+27h] BYREF
  char v16; // [rsp+A8h] [rbp+2Fh]
  __int64 v17; // [rsp+B0h] [rbp+37h]
  const char *v18; // [rsp+B8h] [rbp+3Fh] BYREF
  char v19; // [rsp+C0h] [rbp+47h]
  __int64 v20; // [rsp+C8h] [rbp+4Fh]

  v4 = 13;
  v3 = (__int64)"correlationId";
  v7 = 8;
  v5 = a1 + 120;
  v10 = 24;
  v6 = (__int64)"systemId";
  v13 = 15;
  v8 = a1 + 56;
  v16 = 17;
  v9 = (__int64)"registrationDataNotFound";
  v11 = a1 + 17;
  v12 = "remoteDesktopId";
  v14 = a1 + 88;
  v15 = "packageFamilyName";
  v17 = a1 + 24;
  v18 = "hasExistingActivatedRemoteSession";
  v20 = a1 + 16;
  v19 = 33;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v18,
           (__int64 *)&v15,
           (__int64 *)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
