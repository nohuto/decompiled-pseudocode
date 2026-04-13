/*
 * XREFs of ??1?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x180083D34
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$7 @ 0x1800BAC30 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$7.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions_::_1_::dtor$4 @ 0x1800BAC42 (_Windows--Services--TargetedContent--Internal--EnumerateTriggerStateTransitions_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$1 @ 0x1800BACFF (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$1.c)
 *     _CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative_::_1_::dtor$1 @ 0x1800BC0A2 (_CreativeFramework--DesktopSpotlightHelpers--DeleteDesktopSpotlightCreative_--_1_--dtor$1.c)
 *     _CreativeFramework::CommonHelper::StringUtils::SplitString_::_1_::dtor$0 @ 0x1800BCD37 (_CreativeFramework--CommonHelper--StringUtils--SplitString_--_1_--dtor$0.c)
 * Callees:
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x180088018 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 */

void __fastcall std::vector<std::wstring>::~vector<std::wstring>(_QWORD *a1)
{
  if ( *a1 )
  {
    std::vector<std::wstring>::_Destroy(a1, *a1, a1[1]);
    operator delete((void *)*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
