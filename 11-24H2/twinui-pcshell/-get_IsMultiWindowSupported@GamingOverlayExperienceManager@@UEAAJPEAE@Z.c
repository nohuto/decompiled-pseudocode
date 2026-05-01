/*
 * XREFs of ?get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z @ 0x180360AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010D32C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::get_IsMultiWindowSupported(
        GamingOverlayExperienceManager *this,
        unsigned __int8 *a2)
{
  __int64 result; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
    1u);
  result = 0LL;
  *a2 = 1;
  return result;
}
