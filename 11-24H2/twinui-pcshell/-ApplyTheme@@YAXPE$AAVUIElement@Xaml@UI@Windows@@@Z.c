/*
 * XREFs of ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x1801171AC
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180118BB0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011CD10 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A0C10 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x180117264 (-Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?RequestedTheme@?$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ElementTheme@Xaml@UI@Windows@3@@Z @ 0x1801172C8 (-RequestedTheme@-$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@w.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18011736C (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ??$as@UFrameworkElement@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUFrameworkElement@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802CB044 (--$as@UFrameworkElement@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplyTheme(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  _QWORD *v4; // rax
  int v5; // [rsp+38h] [rbp+18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF
  __int64 v7; // [rsp+48h] [rbp+28h] BYREF

  if ( (unsigned int)winrt::WindowsUdk::UI::Themes::SystemVisualTheme::Current() == 1 )
  {
    v2 = (_QWORD *)from_cx<winrt::Windows::UI::Xaml::UIElement>(&v7, a1);
    winrt::impl::as<winrt::Windows::UI::Xaml::FrameworkElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v6,
      *v2);
    v5 = 1;
    result = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
               &v6,
               &v5);
    if ( v6 )
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  }
  else
  {
    v4 = (_QWORD *)from_cx<winrt::Windows::UI::Xaml::UIElement>(&v7, a1);
    winrt::impl::as<winrt::Windows::UI::Xaml::FrameworkElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v6,
      *v4);
    v5 = 2;
    result = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
               &v6,
               &v5);
    if ( v6 )
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  }
  if ( v7 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return result;
}
