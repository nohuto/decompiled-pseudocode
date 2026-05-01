/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1802984C4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805A8980 (-serialize@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DD450 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x18029865C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp.c)
 */

__int64 __fastcall _tip_GuidedSnapAssistTest::serialize<tson::output_archive>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v7; // [rsp+50h] [rbp-B0h] BYREF
  char v8; // [rsp+58h] [rbp-A8h]
  __int64 v9; // [rsp+60h] [rbp-A0h]
  const char *v10; // [rsp+68h] [rbp-98h] BYREF
  char v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  const char *v13; // [rsp+80h] [rbp-80h] BYREF
  char v14; // [rsp+88h] [rbp-78h]
  __int64 v15; // [rsp+90h] [rbp-70h]
  const char *v16; // [rsp+98h] [rbp-68h] BYREF
  char v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  const char *v19; // [rsp+B0h] [rbp-50h] BYREF
  char v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  const char *v22; // [rsp+C8h] [rbp-38h] BYREF
  char v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  const char *v25; // [rsp+E0h] [rbp-20h] BYREF
  char v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  const char *v28; // [rsp+F8h] [rbp-8h] BYREF
  char v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  const char *v31; // [rsp+110h] [rbp+10h] BYREF
  char v32; // [rsp+118h] [rbp+18h]
  __int64 v33; // [rsp+120h] [rbp+20h]
  const char *v34; // [rsp+128h] [rbp+28h] BYREF
  char v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  const char *v37; // [rsp+140h] [rbp+40h] BYREF
  char v38; // [rsp+148h] [rbp+48h]
  __int64 v39; // [rsp+150h] [rbp+50h]

  v17 = 14;
  v16 = "noEmptyRegions";
  v20 = 26;
  v18 = a1 + 35;
  v23 = 15;
  v19 = "initializedSnapAssistState";
  v21 = a1 + 34;
  v22 = "snapAssistReset";
  v24 = a1 + 33;
  v25 = "snapAssistOccluded";
  v27 = a1 + 32;
  v28 = "lastRegionFilled";
  v30 = a1 + 31;
  v31 = "windowRefusedSnapping";
  v33 = a1 + 30;
  v34 = "snapAssistDismissed";
  v36 = a1 + 29;
  v37 = "snapAssistBlocked";
  v39 = a1 + 28;
  v13 = "snappedWindows";
  v15 = a1 + 24;
  v10 = "skippedRegions";
  v12 = a1 + 20;
  v7 = "initialRegions";
  v9 = a1 + 16;
  v26 = 18;
  v29 = 16;
  v32 = 21;
  v35 = 19;
  v38 = 17;
  v14 = 14;
  v11 = 14;
  v8 = 14;
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v7, a3);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v10, v4);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v13, v5);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (unsigned int)&v37,
           (unsigned int)&v34,
           (unsigned int)&v31,
           (__int64)&v28,
           (__int64)&v25,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16);
}
