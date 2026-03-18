/*
 * XREFs of Feature_490959160__private_IsEnabledDeviceUsageNoInline @ 0x14007BFA0
 * Callers:
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223950 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_490959160__private_IsEnabledFallback @ 0x14007BFD8 (Feature_490959160__private_IsEnabledFallback.c)
 */

__int64 Feature_490959160__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_490959160__private_featureState & 0x10) != 0 )
    return Feature_490959160__private_featureState & 1;
  else
    return Feature_490959160__private_IsEnabledFallback((unsigned int)Feature_490959160__private_featureState, 3LL);
}
