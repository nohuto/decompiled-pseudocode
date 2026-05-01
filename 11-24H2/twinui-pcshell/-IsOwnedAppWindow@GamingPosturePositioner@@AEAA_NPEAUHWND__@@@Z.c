/*
 * XREFs of ?IsOwnedAppWindow@GamingPosturePositioner@@AEAA_NPEAUHWND__@@@Z @ 0x18050215C
 * Callers:
 *     ?GetSecondaryView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180500560 (-GetSecondaryView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAA_NXZ @ 0x18050874C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60170937@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall GamingPosturePositioner::IsOwnedAppWindow(GamingPosturePositioner *this, HWND a2)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_60170937>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60170937>::GetImpl'::`2'::impl);
  return (GetWindowLongPtrW(a2, -20) & 0x40000) != 0 && GetWindow(a2, 4u) != 0LL;
}
