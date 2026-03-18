/*
 * XREFs of ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A87C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400050C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140033204 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1400741B4 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWokeDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPowerDeviceWakeFromSxTriggered *p_m_DeviceWakeFromSxTriggered; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v5; // rdx

  if ( FxDevice::IsPdo(This->m_Device) )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceWakeFromSxTriggered = &This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromSxTriggered;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromSxTriggered.m_Device = v5;
  FxPrePostCallback::InvokeStateless(p_m_DeviceWakeFromSxTriggered);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 1317LL;
}
