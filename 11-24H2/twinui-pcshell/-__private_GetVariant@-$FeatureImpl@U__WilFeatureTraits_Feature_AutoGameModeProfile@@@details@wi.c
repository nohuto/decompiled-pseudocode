/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAA?AW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_N@Z @ 0x180319E98
 * Callers:
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C89B8 (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180316DAC (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@w.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_K@Z @ 0x180318E18 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::__private_GetVariant(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetCachedVariantState(a1, (__int64)&v5);
  v2 = (v5 >> 12) & 0x3F;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::ReportVariantUsage(
    (int *)a1,
    1u,
    v2,
    2,
    v4);
  return v2;
}
