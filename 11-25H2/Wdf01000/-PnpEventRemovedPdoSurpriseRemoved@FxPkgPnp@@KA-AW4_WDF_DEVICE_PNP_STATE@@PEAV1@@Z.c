/*
 * XREFs of ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3760
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x140073638 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovedPdoSurpriseRemoved(FxPkgPnp *This)
{
  FxPnpDeviceSurpriseRemoval *p_m_DeviceSurpriseRemoval; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // dl

  p_m_DeviceSurpriseRemoval = &This->m_DeviceSurpriseRemoval;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceSurpriseRemoval->m_Device = (WDFDEVICE__ *)v5;
  FxPrePostCallback::InvokeStateless(p_m_DeviceSurpriseRemoval);
  This->PnpEventSurpriseRemovePendingOverload(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v6);
  return 277LL;
}
