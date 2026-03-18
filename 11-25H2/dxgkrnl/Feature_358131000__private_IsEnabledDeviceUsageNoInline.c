/*
 * XREFs of Feature_358131000__private_IsEnabledDeviceUsageNoInline @ 0x14007BAA0
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_358131000__private_IsEnabledFallback @ 0x14007BAD8 (Feature_358131000__private_IsEnabledFallback.c)
 */

__int64 Feature_358131000__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_358131000__private_featureState & 0x10) != 0 )
    return Feature_358131000__private_featureState & 1;
  else
    return Feature_358131000__private_IsEnabledFallback((unsigned int)Feature_358131000__private_featureState, 3LL);
}
