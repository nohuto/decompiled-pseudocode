/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1800DE654
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180620ACC (--$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@.c)
 *     ??$?RAEAU_tip_InputSwitcherHideTest@@@output_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHideTest@@@Z @ 0x1806384F8 (--$-RAEAU_tip_InputSwitcherHideTest@@@output_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHide.c)
 *     ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@output_archive@tson@@QEAAAEAV01@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x18063C268 (--$-RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@output_archive@tson@@QEAAAEAV01@AEAU_.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  return a1;
}
