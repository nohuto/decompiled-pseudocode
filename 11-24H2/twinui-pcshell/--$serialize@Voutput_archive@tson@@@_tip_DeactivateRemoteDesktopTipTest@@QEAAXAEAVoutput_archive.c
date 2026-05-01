/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180647F90
 * Callers:
 *     ?serialize@?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180654A00 (-serialize@-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@EEAAXAEAVoutput.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C6E40 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tr_ea_1805C6E40.c)
 */

__int64 __fastcall _tip_DeactivateRemoteDesktopTipTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v5; // [rsp+40h] [rbp-39h] BYREF
  char v6; // [rsp+48h] [rbp-31h]
  __int64 v7; // [rsp+50h] [rbp-29h]
  const char *v8; // [rsp+58h] [rbp-21h] BYREF
  char v9; // [rsp+60h] [rbp-19h]
  __int64 v10; // [rsp+68h] [rbp-11h]
  const char *v11; // [rsp+70h] [rbp-9h] BYREF
  char v12; // [rsp+78h] [rbp-1h]
  __int64 v13; // [rsp+80h] [rbp+7h]
  const char *v14; // [rsp+88h] [rbp+Fh] BYREF
  char v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  const char *v17; // [rsp+A0h] [rbp+27h] BYREF
  char v18; // [rsp+A8h] [rbp+2Fh]
  __int64 v19; // [rsp+B0h] [rbp+37h]
  const char *v20; // [rsp+B8h] [rbp+3Fh] BYREF
  char v21; // [rsp+C0h] [rbp+47h]
  __int64 v22; // [rsp+C8h] [rbp+4Fh]

  *(_BYTE *)(a2 + 8) = 8;
  v5 = "correlationId";
  v6 = 13;
  v7 = a1 + 56;
  v8 = "removeWindowReturnedFalse";
  v10 = a1 + 52;
  v11 = "disconnectFromLocalPC";
  v13 = a1 + 51;
  v14 = "didAnyHwndFailToClose";
  v16 = a1 + 50;
  v17 = "remoteDesktopSuccessfullyRemoved";
  v19 = a1 + 49;
  v20 = "remoteSystemNotFound";
  v22 = a1 + 48;
  *(_QWORD *)a2 = "systemId";
  v9 = 25;
  v12 = 21;
  v15 = 21;
  v18 = 32;
  v21 = 20;
  tson::save_nothrow(a2, (const void **)(a1 + 16), a3);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v20,
           (int)&v17,
           (int)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
