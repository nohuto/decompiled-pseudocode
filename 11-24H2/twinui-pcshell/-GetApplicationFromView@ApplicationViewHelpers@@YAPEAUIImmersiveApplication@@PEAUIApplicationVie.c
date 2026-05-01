/*
 * XREFs of ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18006E894
 * Callers:
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x18011F0A0 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801FF144 (-_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x180323DD4 (-ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequ.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180324E04 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180325800 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804EC340 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059F860 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?GetNextItem@CAppLayoutItemEnum@@UEAAJW4APP_LAYOUT_ITEM_TYPE@@PEAUAPP_LAYOUT_ENUM_ITEM@@@Z @ 0x1806C4240 (-GetNextItem@CAppLayoutItemEnum@@UEAAJW4APP_LAYOUT_ITEM_TYPE@@PEAUAPP_LAYOUT_ENUM_ITEM@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180070730 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

struct IImmersiveApplication *__fastcall ApplicationViewHelpers::GetApplicationFromView(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2)
{
  struct IImmersiveApplication **v3; // r8
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  if ( ApplicationViewHelpers::GetApplicationFromView(this, (struct IApplicationView *)&v6, v3) < 0 )
    v4 = 0LL;
  else
    v4 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return (struct IImmersiveApplication *)v4;
}
