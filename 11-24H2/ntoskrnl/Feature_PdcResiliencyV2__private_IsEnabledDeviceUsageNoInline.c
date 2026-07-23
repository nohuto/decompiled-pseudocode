/*
 * XREFs of Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline @ 0x1405D57C8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 *     PopNetResiliencyStateChanged @ 0x140AC71C0 (PopNetResiliencyStateChanged.c)
 * Callees:
 *     Feature_PdcResiliencyV2__private_IsEnabledFallback @ 0x1405D5800 (Feature_PdcResiliencyV2__private_IsEnabledFallback.c)
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
