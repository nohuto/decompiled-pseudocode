/*
 * XREFs of ?IsBootToCloudPCSession@@YA_NXZ @ 0x18024B71C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x18035FE04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x18045D80C (-B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ.c)
 */

bool IsBootToCloudPCSession(void)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl)
    && B2CIsPhysicalDeviceAccessConfigured() )
  {
    return 0;
  }
  v1 = 0;
  PolicyManager_GetPolicyInt(L"CloudDesktop", L"BootToCloudMode", &v1);
  return v1 == 1;
}
