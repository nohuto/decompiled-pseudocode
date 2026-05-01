/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@QEAA_NXZ @ 0x180364ED4
 * Callers:
 *     _lambda_c680e10b8be88f9d1d2ee302a6ab3748_::operator() @ 0x180361E18 (_lambda_c680e10b8be88f9d1d2ee302a6ab3748_--operator().c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180362718 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180363F18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57648583>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57648583>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57648583>::ReportUsage((int *)a1, v4 & 1);
  return v2;
}
