/*
 * XREFs of ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18062216C
 * Callers:
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1806220C0 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80 (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$5 @ 0x180700BE6 (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$5.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$17 @ 0x180700D6C (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$17.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TargetAppExtensionDetails::~TargetAppExtensionDetails(void **this)
{
  std::wstring::_Tidy_deallocate(this + 33);
  std::wstring::_Tidy_deallocate(this + 28);
  std::wstring::_Tidy_deallocate(this + 23);
  std::wstring::_Tidy_deallocate(this + 18);
  std::wstring::_Tidy_deallocate(this + 13);
  std::wstring::_Tidy_deallocate(this + 8);
  std::wstring::_Tidy_deallocate(this + 4);
  std::wstring::_Tidy_deallocate(this);
}
