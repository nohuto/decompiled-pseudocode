/*
 * XREFs of ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400412C0
 * Callers:
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x14003FE50 (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x14004003C (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x1400410E8 (-CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x140041174 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __fastcall FxDeviceBase::GetAttachedDeviceReference(FxDeviceBase *this)
{
  return IoGetAttachedDeviceReference(this->m_DeviceObject.m_DeviceObject);
}
