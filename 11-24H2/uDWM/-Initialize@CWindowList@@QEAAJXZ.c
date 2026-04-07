/*
 * XREFs of ?Initialize@CWindowList@@QEAAJXZ @ 0x18004A1D4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004A13C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@AEBUITransition@234@@Z @ 0x18004B3FC (-RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004CEF4 (--0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180095380 (--0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18009807C (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18009AC5C (--0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::Initialize(CWindowList *this)
{
  int RootVisual; // ebx
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // eax
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  RootVisual = CWindowList::CreateRootVisual(this);
  if ( RootVisual < 0 )
  {
    v3 = 1987LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)RootVisual,
      v10);
    return (unsigned int)RootVisual;
  }
  v5 = CWindowList::RegisterTransparencySystemPolicyChangeEvent(this);
  RootVisual = v5;
  if ( v5 < 0 )
  {
    v3 = 1988LL;
    goto LABEL_3;
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    v7 = winrt::Udwm::Transitions::Private::ScreenRotationTransition::ScreenRotationTransition((winrt::Udwm::Transitions::Private::ScreenRotationTransition *)&v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 1LL, v7);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition((winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *)&v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 2LL, &v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 3LL, &v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 4LL, &v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 5LL, &v12);
    v8 = winrt::Udwm::Transitions::Private::WindowJointResizeTransition::WindowJointResizeTransition((winrt::Udwm::Transitions::Private::WindowJointResizeTransition *)&v13);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 6LL, v8);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E4,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                           v9);
  }
  return result;
}
