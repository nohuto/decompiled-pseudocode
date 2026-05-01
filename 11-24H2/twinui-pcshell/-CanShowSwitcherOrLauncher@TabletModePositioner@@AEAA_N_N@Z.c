/*
 * XREFs of ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x180518E80
 * Callers:
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x18051D294 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x18051D2D8 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801CF93C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x18051BC98 (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18051BDC8 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 */

char __fastcall TabletModePositioner::CanShowSwitcherOrLauncher(TabletModePositioner *this, char a2)
{
  __int64 v4; // rcx
  char v5; // bl

  v5 = 0;
  if ( TabletModePositioner::IsTabletMode(this)
    && !*(_QWORD *)(v4 + 288)
    && !GetSystemMetrics(0x2000)
    && (a2 || !(unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 31LL))
    && !TabletModePositioner::IsFullScreenViewVisible(this) )
  {
    return 1;
  }
  return v5;
}
