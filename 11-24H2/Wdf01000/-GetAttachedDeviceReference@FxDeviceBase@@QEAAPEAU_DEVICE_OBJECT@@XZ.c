/*
 * XREFs of ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140061CE0
 * Callers:
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x140060E14 (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x140061000 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x140061B08 (-CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x140061B94 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __fastcall FxDeviceBase::GetAttachedDeviceReference(FxDeviceBase *this)
{
  return IoGetAttachedDeviceReference(this->m_DeviceObject.m_DeviceObject);
}
