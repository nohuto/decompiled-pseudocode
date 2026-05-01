/*
 * XREFs of ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180098030 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180141388 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z @ 0x18023BCA0 (-GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E96A0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?SetRootXamlIslandWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802EBB50 (-SetRootXamlIslandWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802ED3D4 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802ED5C4 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 *     ?EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F26C0 (-EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z.c)
 *     ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F3110 (-UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@.c)
 *     ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F6B90 (-AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x1802F6CF0 (-AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PE.c)
 *     ?CollapseAllViewsForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F6DD0 (-CollapseAllViewsForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x1802F7070 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F7330 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F7484 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1802F7960 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F7BB0 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x1802F9950 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F9FE0 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FB900 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FC350 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FC544 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FDCD4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802FE1D8 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?EnableSystemVisualAnimation@CImmersiveApp@@UEAAJH@Z @ 0x1803026C0 (-EnableSystemVisualAnimation@CImmersiveApp@@UEAAJH@Z.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x180304FE0 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 *     ?SetWindowingEnvironmentConfig@CImmersiveApp@@UEAAJPEAUIUnknown@@@Z @ 0x180305600 (-SetWindowingEnvironmentConfig@CImmersiveApp@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SubscribeForPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180305E00 (-SubscribeForPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListen.c)
 *     ?UnsubscribeFromPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180305F70 (-UnsubscribeFromPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationLis.c)
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180309CF8 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CIAMGlobals::AcquireExclusive(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(v2);
  return a2;
}
