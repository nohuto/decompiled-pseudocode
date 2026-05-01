/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000@Z @ 0x1802CFE48
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x18029865C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000@Z @ 0x1802BFEC4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000@Z @ 0x1802CF864 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@000.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x18045BB4C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@_ea_18045BB4C.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_VDSlideAnimationPerfTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180551B78 (--$serialize@Voutput_archive@tson@@@_tip_VDSlideAnimationPerfTest@@QEAAXAEAVoutput_archive@tson@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  return tson::output_archive::process<tson::nvp<bool &>>(a1, a5);
}
