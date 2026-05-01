/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run @ 0x180406890
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z @ 0x1800A4148 (-UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@QEAA_NXZ @ 0x1801DBAC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run(
        __int64 a1)
{
  GamingOverlayExperienceManager *v1; // rbx

  v1 = *(GamingOverlayExperienceManager **)(a1 + 16);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::GetImpl'::`2'::impl) )
    GamingOverlayExperienceManager::UpdateNexusEnabledWnf(v1, 0);
  GamingOverlayExperienceManager::UpdateGamepadIntervalValues(v1);
}
