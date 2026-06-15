/*
 * XREFs of wil::details::lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___::_lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___ @ 0x1800DAEA0
 * Callers:
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$3 @ 0x18016E7AC (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParame_ea_18016E7AC.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800D9720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800DF1FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___::_lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl) )
      CBtAudioResourceManagerBase::NotifyStreamChange(*(CBtAudioResourceManagerBase **)a1, 0);
  }
}
