/*
 * XREFs of Feature_675062072__private_IsEnabledDeviceUsageNoInline @ 0x14007BAF4
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_675062072__private_IsEnabledFallback @ 0x14007BB2C (Feature_675062072__private_IsEnabledFallback.c)
 */

__int64 Feature_675062072__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_675062072__private_featureState & 0x10) != 0 )
    return Feature_675062072__private_featureState & 1;
  else
    return Feature_675062072__private_IsEnabledFallback((unsigned int)Feature_675062072__private_featureState, 3LL);
}
