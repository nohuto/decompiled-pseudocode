/*
 * XREFs of ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014834C (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x140148540 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401488C8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140148A3C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x140269CA0 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x140298120 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402ACE84 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

bool __fastcall IsThreadHung(const struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return IsThreadHungTimeCheck(a1, *(_DWORD *)(UserSessionState + 69368));
}
