/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18046B778
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180479BE0 (-serialize@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@.c)
 * Callees:
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DCD30 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x18046A964 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$Q.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  const char *v6; // [rsp+60h] [rbp-A0h] BYREF
  char v7; // [rsp+68h] [rbp-98h]
  __int64 v8; // [rsp+70h] [rbp-90h]
  const char *v9; // [rsp+78h] [rbp-88h] BYREF
  char v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+88h] [rbp-78h]
  const char *v12; // [rsp+90h] [rbp-70h] BYREF
  char v13; // [rsp+98h] [rbp-68h]
  __int64 v14; // [rsp+A0h] [rbp-60h]
  const char *v15; // [rsp+A8h] [rbp-58h] BYREF
  char v16; // [rsp+B0h] [rbp-50h]
  __int64 v17; // [rsp+B8h] [rbp-48h]
  const char *v18; // [rsp+C0h] [rbp-40h] BYREF
  char v19; // [rsp+C8h] [rbp-38h]
  __int64 v20; // [rsp+D0h] [rbp-30h]
  const char *v21; // [rsp+D8h] [rbp-28h] BYREF
  char v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  const char *v24; // [rsp+F0h] [rbp-10h] BYREF
  char v25; // [rsp+F8h] [rbp-8h]
  __int64 v26; // [rsp+100h] [rbp+0h]
  const char *v27; // [rsp+108h] [rbp+8h] BYREF
  char v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  const char *v30; // [rsp+120h] [rbp+20h] BYREF
  char v31; // [rsp+128h] [rbp+28h]
  __int64 v32; // [rsp+130h] [rbp+30h]
  const char *v33; // [rsp+138h] [rbp+38h] BYREF
  char v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]
  const char *v36; // [rsp+150h] [rbp+50h] BYREF
  char v37; // [rsp+158h] [rbp+58h]
  __int64 v38; // [rsp+160h] [rbp+60h]

  v10 = 21;
  v9 = "isInputAppActiveValid";
  v13 = 16;
  v11 = a1 + 34;
  v16 = 25;
  v12 = "isInputAppActive";
  v19 = 21;
  v14 = a1 + 33;
  v15 = "isOnScreenKeyboardVisible";
  v17 = a1 + 31;
  v18 = "mdmPolicyRejectedShow";
  v20 = a1 + 30;
  v21 = "refusedByTabTipAdapter";
  v23 = a1 + 29;
  v24 = "anotherShowRequested";
  v26 = a1 + 28;
  v27 = "isViewHiddenValid";
  v29 = a1 + 20;
  v30 = "isViewHidden";
  v32 = a1 + 19;
  v33 = "isViewVisibleValid";
  v35 = a1 + 18;
  v36 = "isViewVisible";
  v38 = a1 + 17;
  v6 = "wasViewInvalidAtBegining";
  v8 = a1 + 16;
  v22 = 22;
  v25 = 20;
  v28 = 17;
  v31 = 12;
  v34 = 18;
  v37 = 13;
  v7 = 24;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v6);
  *(_BYTE *)(a2 + 8) = 16;
  *(_QWORD *)a2 = "keyboardViewType";
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 24), v4);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v36,
           (__int64)&v33,
           (__int64)&v30,
           (__int64)&v27,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9);
}
