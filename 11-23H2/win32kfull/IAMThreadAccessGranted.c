/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0030E2C
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0011DF0 (NtUserSetActivationFilter.c)
 *     NtUserSendEventMessage @ 0x1C00150F0 (NtUserSendEventMessage.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016EE0 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C002D350 (NtUserSetActiveProcessForMonitor.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002E044 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002F440 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserAllowSetForegroundWindow @ 0x1C0030B40 (NtUserAllowSetForegroundWindow.c)
 *     ValidateHwndIAM @ 0x1C0030BB8 (ValidateHwndIAM.c)
 *     _PostTransformableMessageIL @ 0x1C00351FC (_PostTransformableMessageIL.c)
 *     NtUserRegisterHotKey @ 0x1C0041410 (NtUserRegisterHotKey.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C004595C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0072BD4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x1C009C5D0 (NtUserEnableShellWindowManagementBehavior.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00A42E4 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00E9820 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserPostMessage @ 0x1C011EBC0 (NtUserPostMessage.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01AE018 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B2990 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01CCF40 (NtUserClearForeground.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01D8AF0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01D9CE0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01DB280 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowShowState @ 0x1C01DCC10 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x1C01DD400 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DD7E0 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01DF350 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0030E5C (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  __int64 v1; // rcx
  struct tagIAM_THREAD *IAMThread; // r8
  bool result; // al

  IAMThread = FindIAMThread(a1);
  result = 0;
  if ( IAMThread )
    return *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v1 + 456);
  return result;
}
