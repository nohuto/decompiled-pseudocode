/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAA?AW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_N@Z @ 0x1801C8FE8
 * Callers:
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C89B8 (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 * Callees:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_K@Z @ 0x1801C9030 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802C549C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::__private_GetVariant(
        __int64 a1)
{
  int v1; // edi
  int v2; // edx
  char v3; // bl
  int v4; // r8d
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetCachedVariantState(a1, &v6);
  LOBYTE(v2) = 1;
  v3 = (v6 >> 12) & 0x3F;
  LOBYTE(v4) = v3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::ReportVariantUsage(v1, v2, v4, 2);
  return v3;
}
