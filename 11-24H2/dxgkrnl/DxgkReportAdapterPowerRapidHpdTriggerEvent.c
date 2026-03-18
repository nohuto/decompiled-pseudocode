/*
 * XREFs of DxgkReportAdapterPowerRapidHpdTriggerEvent @ 0x1400469A4
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1400469D4 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkReportAdapterPowerRapidHpdTriggerEvent(_QWORD *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305624, 3LL, *a1);
}
