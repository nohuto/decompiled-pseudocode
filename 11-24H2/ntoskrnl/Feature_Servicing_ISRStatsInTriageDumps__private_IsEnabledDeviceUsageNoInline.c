/*
 * XREFs of Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledDeviceUsageNoInline @ 0x1405B5090
 * Callers:
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledFallback @ 0x1405B50C8 (Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ISRStatsInTriageDumps__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ISRStatsInTriageDumps__private_featureState & 1;
  else
    return Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ISRStatsInTriageDumps__private_featureState,
             3LL);
}
