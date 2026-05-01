/*
 * XREFs of ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V?$nvp@AEA_N@2@V52@V52@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@2$$QEAV?$nvp@AEA_N@1@33@Z @ 0x1805C5C24
 * Callers:
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V52@V52@V52@V52@V52@V52@V52@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V62@V?$nvp@AEA_N@2@V72@V72@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@3333333$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4$$QEAV?$nvp@AEA_N@1@55@Z @ 0x1805C53D4 (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@Application.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180182FE4 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18032AE3C (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x1803B0D8C (--$process@V-$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
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
        __int64 *a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14,
        __int64 *a15)
{
  __int64 v18; // rax
  __int64 v19; // rax

  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>((__int64)this, a2);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a3);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a4);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a5);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a6);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a7);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a8);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a9);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a10);
  v18 = *a11;
  *((_BYTE *)this + 24) = *((_BYTE *)a11 + 8);
  *((_QWORD *)this + 2) = v18;
  tson::load_nothrow(this, (_WORD *)a11[2]);
  v19 = *a12;
  *((_BYTE *)this + 24) = *((_BYTE *)a12 + 8);
  *((_QWORD *)this + 2) = v19;
  tson::load_nothrow(this, (_WORD *)a12[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)this,
           a13,
           a14,
           a15);
}
