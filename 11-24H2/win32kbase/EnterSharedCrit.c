/*
 * XREFs of EnterSharedCrit @ 0x140010CB0
 * Callers:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x140010BFC (DrvGetCurrentDpiInfo.c)
 *     ??0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z @ 0x140010C58 (--0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z.c)
 *     UserEnterUserCritSecShared @ 0x140010C90 (UserEnterUserCritSecShared.c)
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x140011770 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9A64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1400F04A0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserCheckProcessSession @ 0x14016B6A0 (NtUserCheckProcessSession.c)
 *     NtUserEnumDisplaySettings @ 0x14016C140 (NtUserEnumDisplaySettings.c)
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x14016CB70 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401A8FC0 (--0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 *     NtUserGetKeyboardInputThreadId @ 0x1401BAD90 (NtUserGetKeyboardInputThreadId.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401BD470 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401CCF80 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216C00 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall EnterSharedCrit(unsigned int a1, unsigned int a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState();
  return UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           a1,
           a2,
           lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_);
}
