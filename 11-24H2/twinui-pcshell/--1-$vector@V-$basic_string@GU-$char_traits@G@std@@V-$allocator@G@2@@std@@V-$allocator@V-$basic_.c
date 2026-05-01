/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1802D0D30
 * Callers:
 *     _VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry_::_1_::dtor$0 @ 0x1806DD5CB (_VirtualPinnedAppsHandler--LoadPinnedAppsFromRegistry_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$54 @ 0x1806E25BD (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$54.c)
 *     _GamingOverlayExperienceManager::GetSortedUniqueProcessList_::_1_::dtor$0 @ 0x1806E2A2E (_GamingOverlayExperienceManager--GetSortedUniqueProcessList_--_1_--dtor$0.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1806E5FAC (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$2 @ 0x1806E5FBE (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x1806E5FD0 (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x1806F35AE (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1806F38E5 (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$23 @ 0x180700DD6 (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$23.c)
 *     _CopilotHotkeyManager::SchemaNameAreRegisteredProtocol_::_1_::dtor$2 @ 0x18070121C (_CopilotHotkeyManager--SchemaNameAreRegisteredProtocol_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 a1)
{
  std::vector<std::wstring>::_Tidy(a1);
}
