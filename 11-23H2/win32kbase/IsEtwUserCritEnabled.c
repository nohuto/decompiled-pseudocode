/*
 * XREFs of IsEtwUserCritEnabled @ 0x1C0053DF0
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C0007F80 (NtUserVkKeyScanEx.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C0009C90 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C000D804 (UserGetDesktopIdForCurrentThread.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0019C80 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     NtUserEnumDisplayDevices @ 0x1C0023AB0 (NtUserEnumDisplayDevices.c)
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 *     ReferenceDwmApiPort @ 0x1C0047A70 (ReferenceDwmApiPort.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     NtUserReleaseDC @ 0x1C004C8C0 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C004CD30 (EnterSharedCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0053EC0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C005C7A8 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C005DDB8 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetKeyboardLayout @ 0x1C0069A60 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C006BAD0 (NtUserMapVirtualKeyEx.c)
 *     UserEnterUserCritSecShared @ 0x1C00A7C40 (UserEnterUserCritSecShared.c)
 *     UserReleaseDC @ 0x1C00AAFB0 (UserReleaseDC.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00AB130 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C00AB380 (NtUserCheckProcessSession.c)
 *     NtUserGetDoubleClickTime @ 0x1C00AFC30 (NtUserGetDoubleClickTime.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B04C0 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B44F0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C0142140 (NtMITSetLastInputRecipient.c)
 *     NtUserGetKeyboardType @ 0x1C0144A90 (NtUserGetKeyboardType.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1C0144B10 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C0145ED0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01497E0 (NtUserIsMouseInPointerEnabled.c)
 *     UserGetWindowThreadProcessId @ 0x1C014F370 (UserGetWindowThreadProcessId.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0150920 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE360 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 */

_BOOL8 IsEtwUserCritEnabled()
{
  return dword_1C02883D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL)
      || ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000002010000000uLL) != 0
      && (unsigned __int8)(byte_1C0283068 - 1) > 2u
      && (qword_1C0283050 & 0x8000002010000000uLL) != 0
      && (qword_1C0283058 & 0x8000002010000000uLL) == qword_1C0283058
      || ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0283068 - 1) > 2u
      && (qword_1C0283050 & 0x200000010000000LL) != 0
      && (qword_1C0283058 & 0x200000010000000LL) == qword_1C0283058;
}
