/*
 * XREFs of UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14004C9C0 (UserSessionSwitchEnterCrit.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14004CBE0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0MaybeEnterLeaveCrit@@QEAA@_N@Z @ 0x1400E94B0 (--0MaybeEnterLeaveCrit@@QEAA@_N@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB910 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1400F04A0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     UserEnterUserCritSec @ 0x1400FFA40 (UserEnterUserCritSec.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x14010415C (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserSetInputServiceState @ 0x140112D80 (NtUserSetInputServiceState.c)
 *     VideoPortCallout @ 0x1401237F0 (VideoPortCallout.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140126F90 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012E3E0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14012FBC0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140133408 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1401364B8 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x14013C794 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     NtRIMOnPnpNotification @ 0x14013CE80 (NtRIMOnPnpNotification.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140148E60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014CEA4 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     NtSetShellCursorState @ 0x14014E690 (NtSetShellCursorState.c)
 *     EnterCrit @ 0x140162740 (EnterCrit.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140165224 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     NtUserRemoveInjectionDevice @ 0x14019A120 (NtUserRemoveInjectionDevice.c)
 *     ProcessFreezeChangeNotify @ 0x1401A3EF0 (ProcessFreezeChangeNotify.c)
 *     InitSystemThread @ 0x1401A7780 (InitSystemThread.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401A9AC8 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401AA430 (-Terminated@Win32JobObject@@YAXK@Z.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BCE90 (NtUserSetFeatureReportResponse.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1402169E0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216B40 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall UserCritInternal::_anonymous_namespace_::IsValidGuiContext(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  char v2; // cl
  char result; // al

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x1000000) == 0 )
    return 0;
  if ( *(char *)(a1 + 1360) < 0 )
    return 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 0;
  if ( !*(_QWORD *)CurrentProcessWin32Process )
    return 0;
  v2 = *(_BYTE *)(CurrentProcessWin32Process + 1208);
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}
