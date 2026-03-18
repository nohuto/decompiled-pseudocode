/*
 * XREFs of ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x14000B3C0 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetDpiForMonitor @ 0x140010FF0 (NtUserGetDpiForMonitor.c)
 *     NtUserEnumDisplayDevices @ 0x1400187E0 (NtUserEnumDisplayDevices.c)
 *     NtUserReleaseDC @ 0x140023030 (NtUserReleaseDC.c)
 *     NtUserGetKeyboardLayout @ 0x140023920 (NtUserGetKeyboardLayout.c)
 *     NtUserGetKeyboardState @ 0x1400244A0 (NtUserGetKeyboardState.c)
 *     UserReleaseDC @ 0x140024770 (UserReleaseDC.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400247CC (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserEnumDisplayMonitors @ 0x1400417E0 (NtUserEnumDisplayMonitors.c)
 *     ReferenceDwmApiPort @ 0x140041C90 (ReferenceDwmApiPort.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x140046390 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserGetClipCursor @ 0x140046AE0 (NtUserGetClipCursor.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140062E50 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetHDevName @ 0x140095CC0 (NtUserGetHDevName.c)
 *     NtUserVkKeyScanEx @ 0x1400965A0 (NtUserVkKeyScanEx.c)
 *     NtUserMapVirtualKeyEx @ 0x140096920 (NtUserMapVirtualKeyEx.c)
 *     NtMITGetCursorUpdateHandle @ 0x1400BB240 (NtMITGetCursorUpdateHandle.c)
 *     NtUserGetDoubleClickTime @ 0x14010CEB0 (NtUserGetDoubleClickTime.c)
 *     NtUserGetKeyboardLayoutList @ 0x1401102E0 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetKeyboardType @ 0x140123530 (NtUserGetKeyboardType.c)
 *     NtUserGetSystemDpiForProcess @ 0x140142D00 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x14014DF30 (NtUserIsMouseInPointerEnabled.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x14016C1F0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetAsyncKeyState @ 0x14016C610 (NtUserGetAsyncKeyState.c)
 *     NtUserGetInputLocaleInfo @ 0x14016CC70 (NtUserGetInputLocaleInfo.c)
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 *     NtUserGetPointerCursorId @ 0x14016D200 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameTimes @ 0x14016D2C0 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInfoList @ 0x14016D3B0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x14016D770 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerProprietaryId @ 0x14016D880 (NtUserGetPointerProprietaryId.c)
 *     NtUserGetPointerType @ 0x14016D950 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x14016DA20 (NtUserGetRawPointerDeviceData.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401709B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     UserGetWindowThreadProcessId @ 0x140198B90 (UserGetWindowThreadProcessId.c)
 *     NtMITSetLastInputRecipient @ 0x1401B8C50 (NtMITSetLastInputRecipient.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BA9F0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401BADD0 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401BAE60 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 */

__int64 *__fastcall EnterLeaveCritShared::EnterLeaveCritShared(__int64 *a1, unsigned int a2)
{
  *a1 = EnterSharedCrit(0, a2);
  return a1;
}
