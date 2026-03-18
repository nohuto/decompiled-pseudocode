/*
 * XREFs of Feature_4067989817__private_IsEnabledDeviceUsageNoInline @ 0x1400685E0
 * Callers:
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140350100 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426890 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_4067989817__private_IsEnabledFallback @ 0x140068618 (Feature_4067989817__private_IsEnabledFallback.c)
 */

__int64 Feature_4067989817__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4067989817__private_featureState & 0x10) != 0 )
    return Feature_4067989817__private_featureState & 1;
  else
    return Feature_4067989817__private_IsEnabledFallback((unsigned int)Feature_4067989817__private_featureState, 3LL);
}
