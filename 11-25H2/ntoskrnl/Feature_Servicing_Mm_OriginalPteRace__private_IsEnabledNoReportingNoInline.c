/*
 * XREFs of Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline @ 0x14065BE6C
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140C33BDC (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledFallback @ 0x14065BE50 (Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Mm_OriginalPteRace__private_featureState & 2) != 0 )
    return Feature_Servicing_Mm_OriginalPteRace__private_featureState & 1;
  else
    return Feature_Servicing_Mm_OriginalPteRace__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_OriginalPteRace__private_featureState,
             0);
}
