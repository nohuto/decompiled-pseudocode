/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805C978C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805DD510 (-serialize@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C6E40 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tr_ea_1805C6E40.c)
 */

__int64 __fastcall _tip_ToggleDashboardUsingSwipe::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+40h] [rbp-C0h] BYREF
  char v5; // [rsp+48h] [rbp-B8h]
  __int64 v6; // [rsp+50h] [rbp-B0h]
  const char *v7; // [rsp+58h] [rbp-A8h] BYREF
  char v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  const char *v10; // [rsp+70h] [rbp-90h] BYREF
  char v11; // [rsp+78h] [rbp-88h]
  __int64 v12; // [rsp+80h] [rbp-80h]
  const char *v13; // [rsp+88h] [rbp-78h] BYREF
  char v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  const char *v16; // [rsp+A0h] [rbp-60h] BYREF
  char v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  const char *v19; // [rsp+B8h] [rbp-48h] BYREF
  char v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  const char *v22; // [rsp+D0h] [rbp-30h] BYREF
  char v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  const char *v25; // [rsp+E8h] [rbp-18h] BYREF
  char v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  const char *v28; // [rsp+100h] [rbp+0h] BYREF
  char v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+110h] [rbp+10h]
  const char *v31; // [rsp+118h] [rbp+18h] BYREF
  char v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  const char *v34; // [rsp+130h] [rbp+30h] BYREF
  char v35; // [rsp+138h] [rbp+38h]
  __int64 v36; // [rsp+140h] [rbp+40h]

  v20 = 15;
  v19 = "packageFullName";
  v23 = 9;
  v21 = a1 + 32;
  v26 = 9;
  v22 = "continued";
  v24 = a1 + 25;
  v25 = "committed";
  v27 = a1 + 24;
  v28 = "cancelSwipeFailed";
  v30 = a1 + 23;
  v31 = "commitSwipeFailed";
  v33 = a1 + 22;
  v34 = "continueSwipeFailed";
  v36 = a1 + 21;
  v16 = "startSwipeFailed";
  v18 = a1 + 20;
  v13 = "isSwipeExtensionNull";
  v15 = a1 + 19;
  v10 = "isHidden";
  v12 = a1 + 18;
  v7 = "isVisible";
  v9 = a1 + 17;
  v4 = "canceled";
  v6 = a1 + 16;
  v29 = 17;
  v32 = 17;
  v35 = 19;
  v17 = 16;
  v14 = 20;
  v11 = 8;
  v8 = 9;
  v5 = 8;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v10);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v16);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v34,
           (int)&v31,
           (int)&v28,
           (__int64)&v25,
           (__int64)&v22,
           (__int64)&v19);
}
