/*
 * XREFs of ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x180348084
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x180342FEC (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18035559C (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x180357030 (-OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z.c)
 *     _GamingOverlayExperienceManager::OnGameInputSystemButtonCallback_::_1_::dtor$9 @ 0x1806E3556 (_GamingOverlayExperienceManager--OnGameInputSystemButtonCallback_--_1_--dtor$9.c)
 *     _GamingOverlayExperienceManager::OnXInputSystemButtonsChanged_::_1_::dtor$7 @ 0x1806E36D9 (_GamingOverlayExperienceManager--OnXInputSystemButtonsChanged_--_1_--dtor$7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker(GamepadButtonCollectionTracker *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 7);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
