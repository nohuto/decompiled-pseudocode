/*
 * XREFs of ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1805F542C
 * Callers:
 *     ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18021ADB0 (-OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A1E94 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEA.c)
 */

char __fastcall MeetAndChatHelpers::IsMaCDisabledForDevice(
        MeetAndChatHelpers *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 1;
}
