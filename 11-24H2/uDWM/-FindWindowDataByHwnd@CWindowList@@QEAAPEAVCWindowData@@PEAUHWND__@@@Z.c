/*
 * XREFs of ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180008798 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180040290 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180042974 (-OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800430F4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x1800432FC (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800433A8 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180044444 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x1800447DC (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x180044838 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800451F4 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18007C5F4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z @ 0x180085110 (-SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800852F8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180085720 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008C524 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D88F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800EA250 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z @ 0x1800EE6A4 (-ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z.c)
 *     ?IsWindowCapturable@CWindowList@@AEAAJPEAUHWND__@@PEA_N@Z @ 0x1800F0D4C (-IsWindowCapturable@CWindowList@@AEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z @ 0x1800F12D8 (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x1800F15E4 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800F1860 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800F29F4 (-RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z.c)
 *     ?UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800F39CC (-UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CWindowList::FindWindowDataByHwnd(CWindowList *this, HWND a2)
{
  char *v2; // rdi
  _QWORD *i; // rax
  struct _RTL_GENERIC_TABLE *v6; // rsi
  char *v7; // rcx
  char *j; // rax
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RestartKey = 0LL;
  if ( !a2 )
    return 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  for ( i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        i;
        i = RtlEnumerateGenericTableWithoutSplaying(v6, &RestartKey) )
  {
    if ( v2 )
      break;
    v7 = (char *)(i + 10);
    for ( j = (char *)i[10]; j != v7; j = *(char **)j )
    {
      if ( *((HWND *)j + 5) == a2 )
      {
        v2 = j;
        break;
      }
    }
  }
  return (struct CWindowData *)v2;
}
