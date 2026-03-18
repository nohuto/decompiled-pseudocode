/*
 * XREFs of Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline @ 0x1405D82A0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 *     PopNetResiliencyStateChanged @ 0x140AC9288 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     Feature_PdcResiliencyV2__private_IsEnabledFallback @ 0x1405D82D8 (Feature_PdcResiliencyV2__private_IsEnabledFallback.c)
 */

__int64 Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PdcResiliencyV2__private_featureState & 0x10) != 0 )
    return Feature_PdcResiliencyV2__private_featureState & 1;
  else
    return Feature_PdcResiliencyV2__private_IsEnabledFallback(
             (unsigned int)Feature_PdcResiliencyV2__private_featureState,
             3LL);
}
