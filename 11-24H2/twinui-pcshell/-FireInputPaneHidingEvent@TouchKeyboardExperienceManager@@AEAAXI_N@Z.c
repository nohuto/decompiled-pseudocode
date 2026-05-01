/*
 * XREFs of ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180292538
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801D2E90 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?FireInputPaneHiding@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x180470790 (-FireInputPaneHiding@TouchKeyboardExperienceManager@@UEAAJIE@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x1804731F8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 * Callees:
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x1800491DC (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FireInputPaneHidingEvent@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z @ 0x18018D934 (--$FireInputPaneHidingEvent@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x1801FFCD0 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180292648 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  int v6; // eax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __int64 v9; // rsi
  HWND v10; // rdi
  __int64 (__fastcall *v11)(__int64, HWND, _QWORD); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  TouchKeyboardExperienceTelemetryLogger::FireInputPaneHidingEvent<unsigned int &,bool &>((int *)&v16, &v17);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 73) + 48LL),
         0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v14);
  if ( a2 == *((_DWORD *)this + 153) )
  {
    FocusedWindow = anonymous_namespace_::GetFocusedWindow();
    Ancestor = GetAncestor(FocusedWindow, 2u);
    v9 = *((_QWORD *)this + 44);
    v10 = Ancestor;
    v11 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v9 + 32LL);
    PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(*((_QWORD *)this + 73));
    v13 = v11(v9, v10, PrimaryViewDisplayMode);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x635,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        v14);
    *((_DWORD *)this + 155) = 2;
  }
  if ( !a3 )
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
      *((KeyboardHosting::TabTipAdapter **)this + 73),
      a2,
      0);
}
