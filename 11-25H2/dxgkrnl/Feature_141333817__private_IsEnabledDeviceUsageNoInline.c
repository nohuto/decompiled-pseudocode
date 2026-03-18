/*
 * XREFs of Feature_141333817__private_IsEnabledDeviceUsageNoInline @ 0x14007BA4C
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218A40 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_141333817__private_IsEnabledFallback @ 0x14007BA84 (Feature_141333817__private_IsEnabledFallback.c)
 */

__int64 Feature_141333817__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_141333817__private_featureState & 0x10) != 0 )
    return Feature_141333817__private_featureState & 1;
  else
    return Feature_141333817__private_IsEnabledFallback((unsigned int)Feature_141333817__private_featureState, 3LL);
}
