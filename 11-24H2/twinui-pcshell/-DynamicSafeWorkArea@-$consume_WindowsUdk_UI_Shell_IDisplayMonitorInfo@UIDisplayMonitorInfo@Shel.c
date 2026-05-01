/*
 * XREFs of ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240638
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801E6388 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285FD0 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18036DF90 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1803F1150 (-GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 *     ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1804AC780 (-GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorIn.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x1806B96C0 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
        __int64 *a1,
        _OWORD *a2)
{
  __int64 v2; // rcx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v2 = *a1;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  winrt::check_hresult(&v8, v4, &v6);
  return a2;
}
