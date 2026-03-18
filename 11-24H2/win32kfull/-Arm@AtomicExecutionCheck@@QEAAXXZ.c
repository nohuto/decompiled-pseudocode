/*
 * XREFs of ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1400986AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401897BC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x140226CB0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     zzzAnimateFade @ 0x14023A678 (zzzAnimateFade.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 *     NtUserDeferWindowPosAndBand @ 0x140241080 (NtUserDeferWindowPosAndBand.c)
 *     NtUserNotifyProcessCreate @ 0x140243F90 (NtUserNotifyProcessCreate.c)
 *     NtUserRegisterForCustomDockTargets @ 0x140244BB0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserRemoveProp @ 0x140244FE0 (NtUserRemoveProp.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserSetProp @ 0x140246760 (NtUserSetProp.c)
 *     NtUserSetShellWindowEx @ 0x140246970 (NtUserSetShellWindowEx.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     ?OnHideAppStartCursor@@YAXXZ @ 0x1402713D0 (-OnHideAppStartCursor@@YAXXZ.c)
 *     HideAutorunCursor @ 0x1402717B0 (HideAutorunCursor.c)
 *     xxxClearForegroundThread @ 0x140277BF0 (xxxClearForegroundThread.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027A098 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140281DB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x1402912F8 (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     ?_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z @ 0x140291C68 (-_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z.c)
 *     NtUserCanCurrentThreadChangeForeground @ 0x140292D00 (NtUserCanCurrentThreadChangeForeground.c)
 *     NtUserConvertToInterceptWindow @ 0x1402934C0 (NtUserConvertToInterceptWindow.c)
 *     NtUserDwmWindowNotificationsEnabled @ 0x1402944A0 (NtUserDwmWindowNotificationsEnabled.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x140294700 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserEnsureDpiMetricsForDpi @ 0x1402947F0 (NtUserEnsureDpiMetricsForDpi.c)
 *     NtUserEnsureDpiServerInfoForDpi @ 0x140294870 (NtUserEnsureDpiServerInfoForDpi.c)
 *     NtUserGrantJobUIRestrictionException @ 0x140298200 (NtUserGrantJobUIRestrictionException.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1402988D0 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserIsWindowDisplayChangeSuppressed @ 0x140299890 (NtUserIsWindowDisplayChangeSuppressed.c)
 *     NtUserRegisterCloakedNotification @ 0x14029AEB0 (NtUserRegisterCloakedNotification.c)
 *     NtUserRegisterTouchpadCapableWindow @ 0x14029B7B0 (NtUserRegisterTouchpadCapableWindow.c)
 *     NtUserSetMaxTouchpadSensitivity @ 0x14029DE80 (NtUserSetMaxTouchpadSensitivity.c)
 *     NtUserSetShellSpecialWindow @ 0x14029EA00 (NtUserSetShellSpecialWindow.c)
 *     NtUserShellMigrateWindow @ 0x14029FD10 (NtUserShellMigrateWindow.c)
 *     NtUserSuppressWindowDisplayChange @ 0x1402A1030 (NtUserSuppressWindowDisplayChange.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall AtomicExecutionCheck::Arm(AtomicExecutionCheck *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentThreadWin32Thread; // rax

  if ( !*(_BYTE *)this )
  {
    if ( !*(_QWORD *)W32GetUserSessionState(this, a2) || !IS_USERCRIT_OWNED_AT_ALL(v4, v3, v5) )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v8);
    *((_QWORD *)this + 1) = CurrentThreadWin32Thread;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
    *(_BYTE *)this = 1;
  }
}
