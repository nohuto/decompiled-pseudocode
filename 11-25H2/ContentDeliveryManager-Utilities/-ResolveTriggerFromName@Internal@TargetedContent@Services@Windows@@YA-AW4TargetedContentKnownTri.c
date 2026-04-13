/*
 * XREFs of ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x180081AC0
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180084470 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180085D24 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(const WCHAR *a1)
{
  LPCWCH *i; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (LPCWCH *)&unk_1800D2A80; ; i += 2 )
  {
    if ( i == (LPCWCH *)&off_1800D2B30 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
    if ( CompareStringOrdinal(i[1], -1, a1, -1, 1) == 2 )
      break;
  }
  return *(unsigned int *)i;
}
