/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DF614
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180295420 (-serialize@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805C28A4 (--$-RV-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winr_ea_1805C28A4.c)
 *     ??$make_nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@YA?AV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@0@PEBDAEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@_K@Z @ 0x1805C4F28 (--$make_nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tso.c)
 */

__int64 __fastcall _tip_ToggleDashboardThroughSVC::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r10d
  const char *v5; // [rsp+40h] [rbp-59h] BYREF
  char v6; // [rsp+48h] [rbp-51h]
  __int64 v7; // [rsp+50h] [rbp-49h]
  const char *v8; // [rsp+58h] [rbp-41h] BYREF
  char v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  const char *v11; // [rsp+70h] [rbp-29h] BYREF
  char v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  const char *v14; // [rsp+88h] [rbp-11h] BYREF
  char v15; // [rsp+90h] [rbp-9h]
  __int64 v16; // [rsp+98h] [rbp-1h]
  const char *v17; // [rsp+A0h] [rbp+7h] BYREF
  char v18; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+B0h] [rbp+17h]
  const char *v20; // [rsp+B8h] [rbp+1Fh] BYREF
  char v21; // [rsp+C0h] [rbp+27h]
  __int64 v22; // [rsp+C8h] [rbp+2Fh]
  _BYTE v23[32]; // [rsp+D0h] [rbp+37h] BYREF

  v6 = 15;
  v5 = "packageFullName";
  v9 = 2;
  v7 = a1 + 64;
  v12 = 27;
  v8 = "hr";
  v10 = a1 + 60;
  v11 = "isDashboardExtensionPresent";
  v13 = a1 + 58;
  v14 = "isDashboardExtensionCreationSuccessful";
  v16 = a1 + 57;
  v17 = "isRelevantExtensionError";
  v19 = a1 + 56;
  v20 = "argContexts";
  v22 = a1 + 24;
  v15 = 38;
  v18 = 24;
  v21 = 11;
  v2 = tson::make_nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>(
         v23,
         a2,
         a1 + 16);
  return tson::output_archive::operator()<tson::nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           v3,
           v2,
           (unsigned int)&v20,
           (unsigned int)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
