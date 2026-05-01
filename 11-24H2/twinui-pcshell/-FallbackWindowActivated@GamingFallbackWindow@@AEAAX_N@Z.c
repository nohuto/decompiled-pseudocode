/*
 * XREFs of ?FallbackWindowActivated@GamingFallbackWindow@@AEAAX_N@Z @ 0x1804FC6C8
 * Callers:
 *     ?FallbackWndProc@GamingFallbackWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1804FC790 (-FallbackWndProc@GamingFallbackWindow@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$OnFallbackWindowActivated@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1804F63A0 (--$OnFallbackWindowActivated@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXA.c)
 */

void __fastcall GamingFallbackWindow::FallbackWindowActivated(GamingPosturePositioner **this, bool a2)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    GamingPosturePositionerTelemetryProvider::OnFallbackWindowActivated<HWND__ * &,bool &>();
  GamingPosturePositioner::FallbackWindowActivated(this[4], a2);
}
