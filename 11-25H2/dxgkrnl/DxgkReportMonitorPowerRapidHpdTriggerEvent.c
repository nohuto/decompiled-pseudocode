/*
 * XREFs of DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046E90
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046F04 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkReportMonitorPowerRapidHpdTriggerEvent(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  struct DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305544, (v2 ^ 1u) + 1, *(_QWORD *)(a1 + 412));
}
