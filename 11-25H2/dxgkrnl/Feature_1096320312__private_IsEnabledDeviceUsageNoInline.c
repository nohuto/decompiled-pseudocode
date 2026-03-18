/*
 * XREFs of Feature_1096320312__private_IsEnabledDeviceUsageNoInline @ 0x140078A88
 * Callers:
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427170 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_1096320312__private_IsEnabledFallback @ 0x140078AC0 (Feature_1096320312__private_IsEnabledFallback.c)
 */

__int64 Feature_1096320312__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1096320312__private_featureState & 0x10) != 0 )
    return Feature_1096320312__private_featureState & 1;
  else
    return Feature_1096320312__private_IsEnabledFallback((unsigned int)Feature_1096320312__private_featureState, 3LL);
}
