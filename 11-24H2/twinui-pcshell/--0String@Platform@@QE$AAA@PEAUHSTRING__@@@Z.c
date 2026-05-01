/*
 * XREFs of ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x1806A947C
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1806B31D4 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x180219AA8 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

HSTRING __fastcall Platform::String::String(__int64 a1, Platform::Details *a2, HSTRING *a3)
{
  HSTRING v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  Platform::Details::DuplicateString(a2, &v4, a3);
  return v4;
}
