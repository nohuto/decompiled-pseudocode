/*
 * XREFs of ??$?RV?$nvp@AEAH@tson@@V01@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAG@1@V31@V31@V31@V31@V31@V31@V31@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V41@V41@V?$nvp@AEA_N@1@V51@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEA_N@1@4@Z @ 0x1805C26C4
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_InboxedAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C786C (--$serialize@Vinput_archive@tson@@@_tip_InboxedAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180467D48 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEA_N@2@V62@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEA_N@1@4@Z @ 0x1805C52C4 (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applicatio.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  char v17; // r10

  v17 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v17;
  tson::input_archive::operator()<int &>(this, *(_DWORD **)(a2 + 16));
  tson::input_archive::process<tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
    this,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17);
  return this;
}
