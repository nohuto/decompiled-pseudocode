/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A89D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableRevertArmWake(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxDeviceBase *v6; // rdx
  FxPowerDeviceDisarmWakeFromS0 *p_m_DeviceDisarmWakeFromS0; // rcx
  unsigned __int16 v8; // ax
  WDFDEVICE__ *v9; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_Globals = This->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 3u, 0xCu, 0x25u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  v6 = This->m_DeviceBase;
  p_m_DeviceDisarmWakeFromS0 = &This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0;
  v8 = v6->m_ObjectSize;
  v9 = (WDFDEVICE__ *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v8 )
    v9 = 0LL;
  This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0.m_Device = v9;
  FxPrePostCallback::InvokeStateless(p_m_DeviceDisarmWakeFromS0);
  return 1335LL;
}
