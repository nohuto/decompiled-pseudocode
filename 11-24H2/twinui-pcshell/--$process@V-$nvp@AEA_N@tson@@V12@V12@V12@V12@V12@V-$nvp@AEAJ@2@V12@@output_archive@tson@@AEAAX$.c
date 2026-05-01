/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18032B8DC
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18032C1C8 (--$serialize@Voutput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVoutput.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18045C804 (--$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutpu.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a5);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a6);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a7);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(a1, a8, a9);
}
