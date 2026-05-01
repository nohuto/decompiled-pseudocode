/*
 * XREFs of ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x1806A7660
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A74F0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x180225838 (-DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z.c)
 *     ?get@SwitchItem@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUISwitchItem@Multitasking@5Internal@Windows@@XZ @ 0x1802C4CD8 (-get@SwitchItem@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@ComposableShe.c)
 *     ??$capture@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@P87@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU8@@winrt@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@0@$$QEAPEAUIAppViewDataSourceAdapter@@$$QEAP86@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU7@@Z @ 0x1806A6634 (--$capture@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIAppViewDataSou.c)
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x1806BDCAC (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x1806BE1CC (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlSnapAssistViewHost::OnAppSnapped(__int64 a1, __int64 a2, __int128 *a3, const char *a4)
{
  __int128 *v4; // rsi
  __int64 v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 (__fastcall *v16)(__int64); // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+60h] [rbp-28h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    v4 = a3;
    v5 = a1;
    v6 = (__int64 *)(a1 + 576);
    *(_QWORD *)&v19 = a1 + 576;
    if ( *(_QWORD *)(a1 + 576) )
    {
      try
      {
        v15 = a2;
        v25 = 0LL;
        v16 =  IMultitaskingViewVisibilityService::`vcall'{40,{flat}};
        v17 = *(_QWORD *)(a1 + 136);
        v7 = ___capture_UISwitchItem_Multitasking_ComposableShell_Internal_Windows_winrt__PEAUIAppViewDataSourceAdapter__P87_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU8__winrt__YA_AUISwitchItem_Multitasking_ComposableShell_Internal_Windows_0___QEAPEAUIAppViewDataSourceAdapter____QEAP86_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU7__Z(
               &v18,
               &v17,
               (__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))&v16,
               &v15);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v25, v7);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x203,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
          v8);
        v5 = a1;
        v4 = a3;
        v6 = (__int64 *)v19;
      }
      v19 = *v4;
      SnapAssistState::ItemSnapped(*v6, (unsigned int)&v20, v15, (unsigned int)&v25, (__int64)&v19);
      if ( v20 == 1 )
      {
        v10 = __abi_winrt_cast_to(
                0,
                *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(v5 + 144),
                (__int64)&_uuidof__AVSnapAssist_Switcher_Experiences_ComposableShell_WindowsInternal__);
        v11 = __abi_winrt_ptr_ctor(v10);
        __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v10);
        if ( v11 )
        {
          v12 = *v6;
          v13 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemContextMenuArgsPublicNonVirtuals::SwitchItem::get(v11);
          *(_QWORD *)&v19 = v13;
          SnapAssistState::UpdateViewModel(v12, v13, v21);
          __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v13);
        }
        __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v11);
      }
      else if ( (unsigned int)(v20 - 2) <= 1 )
      {
        v9 = *(_QWORD *)(v5 + 96);
        if ( v9 )
          GuidedSnapAssistViewController::DismissViewAnimated(v9 - 8, 1);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v21);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x21C,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
