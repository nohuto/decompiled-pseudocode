/*
 * XREFs of ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180085AA8
 * Callers:
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x1800846F8 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180085CBC (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180086154 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180081C38 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetStateRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180085AD4 (-GetStateRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$sha.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
        __int64 a1,
        int a2)
{
  wchar_t *v3; // rax

  v3 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(a2);
  Windows::Services::TargetedContent::Internal::GetStateRootRegistrationSettingsContainer(a1, v3);
  return a1;
}
