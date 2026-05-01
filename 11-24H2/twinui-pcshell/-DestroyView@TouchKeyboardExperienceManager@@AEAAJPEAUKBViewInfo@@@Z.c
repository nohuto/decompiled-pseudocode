/*
 * XREFs of ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801D2E90
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18009AA20 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A2998 (-ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018DC14 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180292538 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047D48C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::DestroyView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  __int64 *v2; // r14
  int v5; // eax
  unsigned int v6; // ebp
  char v7; // al
  char v8; // al
  int v10; // eax
  char v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)a2 + 8);
  if ( *((_QWORD *)a2 + 1) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 57) + 32LL))(*((_QWORD *)this + 57), *v2);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEE2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  }
  if ( *(_QWORD *)a2 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
  v11 = 0;
  *((_BYTE *)a2 + 32) = 1;
  v5 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(
         *((_QWORD *)this + 73),
         *((unsigned int *)a2 + 26),
         0LL,
         0LL,
         v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xEEF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6,
      v12);
  }
  TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this, *((_DWORD *)a2 + 26), 1);
  v7 = *((_BYTE *)this + 936);
  *((_BYTE *)this + 936) = 0;
  if ( v7 )
  {
    v14 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 104, &v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      this,
      *((_DWORD *)this + 233),
      L"Show",
      0);
  }
  v8 = *((_BYTE *)this + 937);
  *((_BYTE *)this + 937) = 0;
  if ( v8 )
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      this,
      *((_DWORD *)this + 233),
      L"Hide",
      0);
  _InterlockedExchange((volatile __int32 *)this + 233, 0);
  return 0LL;
}
