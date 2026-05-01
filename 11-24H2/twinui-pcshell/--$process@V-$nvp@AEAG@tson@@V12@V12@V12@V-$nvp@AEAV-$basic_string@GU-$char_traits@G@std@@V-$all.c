/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEA_N@2@V42@V42@V42@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEA_N@1@222222@Z @ 0x1805C4FD8
 * Callers:
 *     ??$process@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V?$nvp@AEA_N@2@V62@V62@V62@V62@V62@V62@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3$$QEAV?$nvp@AEA_N@1@444444@Z @ 0x1805C5F4C (--$process@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winr.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180182FE4 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18032AE3C (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v17; // rax
  __int64 v18; // rax

  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a2);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a3);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a4);
  tson::input_archive::process<tson::nvp<unsigned short &>>((__int64)this, a5);
  v17 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v17;
  tson::load_nothrow(this, (_WORD *)a6[2]);
  v18 = *a7;
  *((_BYTE *)this + 24) = *((_BYTE *)a7 + 8);
  *((_QWORD *)this + 2) = v18;
  tson::load_nothrow(this, (_WORD *)a7[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)this,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
