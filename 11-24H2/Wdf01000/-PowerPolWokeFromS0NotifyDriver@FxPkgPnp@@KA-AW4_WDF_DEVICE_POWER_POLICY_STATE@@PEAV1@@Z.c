/*
 * XREFs of ?PowerPolWokeFromS0NotifyDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140072420
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140033204 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWokeFromS0NotifyDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v4; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v4 = 0LL;
  m_Owner->m_DeviceWakeFromS0Triggered.m_Device = (WDFDEVICE__ *)v4;
  FxPrePostCallback::InvokeStateless(&m_Owner->m_DeviceWakeFromS0Triggered);
  return 1346LL;
}
