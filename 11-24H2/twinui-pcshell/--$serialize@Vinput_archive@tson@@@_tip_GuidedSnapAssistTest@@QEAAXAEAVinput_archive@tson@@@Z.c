/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805A53BC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805A81C0 (-deserialize@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18032AEA0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x18046A6C0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@.c)
 */

char __fastcall _tip_GuidedSnapAssistTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+50h] [rbp-B0h] BYREF
  char v5; // [rsp+58h] [rbp-A8h]
  __int64 v6; // [rsp+60h] [rbp-A0h]
  const char *v7; // [rsp+68h] [rbp-98h] BYREF
  char v8; // [rsp+70h] [rbp-90h]
  __int64 v9; // [rsp+78h] [rbp-88h]
  const char *v10; // [rsp+80h] [rbp-80h] BYREF
  char v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-70h]
  const char *v13; // [rsp+98h] [rbp-68h] BYREF
  char v14; // [rsp+A0h] [rbp-60h]
  __int64 v15; // [rsp+A8h] [rbp-58h]
  const char *v16; // [rsp+B0h] [rbp-50h] BYREF
  char v17; // [rsp+B8h] [rbp-48h]
  __int64 v18; // [rsp+C0h] [rbp-40h]
  const char *v19; // [rsp+C8h] [rbp-38h] BYREF
  char v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  const char *v22; // [rsp+E0h] [rbp-20h] BYREF
  char v23; // [rsp+E8h] [rbp-18h]
  __int64 v24; // [rsp+F0h] [rbp-10h]
  const char *v25; // [rsp+F8h] [rbp-8h] BYREF
  char v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  const char *v28; // [rsp+110h] [rbp+10h] BYREF
  char v29; // [rsp+118h] [rbp+18h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  const char *v31; // [rsp+128h] [rbp+28h] BYREF
  char v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  const char *v34; // [rsp+140h] [rbp+40h] BYREF
  char v35; // [rsp+148h] [rbp+48h]
  __int64 v36; // [rsp+150h] [rbp+50h]

  v14 = 14;
  v13 = "noEmptyRegions";
  v17 = 26;
  v15 = a1 + 35;
  v20 = 15;
  v16 = "initializedSnapAssistState";
  v18 = a1 + 34;
  v19 = "snapAssistReset";
  v21 = a1 + 33;
  v22 = "snapAssistOccluded";
  v24 = a1 + 32;
  v25 = "lastRegionFilled";
  v27 = a1 + 31;
  v28 = "windowRefusedSnapping";
  v30 = a1 + 30;
  v31 = "snapAssistDismissed";
  v33 = a1 + 29;
  v34 = "snapAssistBlocked";
  v36 = a1 + 28;
  v10 = "snappedWindows";
  v12 = a1 + 24;
  v7 = "skippedRegions";
  v9 = a1 + 20;
  v4 = "initialRegions";
  v6 = a1 + 16;
  v23 = 18;
  v26 = 16;
  v29 = 21;
  v32 = 19;
  v35 = 17;
  v11 = 14;
  v8 = 14;
  v5 = 14;
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v4);
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v7);
  tson::input_archive::process<tson::nvp<unsigned int &>>(a2, (__int64)&v10);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           (__int64)&v25,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16,
           (__int64 *)&v13);
}
