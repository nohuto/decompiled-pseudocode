/*
 * XREFs of ?SnapAssistCancelled@CSnapAssistControllerBase@@UEAAJXZ @ 0x1805A6A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 */

__int64 __fastcall CSnapAssistControllerBase::SnapAssistCancelled(
        CSnapAssistControllerBase *this,
        __int64 a2,
        char a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 0LL;
}
