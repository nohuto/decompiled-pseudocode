/*
 * XREFs of Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledDeviceUsageNoInline @ 0x1405B2304
 * Callers:
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledFallback @ 0x1405B233C (Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledFallback.c)
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
