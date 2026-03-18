/*
 * XREFs of Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1400645E0
 * Callers:
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400A1050 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400A1578 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepWnfCallback @ 0x1400A1920 (ACPIPepWnfCallback.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x140064618 (Feature_EE_MPTF_Functionality__private_IsEnabledFallback.c)
 */

__int64 Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EE_MPTF_Functionality__private_featureState & 0x10) != 0 )
    return Feature_EE_MPTF_Functionality__private_featureState & 1;
  else
    return Feature_EE_MPTF_Functionality__private_IsEnabledFallback(
             (unsigned int)Feature_EE_MPTF_Functionality__private_featureState,
             3LL);
}
