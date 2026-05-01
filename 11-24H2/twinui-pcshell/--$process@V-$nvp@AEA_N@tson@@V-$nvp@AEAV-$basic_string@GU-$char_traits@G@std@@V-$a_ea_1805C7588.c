/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1805C7588
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180657AB0 (--$serialize@Voutput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVoutput_archive.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  return tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(a1, a3, a4);
}
