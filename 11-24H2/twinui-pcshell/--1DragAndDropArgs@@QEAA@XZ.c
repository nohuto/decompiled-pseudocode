/*
 * XREFs of ??1DragAndDropArgs@@QEAA@XZ @ 0x180228478
 * Callers:
 *     _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$2 @ 0x1806CB395 (_AppViewDataSourceAdapter--InitializeAppViewItems_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$3 @ 0x1806CB3A7 (_AppViewDataSourceAdapter--InitializeAppViewItems_--_1_--dtor$3.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$4 @ 0x1806CB43E (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$4.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$5 @ 0x1806CB450 (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$5.c)
 *     _CSnapAssistControllerBase::_CollectItemsForSnapAssist_::_1_::dtor$3 @ 0x1806CE259 (_CSnapAssistControllerBase--_CollectItemsForSnapAssist_--_1_--dtor$3.c)
 *     _CSnapAssistControllerBase::_CollectItemsForSnapAssist_::_1_::dtor$4 @ 0x1806CE26B (_CSnapAssistControllerBase--_CollectItemsForSnapAssist_--_1_--dtor$4.c)
 *     _VirtualPinnedAppsHandler::SetViewCollectionInternal_::_1_::dtor$3 @ 0x1806D181C (_VirtualPinnedAppsHandler--SetViewCollectionInternal_--_1_--dtor$3.c)
 *     _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$5 @ 0x1806D182E (_VirtualPinnedAppsHandler--UnpinAppID_--_1_--dtor$5.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$6 @ 0x1806D349F (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$6.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$7 @ 0x1806D34B1 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$7.c)
 *     _SizeConversionViewInfo::GetPositionerDataForView_::_1_::dtor$1 @ 0x1806D4B0C (_SizeConversionViewInfo--GetPositionerDataForView_--_1_--dtor$1.c)
 *     _HolographicPositioner::ControlLost_::_1_::dtor$1 @ 0x1806E8131 (_HolographicPositioner--ControlLost_--_1_--dtor$1.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$5 @ 0x1806F1E3A (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$5.c)
 *     _VirtualDesktopGestureWindow::GetFilterForDesktop_::_1_::dtor$3 @ 0x1806F1EB8 (_VirtualDesktopGestureWindow--GetFilterForDesktop_--_1_--dtor$3.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$5 @ 0x1806F1F00 (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$5.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$6 @ 0x1806F2E9B (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$6.c)
 *     _VirtualPinnedAppsHandler::SetViewCollectionInternal_::_1_::dtor$2 @ 0x1806F2F10 (_VirtualPinnedAppsHandler--SetViewCollectionInternal_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$6 @ 0x1806F8D51 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F8D51.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$7 @ 0x1806F8D63 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F8D63.c)
 * Callees:
 *     <none>
 */

void __fastcall DragAndDropArgs::~DragAndDropArgs(DragAndDropArgs *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
