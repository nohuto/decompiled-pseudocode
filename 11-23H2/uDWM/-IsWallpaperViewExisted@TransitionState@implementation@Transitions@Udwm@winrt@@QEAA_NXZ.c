/*
 * XREFs of ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180101FC4
 * Callers:
 *     ?get_IsWallpaperViewExisted@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180103C90 (-get_IsWallpaperViewExisted@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UI.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001C934 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180051228 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

char __fastcall winrt::Udwm::Transitions::implementation::TransitionState::IsWallpaperViewExisted(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  char v1; // bl
  BOOL v3; // eax
  HWND ShellWindowForDesktop; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *pvParam; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  pvParam = this;
  v1 = 1;
  GetDesktopID(1LL, &v6);
  if ( CDesktopManager::IsLogonDesktop(v6) )
    return 0;
  LODWORD(pvParam) = 0;
  v3 = SystemParametersInfoW(0xAAu, 0, &pvParam, 0);
  LODWORD(pvParam) = v3 ? (unsigned int)pvParam : 0;
  GetDesktopID(1LL, &v6);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                            v6);
  if ( (_DWORD)pvParam || !ShellWindowForDesktop )
    return 0;
  return v1;
}
