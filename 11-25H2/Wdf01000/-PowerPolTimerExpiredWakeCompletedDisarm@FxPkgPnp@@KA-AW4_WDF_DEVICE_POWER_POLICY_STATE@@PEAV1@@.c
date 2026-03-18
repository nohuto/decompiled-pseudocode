/*
 * XREFs of ?PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x14003BCC0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPowerDeviceDisarmWakeFromS0 *p_m_DeviceDisarmWakeFromS0; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v5; // rdx

  if ( FxDevice::IsPdo(This->m_Device) )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceDisarmWakeFromS0 = &This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0.m_Device = v5;
  FxPrePostCallback::InvokeStateless(p_m_DeviceDisarmWakeFromS0);
  return 1337LL;
}
