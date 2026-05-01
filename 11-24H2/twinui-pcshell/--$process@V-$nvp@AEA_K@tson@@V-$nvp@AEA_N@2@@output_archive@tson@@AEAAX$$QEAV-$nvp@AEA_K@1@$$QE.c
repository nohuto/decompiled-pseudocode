/*
 * XREFs of ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18063CF38
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18063E1F8 (--$serialize@Voutput_archive@tson@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVoutput_archive@ts.c)
 *     ??$process@AEAU_tip_BrokerTipTest@@@output_archive@tson@@AEAAXAEAU_tip_BrokerTipTest@@@Z @ 0x1806663E4 (--$process@AEAU_tip_BrokerTipTest@@@output_archive@tson@@AEAAXAEAU_tip_BrokerTipTest@@@Z.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C06C4 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a1, a2);
  return tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
}
