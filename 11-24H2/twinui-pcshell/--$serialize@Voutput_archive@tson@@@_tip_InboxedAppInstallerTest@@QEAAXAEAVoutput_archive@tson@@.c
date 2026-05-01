/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InboxedAppInstallerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805C8960
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805DD290 (-serialize@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archiv.c)
 * Callees:
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEA_N@2@V62@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEA_N@1@4@Z @ 0x1805C51B4 (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applic.c)
 */

__int64 __fastcall _tip_InboxedAppInstallerTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+90h] [rbp-80h] BYREF
  char v4; // [rsp+98h] [rbp-78h]
  __int64 v5; // [rsp+A0h] [rbp-70h]
  const char *v6; // [rsp+A8h] [rbp-68h] BYREF
  char v7; // [rsp+B0h] [rbp-60h]
  __int64 v8; // [rsp+B8h] [rbp-58h]
  const char *v9; // [rsp+C0h] [rbp-50h] BYREF
  char v10; // [rsp+C8h] [rbp-48h]
  __int64 v11; // [rsp+D0h] [rbp-40h]
  const char *v12; // [rsp+D8h] [rbp-38h] BYREF
  char v13; // [rsp+E0h] [rbp-30h]
  __int64 v14; // [rsp+E8h] [rbp-28h]
  const char *v15; // [rsp+F0h] [rbp-20h] BYREF
  char v16; // [rsp+F8h] [rbp-18h]
  __int64 v17; // [rsp+100h] [rbp-10h]
  const char *v18; // [rsp+108h] [rbp-8h] BYREF
  char v19; // [rsp+110h] [rbp+0h]
  __int64 v20; // [rsp+118h] [rbp+8h]
  const char *v21; // [rsp+120h] [rbp+10h] BYREF
  char v22; // [rsp+128h] [rbp+18h]
  __int64 v23; // [rsp+130h] [rbp+20h]
  const char *v24; // [rsp+138h] [rbp+28h] BYREF
  char v25; // [rsp+140h] [rbp+30h]
  __int64 v26; // [rsp+148h] [rbp+38h]
  const char *v27; // [rsp+150h] [rbp+40h] BYREF
  char v28; // [rsp+158h] [rbp+48h]
  __int64 v29; // [rsp+160h] [rbp+50h]
  const char *v30; // [rsp+168h] [rbp+58h] BYREF
  char v31; // [rsp+170h] [rbp+60h]
  __int64 v32; // [rsp+178h] [rbp+68h]
  const char *v33; // [rsp+180h] [rbp+70h] BYREF
  char v34; // [rsp+188h] [rbp+78h]
  __int64 v35; // [rsp+190h] [rbp+80h]
  const char *v36; // [rsp+198h] [rbp+88h] BYREF
  char v37; // [rsp+1A0h] [rbp+90h]
  __int64 v38; // [rsp+1A8h] [rbp+98h]
  const char *v39; // [rsp+1B0h] [rbp+A0h] BYREF
  char v40; // [rsp+1B8h] [rbp+A8h]
  __int64 v41; // [rsp+1C0h] [rbp+B0h]
  const char *v42; // [rsp+1C8h] [rbp+B8h] BYREF
  char v43; // [rsp+1D0h] [rbp+C0h]
  __int64 v44; // [rsp+1D8h] [rbp+C8h]
  const char *v45; // [rsp+1E0h] [rbp+D0h] BYREF
  char v46; // [rsp+1E8h] [rbp+D8h]
  __int64 v47; // [rsp+1F0h] [rbp+E0h]
  const char *v48; // [rsp+1F8h] [rbp+E8h] BYREF
  char v49; // [rsp+200h] [rbp+F0h]
  __int64 v50; // [rsp+208h] [rbp+F8h]

  v4 = 20;
  v3 = "invalidPackageVolume";
  v7 = 21;
  v5 = a1 + 17;
  v6 = "isPowerSupplyAdequate";
  v8 = a1 + 144;
  v9 = "localPackagePath";
  v11 = a1 + 112;
  v12 = "packageFamilyName";
  v14 = a1 + 80;
  v15 = "productId";
  v17 = a1 + 48;
  v18 = "minimumVersion.Revision";
  v20 = a1 + 46;
  v21 = "minimumVersion.Build";
  v23 = a1 + 44;
  v24 = "minimumVersion.Minor";
  v26 = a1 + 42;
  v27 = "minimumVersion.Major";
  v29 = a1 + 40;
  v30 = "installedVersion.Revision";
  v32 = a1 + 38;
  v33 = "installedVersion.Build";
  v35 = a1 + 36;
  v36 = "installedVersion.Minor";
  v38 = a1 + 34;
  v39 = "installedVersion.Major";
  v41 = a1 + 32;
  v42 = "installState";
  v44 = a1 + 28;
  v45 = "installException.value";
  v47 = a1 + 24;
  v48 = "installError.value";
  v50 = a1 + 20;
  v10 = 16;
  v13 = 17;
  v16 = 9;
  v19 = 23;
  v22 = 20;
  v25 = 20;
  v28 = 20;
  v31 = 25;
  v34 = 22;
  v37 = 22;
  v40 = 22;
  v43 = 12;
  v46 = 22;
  v49 = 18;
  return tson::output_archive::process<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v48,
           (__int64)&v45,
           (int)&v42,
           (__int64)&v39,
           (__int64)&v36,
           (__int64)&v33,
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
