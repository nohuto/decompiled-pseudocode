/*
 * XREFs of DxgkDisplayMuxReportFirstFramePresented @ 0x14008999C
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     ?ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z @ 0x14008746C (-ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z.c)
 */

void __fastcall DxgkDisplayMuxReportFirstFramePresented(struct _LUID a1, int a2)
{
  DISPLAY_MUX_MGR::ReportFirstFramePresented(qword_140161380, a1, a2);
}
