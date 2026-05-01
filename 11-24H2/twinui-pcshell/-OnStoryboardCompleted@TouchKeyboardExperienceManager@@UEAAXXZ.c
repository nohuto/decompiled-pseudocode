/*
 * XREFs of ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x18018DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1800ABEA0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018DC14 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x18018DE04 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180270300 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294C34 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnStoryboardCompleted(TouchKeyboardExperienceManager *this)
{
  char v2; // al
  TouchKeyboardExperienceManager *v3; // rsi
  unsigned int *v4; // r14
  int v5; // eax
  char v6; // al
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v8[2]; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v11; // [rsp+80h] [rbp+30h] BYREF
  char v12; // [rsp+88h] [rbp+38h] BYREF
  char v13; // [rsp+90h] [rbp+40h] BYREF
  char v14; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_BYTE *)this + 752);
  *((_BYTE *)this + 752) = 0;
  if ( v2 )
  {
    *(_OWORD *)v8 = 0LL;
    v3 = (TouchKeyboardExperienceManager *)((char *)this - 184);
    v4 = (unsigned int *)((char *)this + 748);
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this - 23, *((_DWORD *)this + 187), v8) < 0 )
    {
      if ( v8[1] )
        std::_Ref_count_base::_Decref(v8[1]);
      return;
    }
    if ( *((_QWORD *)this + 81) )
    {
      winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled((char *)this + 648);
      v7 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 81, &v7);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    }
    v9 = *(struct tagRECT *)((char *)v8[0] + 120);
    v5 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
           v3,
           *((_DWORD *)v8[0] + 26),
           &v9,
           (const struct tagRECT *)((char *)v8[0] + 136));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x448,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v11 = 0;
    v12 = 1;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(v4, &v12, &v11);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(v3, *v4, L"Show", 0);
    if ( v8[1] )
      std::_Ref_count_base::_Decref(v8[1]);
  }
  v6 = *((_BYTE *)this + 753);
  *((_BYTE *)this + 753) = 0;
  if ( v6 )
  {
    v13 = 0;
    v14 = 0;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
      (char *)this + 748,
      &v14,
      &v13);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)((char *)this - 184),
      *((_DWORD *)this + 187),
      L"Hide",
      0);
  }
}
