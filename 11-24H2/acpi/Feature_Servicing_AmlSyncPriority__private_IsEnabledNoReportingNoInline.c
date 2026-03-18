/*
 * XREFs of Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline @ 0x140062AD4
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback @ 0x140062AB8 (Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_AmlSyncPriority__private_featureState & 2) != 0 )
    return Feature_Servicing_AmlSyncPriority__private_featureState & 1;
  else
    return Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AmlSyncPriority__private_featureState,
             0LL);
}
