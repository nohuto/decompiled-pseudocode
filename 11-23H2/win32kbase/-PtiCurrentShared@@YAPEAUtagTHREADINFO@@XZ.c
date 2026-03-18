/*
 * XREFs of ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     NtUserVkKeyScanEx @ 0x1C0007F80 (NtUserVkKeyScanEx.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C000D804 (UserGetDesktopIdForCurrentThread.c)
 *     _GetDC @ 0x1C000EB00 (_GetDC.c)
 *     _GetKeyNameText @ 0x1C00135E0 (_GetKeyNameText.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E630 (NtUserQueryDisplayConfig.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     NtUserGetHDevName @ 0x1C004C950 (NtUserGetHDevName.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     LeaveCrit @ 0x1C004CFE0 (LeaveCrit.c)
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     ValidateHmenu @ 0x1C00528F0 (ValidateHmenu.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0057400 (CoalesceInputSourceMouseMoves.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 *     GetMonitorRect @ 0x1C005BE7C (GetMonitorRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C005C500 (GetCurrentThreadCompositedDpi.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0068364 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     _GetKeyboardLayout @ 0x1C0069AE0 (_GetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C006BAD0 (NtUserMapVirtualKeyEx.c)
 *     NtUserGetKeyboardState @ 0x1C00708C0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1C0070AB0 (NtUserGetAsyncKeyState.c)
 *     ?Init@InputThreadState@CInputThreadBase@@QEAAXXZ @ 0x1C0084B28 (-Init@InputThreadState@CInputThreadBase@@QEAAXXZ.c)
 *     UserIsWindowGdiScaled @ 0x1C009B0E0 (UserIsWindowGdiScaled.c)
 *     NtUserSetInputServiceState @ 0x1C00AD930 (NtUserSetInputServiceState.c)
 *     InitSystemThread @ 0x1C00B46F0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B4DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     ?IsHandleILChecksEnabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C00C48F0 (-IsHandleILChecksEnabledForCurrentThread@tagTHREADINFO@@SA_NXZ.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00CBFC0 (UserIsCurrentThreadGdiScaled.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00DE4B0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     IsPointerDeviceAccessible @ 0x1C00DE7C0 (IsPointerDeviceAccessible.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00E38CC (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?IsHandleILChecksDisabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C012EF50 (-IsHandleILChecksDisabledForCurrentThread@tagTHREADINFO@@SA_NXZ.c)
 *     UserGetCurrentDesktopId @ 0x1C012F7E8 (UserGetCurrentDesktopId.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1C012FED0 (ValidateHbwndOwnedByCallingThread.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0140470 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtMITPostWindowEventMessage @ 0x1C0141D20 (NtMITPostWindowEventMessage.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0143F90 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetPointerInfoList @ 0x1C0144EB0 (NtUserGetPointerInfoList.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146100 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146840 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0147210 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147B60 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01497E0 (NtUserIsMouseInPointerEnabled.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0149F40 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AEF0 (NtUserSetFeatureReportResponse.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C01C8924 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTHREADINFO *PtiCurrentShared(void)
{
  __int64 ThreadWin32Thread; // rax

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(struct tagTHREADINFO **)ThreadWin32Thread;
  else
    return 0LL;
}
