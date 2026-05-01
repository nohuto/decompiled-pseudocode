/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180219870
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18024DF30 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C6690 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045EEC8 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x180460480 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x1801FE790 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D11C4 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_1808CBA84;
  if ( !byte_1808CBA84 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_1808CBA84 = result;
  }
  return result;
}
