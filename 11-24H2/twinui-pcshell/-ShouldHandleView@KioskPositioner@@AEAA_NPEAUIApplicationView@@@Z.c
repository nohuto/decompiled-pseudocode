/*
 * XREFs of ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180215640
 * Callers:
 *     ?AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1804F1410 (-AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z.c)
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F1530 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804F1A30 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     ?HandleSwitchToView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F1E90 (-HandleSwitchToView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804F20F0 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F2810 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1804F32F0 (-ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIE.c)
 * Callees:
 *     ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F2240 (-IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall KioskPositioner::ShouldHandleView(KioskPositioner *this, struct IApplicationView *a2)
{
  char v2; // bl

  v2 = 0;
  if ( *((_BYTE *)this + 632) && (*((_BYTE *)this + 633) || KioskPositioner::IsPrimaryAppView(this, a2)) )
    return 1;
  return v2;
}
