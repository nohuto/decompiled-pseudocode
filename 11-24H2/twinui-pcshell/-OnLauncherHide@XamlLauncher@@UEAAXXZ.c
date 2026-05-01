/*
 * XREFs of ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x1801C6450
 * Callers:
 *     <none>
 * Callees:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1801C6494 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801C67E4 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherHide(XamlLauncher *this)
{
  XamlLauncher::LinkUIATrees((XamlLauncher *)((char *)this - 72), 0);
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 0);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 56LL))(*((_QWORD *)this + 14));
}
