/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@SA_NXZ @ 0x180053620
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056464 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterNotification@@@details@wil@@Q.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterNotification>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
