/*
 * XREFs of ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BE8CC
 * Callers:
 *     ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x1804BEDE0 (-IsDraggable@CPPIAllUpViewController@@UEAA-AW4DragEffects@@PEAUISwitchItem@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180518614 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18051A4FC (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x18051AC90 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18051ADD4 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x18051B0A0 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18051B490 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18051D720 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180520704 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180521BB0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BE81C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BE850 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804BE964 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067F4F4 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  char v3; // bl
  struct IApplicationView *v4; // rdx
  TabletModePositionerHelpers *WindowForView; // rax
  HWND v6; // rdx
  struct IApplicationView *v7; // rdx
  __int64 (__fastcall **v8)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( TabletModePositionerHelpers::IsControlledView((TabletModePositionerHelpers *)this, a2) )
  {
    WindowForView = (TabletModePositionerHelpers *)ApplicationViewHelpers::GetWindowForView(this, v4);
    if ( TabletModePositionerHelpers::IsOperableWindow(WindowForView, v6)
      || (v10 = 0,
          (int)GetViewLayoutBehaviorFlags((struct IApplicationView *)this, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v10) >= 0)
      && (v10 & 2) != 0 )
    {
      if ( !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)this, v7) )
      {
        v8 = *this;
        v10 = 0;
        if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))v8[27])(
               this,
               &v10) >= 0 )
          return v10 != 0;
      }
    }
  }
  return v3;
}
