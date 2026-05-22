/*
 * XREFs of ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x180179BAC
 * Callers:
 *     ?EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ @ 0x180174B04 (-EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x18017B210 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180099D40 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1801791D4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x180179AC4 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnableGlobally(ControllerProcessor *this)
{
  LONG SystemMetrics; // ebx
  LONG v3; // edi
  struct tagRECT v5; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v6; // [rsp+68h] [rbp+18h] BYREF

  ControllerProcessor::GetCursorPosition(this, &v6);
  SystemMetrics = GetSystemMetrics(78);
  v3 = GetSystemMetrics(79);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
  {
    v5.left = 0;
    v5.top = 0;
    v5.right = SystemMetrics;
    v5.bottom = v3;
    InputETW::ControllerNavigationManager::NavigationEnabled(&v5, v6);
  }
  v5.left = 0;
  v5.top = 0;
  v5.right = SystemMetrics;
  v5.bottom = v3;
  return ControllerProcessor::NavigationEnable(this, 225, &v5, v6, 0LL, 0, 0);
}
