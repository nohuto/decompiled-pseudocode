/*
 * XREFs of ?DxgkGetFeatureDescriptor@@YAPEBUDXGK_FEATURE_DESC@@W4_DXGK_FEATURE_ID@@@Z @ 0x14028130C
 * Callers:
 *     ?VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021E020 (-VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021E0C0 (-VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetFeatureDescriptor(unsigned int a1)
{
  if ( (a1 & 0xFFFFFFF) >= *((_DWORD *)&g_FeatureDescriptorTables + 4 * ((unsigned __int64)a1 >> 28) + 2) )
    return 0LL;
  else
    return *((_QWORD *)&g_FeatureDescriptorTables + 2 * ((unsigned __int64)a1 >> 28)) + 6LL * (a1 & 0xFFFFFFF);
}
