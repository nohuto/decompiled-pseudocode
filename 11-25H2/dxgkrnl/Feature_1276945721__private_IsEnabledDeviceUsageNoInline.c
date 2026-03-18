/*
 * XREFs of Feature_1276945721__private_IsEnabledDeviceUsageNoInline @ 0x14006BAE0
 * Callers:
 *     ?CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14005DB10 (-CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DxgkAcquireHandleDataCB @ 0x140330870 (DxgkAcquireHandleDataCB.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x140411038 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     DxgGetHandleDataCB @ 0x140414440 (DxgGetHandleDataCB.c)
 * Callees:
 *     Feature_1276945721__private_IsEnabledFallback @ 0x14006BB18 (Feature_1276945721__private_IsEnabledFallback.c)
 */

__int64 Feature_1276945721__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1276945721__private_featureState & 0x10) != 0 )
    return Feature_1276945721__private_featureState & 1;
  else
    return Feature_1276945721__private_IsEnabledFallback((unsigned int)Feature_1276945721__private_featureState, 3LL);
}
