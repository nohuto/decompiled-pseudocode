/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___::Run @ 0x180359B00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023F420 (-UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x18035FEC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_18035FEC0.c)
 *     ?UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ @ 0x180369DC8 (-UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___::Run(
        __int64 a1)
{
  GamingOverlayExperienceManager *v1; // rbx
  NexusPolicyManager *v2; // rcx

  v1 = *(GamingOverlayExperienceManager **)(a1 + 16);
  GamingOverlayExperienceManager::UpdateGamepadIntervalValues(v1);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    if ( *((_QWORD *)v1 + 130) )
      NexusPolicyManager::UpdateNexusChordEnablement(v2);
  }
}
