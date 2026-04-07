/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8
 * Callers:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180002968 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18000A10C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800121B8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180020070 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x180026830 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180026AA0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003F738 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003FDE4 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x1800467D4 (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18004CB88 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180068690 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180068998 (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18007E550 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ @ 0x180087C80 (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18008CE74 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     McTemplateU0ppd_EtwEventWriteTransfer @ 0x180097744 (McTemplateU0ppd_EtwEventWriteTransfer.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x180097980 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     McTemplateU0jdd_EtwEventWriteTransfer @ 0x180097B7C (McTemplateU0jdd_EtwEventWriteTransfer.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x180098218 (McTemplateU0jq_EtwEventWriteTransfer.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180098C50 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x1800A6058 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x1800A6208 (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x1800A6CB4 (McTemplateU0j_EtwEventWriteTransfer.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800A6D10 (McTemplateU0ji_EtwEventWriteTransfer.c)
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x1800A6D84 (McTemplateU0jqi_EtwEventWriteTransfer.c)
 *     McTemplateU0pdd_EtwEventWriteTransfer @ 0x1800A7050 (McTemplateU0pdd_EtwEventWriteTransfer.c)
 *     McTemplateU0qffff_EtwEventWriteTransfer @ 0x1800A7CF0 (McTemplateU0qffff_EtwEventWriteTransfer.c)
 *     McTemplateU0qqqp_EtwEventWriteTransfer @ 0x1800A80E4 (McTemplateU0qqqp_EtwEventWriteTransfer.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x1800A83F4 (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800BA7D4 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800BB9A8 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x1800C7918 (McTemplateU0qq_EtwEventWriteTransfer.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CA5F4 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800CA970 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800D0C64 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x1800D0CDC (McTemplateU0z_EtwEventWriteTransfer.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800D9234 (McTemplateU0qd_EtwEventWriteTransfer.c)
 *     McTemplateU0tttt_EtwEventWriteTransfer @ 0x1800D92B4 (McTemplateU0tttt_EtwEventWriteTransfer.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800D9A30 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800D9AE0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800DBB7C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800DE0E0 (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x1800DE1C4 (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 *     McTemplateU0pdddd_EtwEventWriteTransfer @ 0x1800E42D0 (McTemplateU0pdddd_EtwEventWriteTransfer.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF6B0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     McTemplateU0pddddd_EtwEventWriteTransfer @ 0x1800F45A8 (McTemplateU0pddddd_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  int v7; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    *(_QWORD *)a5 = v5;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(*a1, a2);
}
