/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEA_N@2@V42@V42@V42@V42@V42@V42@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEA_N@1@222222@Z @ 0x1805C50C8
 * Callers:
 *     ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V?$nvp@AEA_N@2@V52@V52@V52@V52@V52@V52@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@2$$QEAV?$nvp@AEA_N@1@333333@Z @ 0x1805C5E28 (--$process@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationMode_ea_1805C5E28.c)
 * Callees:
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DD07C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8

  tson::output_archive::process<tson::nvp<unsigned short &>>(a1, a2, (__int64)a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>(a1, a3, v17);
  tson::output_archive::process<tson::nvp<unsigned short &>>(a1, a4, v18);
  tson::output_archive::process<tson::nvp<unsigned short &>>(a1, a5, v19);
  v20 = *a6;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a6 + 8);
  *(_QWORD *)a1 = v20;
  tson::save_nothrow(a1, (const void **)a6[2], v21);
  v22 = *a7;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)a1 = v22;
  tson::save_nothrow(a1, (const void **)a7[2], v23);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a1,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
