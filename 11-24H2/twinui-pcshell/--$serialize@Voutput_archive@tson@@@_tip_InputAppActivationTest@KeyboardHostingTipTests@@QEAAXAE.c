/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18046B594
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180479B40 (-serialize@-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2.c)
 * Callees:
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DCD30 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v7; // [rsp+20h] [rbp-E0h] BYREF
  char v8; // [rsp+28h] [rbp-D8h]
  __int64 v9; // [rsp+30h] [rbp-D0h]
  const char *v10; // [rsp+38h] [rbp-C8h] BYREF
  char v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h]
  const char *v13; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+58h] [rbp-A8h]
  __int64 v15; // [rsp+60h] [rbp-A0h]
  const char *v16; // [rsp+68h] [rbp-98h] BYREF
  char v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  const char *v19; // [rsp+80h] [rbp-80h] BYREF
  char v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-70h]
  const char *v22; // [rsp+98h] [rbp-68h] BYREF
  char v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  const char *v25; // [rsp+B0h] [rbp-50h] BYREF
  char v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  const char *v28; // [rsp+C8h] [rbp-38h] BYREF
  char v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  const char *v31; // [rsp+E0h] [rbp-20h] BYREF
  char v32; // [rsp+E8h] [rbp-18h]
  __int64 v33; // [rsp+F0h] [rbp-10h]
  const char *v34; // [rsp+F8h] [rbp-8h] BYREF
  char v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  const char *v37; // [rsp+110h] [rbp+10h] BYREF
  char v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h]

  v38 = 2;
  v37 = "hr";
  v35 = 18;
  v39 = a1 + 36;
  v32 = 12;
  v34 = "isConnectedStandby";
  v29 = 19;
  v36 = a1 + 32;
  v31 = "dontRelaunch";
  v33 = a1 + 28;
  v28 = "getInputAppIdFailed";
  v30 = a1 + 30;
  v25 = "anotherActivationStarted";
  v27 = a1 + 29;
  v22 = "relaunchAfterFewSeconds";
  v24 = a1 + 27;
  v19 = "relaunchImmediately";
  v21 = a1 + 26;
  v16 = "sessionShuttingDown";
  v18 = a1 + 25;
  v13 = "retryCountMaxReached";
  v15 = a1 + 24;
  v10 = "activated";
  v12 = a1 + 17;
  v7 = "inputAppIdInvalid";
  v9 = a1 + 16;
  v26 = 24;
  v23 = 23;
  v20 = 19;
  v17 = 19;
  v14 = 20;
  v11 = 9;
  v8 = 17;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v10);
  *(_BYTE *)(a2 + 8) = 10;
  *(_QWORD *)a2 = "retryCount";
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 20), v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v16);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v19);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v22);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v25);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v28);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v31);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v34);
  return tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v37, v5);
}
