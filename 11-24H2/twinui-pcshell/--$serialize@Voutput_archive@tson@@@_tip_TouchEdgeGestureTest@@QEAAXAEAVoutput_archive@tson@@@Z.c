/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180593954
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805946A0 (-serialize@-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DD450 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C06C4 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x18059340C (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 *     ??$process@V?$nvp@AEAM@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAM@1@@Z @ 0x1805934C0 (--$process@V-$nvp@AEAM@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAM@1@@Z.c)
 */

__int64 __fastcall _tip_TouchEdgeGestureTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  const char *v5; // [rsp+30h] [rbp-D0h] BYREF
  char v6; // [rsp+38h] [rbp-C8h]
  __int64 v7; // [rsp+40h] [rbp-C0h]
  const char *v8; // [rsp+48h] [rbp-B8h] BYREF
  char v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  const char *v11; // [rsp+60h] [rbp-A0h] BYREF
  char v12; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  const char *v14; // [rsp+78h] [rbp-88h] BYREF
  char v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  const char *v17; // [rsp+90h] [rbp-70h] BYREF
  char v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  const char *v20; // [rsp+A8h] [rbp-58h] BYREF
  char v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  const char *v23; // [rsp+C0h] [rbp-40h] BYREF
  char v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  const char *v26; // [rsp+D8h] [rbp-28h] BYREF
  char v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  const char *v29; // [rsp+F0h] [rbp-10h] BYREF
  char v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+100h] [rbp+0h]
  const char *v32; // [rsp+108h] [rbp+8h] BYREF
  char v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  const char *v35; // [rsp+120h] [rbp+20h] BYREF
  char v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  const char *v38; // [rsp+138h] [rbp+38h] BYREF
  char v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]

  v27 = 18;
  v26 = "displayRect.bottom";
  v30 = 15;
  v28 = a1 + 56;
  v33 = 17;
  v29 = "displayRect.top";
  v31 = a1 + 48;
  v32 = "displayRect.right";
  v34 = a1 + 52;
  v35 = "displayRect.left";
  v37 = a1 + 44;
  v38 = "connectedMonitors";
  v40 = a1 + 40;
  v23 = "monitors";
  v25 = a1 + 36;
  v20 = "startAnimationResult";
  v22 = a1 + 34;
  v17 = "startGestureResult";
  v19 = a1 + 33;
  v14 = "queryMonitorFailure";
  v16 = a1 + 32;
  v11 = "position.Y";
  v13 = a1 + 28;
  v8 = "position.X";
  v10 = a1 + 24;
  v5 = "sourceId";
  v7 = a1 + 16;
  v36 = 16;
  v39 = 17;
  v24 = 8;
  v21 = 20;
  v18 = 18;
  v15 = 19;
  v12 = 10;
  v9 = 10;
  v6 = 8;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v5);
  tson::output_archive::process<tson::nvp<float &>>(a2, (__int64)&v8);
  tson::output_archive::process<tson::nvp<float &>>(a2, (__int64)&v11);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v14);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v17);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v20);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v23, v3);
  return tson::output_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (__int64 *)&v38,
           (__int64)&v35,
           (__int64)&v32,
           (__int64)&v29,
           (__int64)&v26);
}
