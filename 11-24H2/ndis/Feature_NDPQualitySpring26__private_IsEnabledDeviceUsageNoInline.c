/*
 * XREFs of Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline @ 0x140092E5C
 * Callers:
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140037E50 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14009E2C8 (-ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     Feature_NDPQualitySpring26__private_IsEnabledFallback @ 0x140092E94 (Feature_NDPQualitySpring26__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPQualitySpring26__private_featureState & 0x10) != 0 )
    return Feature_NDPQualitySpring26__private_featureState & 1;
  else
    return Feature_NDPQualitySpring26__private_IsEnabledFallback(
             (unsigned int)Feature_NDPQualitySpring26__private_featureState,
             3LL);
}
