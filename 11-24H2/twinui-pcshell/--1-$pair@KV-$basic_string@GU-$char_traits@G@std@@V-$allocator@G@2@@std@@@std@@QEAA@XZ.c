/*
 * XREFs of ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x180347D5C
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1803A8F58 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     _ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride_::_1_::dtor$2 @ 0x1806D8E18 (_ToastSettingsHelper--IsStackedPriorityToastsDisabledViaRegistryOverride_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor$2 @ 0x1806E2988 (_GamingOverlayExperienceManager--GetNonServiceProcessListAndIds_--_1_--dtor$2.c)
 *     _CopilotHotkeyManager::LaunchCustomUriAsync$_InitCoro$2_::_1_::dtor$1 @ 0x180700E78 (_CopilotHotkeyManager--LaunchCustomUriAsync$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>(__int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 8));
}
