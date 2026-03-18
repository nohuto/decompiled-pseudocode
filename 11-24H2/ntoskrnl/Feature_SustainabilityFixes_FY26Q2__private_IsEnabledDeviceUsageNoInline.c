/*
 * XREFs of Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline @ 0x1405D890C
 * Callers:
 *     PopEsSnapTelemetry @ 0x14075D6C8 (PopEsSnapTelemetry.c)
 * Callees:
 *     Feature_SustainabilityFixes_FY26Q2__private_IsEnabledFallback @ 0x1405D8944 (Feature_SustainabilityFixes_FY26Q2__private_IsEnabledFallback.c)
 */

__int64 Feature_SustainabilityFixes_FY26Q2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SustainabilityFixes_FY26Q2__private_featureState & 0x10) != 0 )
    return Feature_SustainabilityFixes_FY26Q2__private_featureState & 1;
  else
    return Feature_SustainabilityFixes_FY26Q2__private_IsEnabledFallback(
             (unsigned int)Feature_SustainabilityFixes_FY26Q2__private_featureState,
             3LL);
}
