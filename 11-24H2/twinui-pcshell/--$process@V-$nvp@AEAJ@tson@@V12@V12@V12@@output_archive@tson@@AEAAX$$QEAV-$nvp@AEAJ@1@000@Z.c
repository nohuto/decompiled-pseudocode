/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@000@Z @ 0x1800DCCD8
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_TouchGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DCB2C (--$serialize@Voutput_archive@tson@@@_tip_TouchGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x18059340C (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  tson::output_archive::process<tson::nvp<long &>>(a1, a2);
  tson::output_archive::process<tson::nvp<long &>>(a1, a3);
  tson::output_archive::process<tson::nvp<long &>>(a1, a4);
  return tson::output_archive::process<tson::nvp<long &>>(a1, a5);
}
