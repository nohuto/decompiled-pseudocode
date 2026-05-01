/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x180249230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803FA640 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@QEA.c)
 */

signed int __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  HWND v6; // rsi
  wil::details *v7; // rcx

  v6 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::GetImpl'::`2'::impl,
    a2);
  if ( (unsigned int)SetWindowBand(v6, a3, a4) )
    return 0;
  else
    return wil::details::GetLastErrorFailHr(v7);
}
