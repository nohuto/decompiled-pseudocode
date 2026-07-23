/*
 * XREFs of Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067998C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiComputeAgingPercent @ 0x1402F3B30 (MiComputeAgingPercent.c)
 * Callees:
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledFallback @ 0x1406799C4 (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Mm_WsTrimFixes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Mm_WsTrimFixes__private_featureState & 1;
  else
    return Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_WsTrimFixes__private_featureState,
             3LL);
}
