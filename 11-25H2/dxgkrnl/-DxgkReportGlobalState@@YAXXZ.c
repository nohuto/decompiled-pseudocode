/*
 * XREFs of ?DxgkReportGlobalState@@YAXXZ @ 0x1403B2A8C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140053624 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403B2AAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkReportGlobalState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::ReportState(Global);
}
