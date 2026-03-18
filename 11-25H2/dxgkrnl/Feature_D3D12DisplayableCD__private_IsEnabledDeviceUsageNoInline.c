/*
 * XREFs of Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline @ 0x14006BB34
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040FD98 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     Feature_D3D12DisplayableCD__private_IsEnabledFallback @ 0x14006BB6C (Feature_D3D12DisplayableCD__private_IsEnabledFallback.c)
 */

__int64 Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_D3D12DisplayableCD__private_featureState & 0x10) != 0 )
    return Feature_D3D12DisplayableCD__private_featureState & 1;
  else
    return Feature_D3D12DisplayableCD__private_IsEnabledFallback(
             (unsigned int)Feature_D3D12DisplayableCD__private_featureState,
             3LL);
}
