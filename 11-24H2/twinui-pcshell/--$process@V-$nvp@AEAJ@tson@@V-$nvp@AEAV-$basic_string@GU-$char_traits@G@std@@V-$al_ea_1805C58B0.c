/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C58B0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C703C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$c_ea_1805C703C.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_AppPrelaunchBackgroundTask@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805C8908 (--$serialize@Voutput_archive@tson@@@_tip_AppPrelaunchBackgroundTask@@QEAAXAEAVoutput_archive@tso.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  char v5; // dl
  __int64 v6; // r8

  tson::output_archive::process<tson::nvp<long &>>(a1, a2, a3);
  v5 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 8) = v5;
  return tson::save_nothrow(a1, *(const void ***)(a3 + 16), v6);
}
