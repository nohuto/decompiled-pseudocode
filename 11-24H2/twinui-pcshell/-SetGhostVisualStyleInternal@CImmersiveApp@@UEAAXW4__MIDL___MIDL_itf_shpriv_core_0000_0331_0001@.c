/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@@Z @ 0x1803051B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180017B40 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2)
{
  char result; // al

  if ( a2 != *(_DWORD *)(a1 + 376) )
  {
    result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
               `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
               3u);
    if ( *(_DWORD *)(a1 + 380) )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 48LL))(
                 *(_QWORD *)(a1 + 320),
                 2 - (unsigned int)(a2 != 0));
    *(_DWORD *)(a1 + 376) = a2;
  }
  return result;
}
