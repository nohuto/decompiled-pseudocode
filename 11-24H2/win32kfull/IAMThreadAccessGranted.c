/*
 * XREFs of IAMThreadAccessGranted @ 0x1400F5BC0
 * Callers:
 *     NtUserSendEventMessage @ 0x1400F4020 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1400F4130 (NtUserSetActivationFilter.c)
 *     NtUserRegisterHotKey @ 0x1400F41F0 (NtUserRegisterHotKey.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4D44 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserAllowSetForegroundWindow @ 0x1400F59D0 (NtUserAllowSetForegroundWindow.c)
 *     ValidateHwndIAM @ 0x1400F5AA4 (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1400F5B08 (ValidateHwndIAMComponetUIAware.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140140F70 (NtUserPostMessage.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x14023DB78 (ExemptedFromImmersiveRestrictions.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserRegisterForCustomDockTargets @ 0x140244BB0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140275A1C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _SetCancelRotationDelayHintWindow @ 0x140277B78 (_SetCancelRotationDelayHintWindow.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x14028F3A0 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x140294560 (NtUserEnableShellWindowManagementBehavior.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x140294700 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x140298120 (NtUserGetWindowTrackInfoAsync.c)
 *     NtUserSetBridgeWindowChild @ 0x14029C7B0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetShellSpecialWindow @ 0x14029EA00 (NtUserSetShellSpecialWindow.c)
 *     NtUserSetWindowShowState @ 0x14029F460 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x14029FD10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A01F0 (NtUserShellSetWindowPos.c)
 *     NtUserSuppressWindowDisplayChange @ 0x1402A1030 (NtUserSuppressWindowDisplayChange.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A1AB0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1400F5BF8 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rdx
  bool result; // al

  IAMThread = FindIAMThread(a1);
  result = 0;
  if ( IAMThread )
    return *((_QWORD *)IAMThread + 3) == *((_QWORD *)a1 + 62);
  return result;
}
