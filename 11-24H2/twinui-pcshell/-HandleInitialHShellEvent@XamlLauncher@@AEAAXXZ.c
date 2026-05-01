/*
 * XREFs of ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C6690
 * Callers:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024BE7C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18011C760 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801C67E4 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180219870 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024D0C0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x18046258C (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 */

void __fastcall XamlLauncher::HandleInitialHShellEvent(XamlLauncher *this, enum _TABLETMODESTATE *a2)
{
  char IsTabletMode; // bl
  PerSessionState *v4; // rcx
  enum _TABLETMODESTATE *v5; // rdx
  PerSessionState *v6; // rcx
  unsigned __int8 v7; // al

  IsTabletMode = TabletModeHelpers::IsTabletMode(this, a2);
  if ( PerSessionState::HasLoginCompleted(v4) )
  {
    LOBYTE(v6) = IsTabletMode;
    if ( !PerSessionState::IsLauncherVisible(v6, (bool)v5) )
      return;
    XamlLauncher::PublishLauncherVisibilityState(this, 0);
  }
  else if ( !IsTabletMode )
  {
    return;
  }
  v7 = TabletModeHelpers::IsTabletMode(v6, v5);
  XamlLauncher::ShowStartView((__int64)this + 24, 1u, 4 * v7);
}
