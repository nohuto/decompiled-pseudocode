/*
 * XREFs of ?DxgkReportGlobalState@@YAXXZ @ 0x1403A359C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1400532D4 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkReportGlobalState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::ReportState(Global);
}
