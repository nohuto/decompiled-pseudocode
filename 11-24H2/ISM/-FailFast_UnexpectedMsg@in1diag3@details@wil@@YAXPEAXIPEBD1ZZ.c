/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F32E8
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180018860 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B830 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ @ 0x1800521F0 (-GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x180057ED0 (-GetRectForLocation@ShellEdgyRecognizer@@AEAA-AUtagRECT@@U2@W4EdgyLocation@1@@Z.c)
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800886F0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x180095054 (-CheckForGesture@ShellEdgyRecognizer@@AEAA-AW4GestureRecognizerState@@XZ.c)
 *     ?SetCrosshairEnabledStatusForInputType@SystemCursorService2@@UEAAJW4InputType@@_N@Z @ 0x1800FAD60 (-SetCrosshairEnabledStatusForInputType@SystemCursorService2@@UEAAJW4InputType@@_N@Z.c)
 *     ?SetCrosshairPropertiesForInputType@SystemCursorService2@@UEAAJW4InputType@@K@Z @ 0x1800FAD90 (-SetCrosshairPropertiesForInputType@SystemCursorService2@@UEAAJW4InputType@@K@Z.c)
 *     ?SetShapeForInputType@SystemCursorService2@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x1800FB5C0 (-SetShapeForInputType@SystemCursorService2@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE.c)
 *     ?CreateCursorForDevice@DesktopSystemCursorService@@UEAAJ_K@Z @ 0x1800FBC90 (-CreateCursorForDevice@DesktopSystemCursorService@@UEAAJ_K@Z.c)
 *     ?CreateCursorShape@DesktopSystemCursorService@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800FBCC0 (-CreateCursorShape@DesktopSystemCursorService@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 *     ?CursorExists@DesktopSystemCursorService@@UEAA_N_K@Z @ 0x1800FBCF0 (-CursorExists@DesktopSystemCursorService@@UEAA_N_K@Z.c)
 *     ?CustomCursor@DesktopSystemCursorService@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@XZ @ 0x1800FBD20 (-CustomCursor@DesktopSystemCursorService@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@XZ.c)
 *     ?GetCursor@DesktopSystemCursorService@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@_K@Z @ 0x1800FBD50 (-GetCursor@DesktopSystemCursorService@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@_K@Z.c)
 *     ?ResetForNewShellInstance@DesktopSystemCursorService@@UEAAJK@Z @ 0x1800FBD80 (-ResetForNewShellInstance@DesktopSystemCursorService@@UEAAJK@Z.c)
 *     ?SetCursorClientOwner@DesktopSystemCursorService@@UEAAJUCursorId@@@Z @ 0x1800FBE50 (-SetCursorClientOwner@DesktopSystemCursorService@@UEAAJUCursorId@@@Z.c)
 *     ?SetCursorShellMagnification@DesktopSystemCursorService@@UEAAJ_KM@Z @ 0x1800FBE80 (-SetCursorShellMagnification@DesktopSystemCursorService@@UEAAJ_KM@Z.c)
 *     ?SetCursorShellVisibility@DesktopSystemCursorService@@UEAAJ_K_N@Z @ 0x1800FBEB0 (-SetCursorShellVisibility@DesktopSystemCursorService@@UEAAJ_K_N@Z.c)
 *     ?SetCursorSuppressionStateForInputType@DesktopSystemCursorService@@UEAA_NW4InputType@@_N@Z @ 0x1800FBEE0 (-SetCursorSuppressionStateForInputType@DesktopSystemCursorService@@UEAA_NW4InputType@@_N@Z.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180159C88 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x18015ABF4 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180195BD0 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18008E694 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void __noreturn wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v5; // [rsp+20h] [rbp-48h]
  wil::details *v6; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  LODWORD(v6) = -2147418113;
  wil::details::ReportFailure_HrMsg<3>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6, (__int64)a4, (__int64)&a5);
}
