/*
 * XREFs of Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline @ 0x14005669C
 * Callers:
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140008324 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 * Callees:
 *     Feature_TBTNVMe_RTD3__private_IsEnabledFallback @ 0x1400566D4 (Feature_TBTNVMe_RTD3__private_IsEnabledFallback.c)
 */

__int64 Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TBTNVMe_RTD3__private_featureState & 0x10) != 0 )
    return Feature_TBTNVMe_RTD3__private_featureState & 1;
  else
    return Feature_TBTNVMe_RTD3__private_IsEnabledFallback(
             (unsigned int)Feature_TBTNVMe_RTD3__private_featureState,
             3LL);
}
