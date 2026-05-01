/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805F2488
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805F7170 (-deserialize@-$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAH@2@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAH@1@11@Z @ 0x1805F1E68 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V-$nvp@AEAH@2@V32@V32@@input_archive@tson@.c)
 */

__int64 __fastcall MeetAndChatManagerTip::_tip_IrisContentLoadedTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+60h] [rbp-A0h] BYREF
  char v4; // [rsp+68h] [rbp-98h]
  __int64 v5; // [rsp+70h] [rbp-90h]
  __int64 v6; // [rsp+78h] [rbp-88h] BYREF
  char v7; // [rsp+80h] [rbp-80h]
  __int64 v8; // [rsp+88h] [rbp-78h]
  __int64 v9; // [rsp+90h] [rbp-70h] BYREF
  char v10; // [rsp+98h] [rbp-68h]
  __int64 v11; // [rsp+A0h] [rbp-60h]
  __int64 v12; // [rsp+A8h] [rbp-58h] BYREF
  char v13; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+B8h] [rbp-48h]
  __int64 v15; // [rsp+C0h] [rbp-40h] BYREF
  char v16; // [rsp+C8h] [rbp-38h]
  __int64 v17; // [rsp+D0h] [rbp-30h]
  __int64 v18; // [rsp+D8h] [rbp-28h] BYREF
  char v19; // [rsp+E0h] [rbp-20h]
  __int64 v20; // [rsp+E8h] [rbp-18h]
  __int64 v21; // [rsp+F0h] [rbp-10h] BYREF
  char v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  const char *v24; // [rsp+108h] [rbp+8h] BYREF
  char v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  const char *v27; // [rsp+120h] [rbp+20h] BYREF
  char v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  const char *v30; // [rsp+138h] [rbp+38h] BYREF
  char v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]

  v4 = 16;
  v3 = (__int64)"imagesRetryCount";
  v7 = 18;
  v5 = a1 + 32;
  v10 = 16;
  v6 = (__int64)"creativeRetryCount";
  v13 = 13;
  v8 = a1 + 28;
  v16 = 16;
  v9 = (__int64)"imgDownloadCount";
  v11 = a1 + 24;
  v12 = (__int64)"validMimeType";
  v14 = a1 + 22;
  v15 = (__int64)"imagesDownloaded";
  v17 = a1 + 21;
  v18 = (__int64)"needToDownloadImages";
  v20 = a1 + 20;
  v21 = (__int64)"creativeParsed";
  v23 = a1 + 19;
  v24 = "creativeDownloaded";
  v26 = a1 + 18;
  v27 = "networkRequestFailed";
  v29 = a1 + 17;
  v30 = "irisInitalized";
  v32 = a1 + 16;
  v19 = 20;
  v22 = 14;
  v25 = 18;
  v28 = 20;
  v31 = 14;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<int &>>(
           a2,
           (__int64)&v30,
           (__int64)&v27,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
