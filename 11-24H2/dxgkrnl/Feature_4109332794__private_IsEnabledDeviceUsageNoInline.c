/*
 * XREFs of Feature_4109332794__private_IsEnabledDeviceUsageNoInline @ 0x14007BF4C
 * Callers:
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402265B0 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_4109332794__private_IsEnabledFallback @ 0x14007BF84 (Feature_4109332794__private_IsEnabledFallback.c)
 */

__int64 Feature_4109332794__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4109332794__private_featureState & 0x10) != 0 )
    return Feature_4109332794__private_featureState & 1;
  else
    return Feature_4109332794__private_IsEnabledFallback((unsigned int)Feature_4109332794__private_featureState, 3LL);
}
