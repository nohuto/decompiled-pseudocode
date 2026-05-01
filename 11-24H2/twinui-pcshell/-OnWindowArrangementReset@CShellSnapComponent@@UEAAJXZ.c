/*
 * XREFs of ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x18059FEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800742D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18011FB08 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1801702E0 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ?OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ @ 0x18059FEF0 (-OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnWindowArrangementReset(
        SnapLayoutProvider **this,
        __int64 a2,
        char a3,
        __int64 a4)
{
  if ( this[55] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    CSnapComponentTelemetry::OnSnappingCancelled::Stop((CSnapComponentTelemetry::OnSnappingCancelled *)(this + 130));
    CSnapComponentTelemetry::OnWindowArrangementReset();
    SnapLayoutProvider::Reset(this[55]);
  }
  return 0LL;
}
