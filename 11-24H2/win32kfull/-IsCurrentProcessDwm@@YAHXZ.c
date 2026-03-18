/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C
 * Callers:
 *     _GetUserObjectInformation @ 0x1401063F8 (_GetUserObjectInformation.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14015E100 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140194B60 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     NtUserDwmKernelStartup @ 0x140194D20 (NtUserDwmKernelStartup.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x140194DB0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     _BuildNameList @ 0x140194F68 (_BuildNameList.c)
 *     NtUserGetDesktopID @ 0x1401951D0 (NtUserGetDesktopID.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1401952E0 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401BEFD0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     _OpenDesktop @ 0x1401CE108 (_OpenDesktop.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x14021ABB0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     CallerCanSeeImmersiveWindows @ 0x14023DB04 (CallerCanSeeImmersiveWindows.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserSignalRedirectionStartComplete @ 0x14026B1A0 (NtUserSignalRedirectionStartComplete.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x140274B90 (EditionIsUsermodeRIMAccessAllowed.c)
 *     NtUserDwmKernelShutdown @ 0x140294400 (NtUserDwmKernelShutdown.c)
 *     NtUserDwmWindowNotificationsEnabled @ 0x1402944A0 (NtUserDwmWindowNotificationsEnabled.c)
 *     NtUserSetCoveredWindowStates @ 0x14029CFD0 (NtUserSetCoveredWindowStates.c)
 *     NtUserSetWindowRgnEx @ 0x14029F2D0 (NtUserSetWindowRgnEx.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AD4EC (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DCAB4 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCurrentProcessDwm(__int64 a1)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  return IsProcessDwm(CurrentProcess);
}
