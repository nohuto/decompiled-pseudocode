/*
 * XREFs of ?SetVisibility@GamingFallbackWindow@@QEAAX_N@Z @ 0x180506F5C
 * Callers:
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$SetFallbackWindowVisibility@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1804F777C (--$SetFallbackWindowVisibility@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SA.c)
 */

void __fastcall GamingFallbackWindow::SetVisibility(GamingFallbackWindow *this, char a2)
{
  HWND v2; // rcx
  int v3; // edx

  v2 = (HWND)*((_QWORD *)this + 3);
  if ( a2 )
    v3 = 4;
  else
    v3 = 0;
  ShowWindow(v2, v3);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    GamingPosturePositionerTelemetryProvider::SetFallbackWindowVisibility<HWND__ * &,bool &>();
}
