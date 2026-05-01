/*
 * XREFs of ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x1806BB790
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18011736C (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180218828 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ?FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806BB4DC (-FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@345.c)
 *     ?FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806BB550 (-FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456.c)
 *     ?Focus@?$consume_Windows_UI_Xaml_Controls_IControl@UIControl@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4FocusState@Xaml@UI@Windows@3@@Z @ 0x1806BB5C4 (-Focus@-$consume_Windows_UI_Xaml_Controls_IControl@UIControl@Controls@Xaml@UI@Windows@winrt@@@im.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewFrame::MoveFocus(TaskViewFrame *this, int a2)
{
  __int64 *v4; // rcx
  const char *v5; // r9
  struct IUnknown *v6; // rdx
  __int64 *LastFocusableElement; // rax
  __int64 *FirstFocusableElement; // rax
  __int64 v9; // rax
  __int64 result; // rax
  void (__fastcall ***v11)(_QWORD, void *, __int64 **); // [rsp+20h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v15)(_QWORD, void *, _QWORD *); // [rsp+50h] [rbp+18h] BYREF
  __int64 *v16; // [rsp+58h] [rbp+20h] BYREF

  v4 = (__int64 *)((char *)this + 72);
  try
  {
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate(v4);
    v6 = (struct IUnknown *)*((_QWORD *)this + 18);
    if ( v6 )
    {
      from_cx<winrt::Windows::UI::Xaml::UIElement>((winrt *)&v11, v6);
      v15 = 0LL;
      if ( a2 == 6 )
      {
        if ( v11 )
        {
          v16 = 0LL;
          (**v11)(v11, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IDependencyObject>, &v16);
          v14 = v16;
        }
        else
        {
          v14 = 0LL;
        }
        LastFocusableElement = (__int64 *)winrt::Windows::UI::Xaml::Input::FocusManager::FindLastFocusableElement(
                                            (const struct winrt::Windows::UI::Xaml::DependencyObject *)v12,
                                            (__int64)&v14);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v15, LastFocusableElement);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
      }
      else
      {
        if ( v11 )
        {
          v16 = 0LL;
          (**v11)(v11, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IDependencyObject>, &v16);
          v14 = v16;
        }
        else
        {
          v14 = 0LL;
        }
        FirstFocusableElement = (__int64 *)winrt::Windows::UI::Xaml::Input::FocusManager::FindFirstFocusableElement(
                                             (const struct winrt::Windows::UI::Xaml::DependencyObject *)v12,
                                             (__int64 *)&v14);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v15, FirstFocusableElement);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      if ( v15 )
      {
        v12[0] = 0LL;
        (**v15)(v15, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IControl>, v12);
        v9 = v12[0];
        v16 = (__int64 *)v12[0];
      }
      else
      {
        v16 = 0LL;
        v9 = 0LL;
      }
      if ( v9 )
      {
        LODWORD(v14) = 2;
        winrt::impl::consume_Windows_UI_Xaml_Controls_IControl<winrt::Windows::UI::Xaml::Controls::IControl>::Focus(
          &v16,
          (unsigned int *)&v14);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12C,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                           v5);
  }
  return result;
}
