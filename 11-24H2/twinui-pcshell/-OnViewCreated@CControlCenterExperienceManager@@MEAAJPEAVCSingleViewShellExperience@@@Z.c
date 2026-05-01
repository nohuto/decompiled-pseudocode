/*
 * XREFs of ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800AD7F0 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800CFD28 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800CFD9C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180240440 (-ApproveProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     ?SetZBand@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803767B0 (-SetZBand@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::OnViewCreated(
        CControlCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rax
  HWND v7; // rbx
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  DWORD dwProcessId; // [rsp+50h] [rbp+20h] BYREF
  DWORD v13; // [rsp+58h] [rbp+28h] BYREF
  char v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)this + 16, 1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  v7 = v6;
  if ( v6 )
  {
    if ( !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    dwProcessId = 0;
    GetWindowThreadProcessId(v7, &dwProcessId);
    if ( dwProcessId )
    {
      winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)&v15);
      winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
        (const struct winrt::Windows::UI::Internal::Input::InputSite *)&v14,
        &v15);
      v13 = dwProcessId;
      *(_QWORD *)&v10 = &v13;
      DWORD2(v10) = 1;
      winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        (__int64)&v14,
        &v10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
  }
  v9 = CControlCenterExperienceManager::SetZBand((CControlCenterExperienceManager *)((char *)this - 104));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x601,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
