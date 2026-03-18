/*
 * XREFs of DxgkDisplayMuxReportFirstFramePresented @ 0x1400892B4
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     ?ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z @ 0x140086DB0 (-ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z.c)
 */

void __fastcall DxgkDisplayMuxReportFirstFramePresented(struct _LUID a1, int a2)
{
  DISPLAY_MUX_MGR::ReportFirstFramePresented(qword_14015E3C0, a1, a2);
}
