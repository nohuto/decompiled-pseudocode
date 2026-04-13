/*
 * XREFs of ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x18008AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063030 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetContentByIdAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 2147500033LL;
}
