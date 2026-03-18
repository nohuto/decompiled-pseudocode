/*
 * XREFs of ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14003B720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x14003B81C (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x14003BDA4 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x14003C0E4 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400A7A6C (-FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleeping(FxPkgPnp *This)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned int m_SystemWake; // eax
  bool v5; // cc
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx

  if ( !This->m_SpecialFileCount[1] && This->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount )
  {
    m_DeviceBase = This->m_DeviceBase;
    m_Globals = This->m_Globals;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x1Fu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    FxVerifierBreakOnDeviceStateError(This->m_DeviceBase->m_Globals);
  }
  FxPoxInterface::SimulateDevicePowerNotRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1319LL;
  m_SystemWake = 6;
  if ( !This->m_WakeFromShutdownOptIn )
    m_SystemWake = This->m_SystemWake;
  v5 = v2 <= m_SystemWake;
  result = 1322LL;
  if ( !v5 )
    return 1319LL;
  return result;
}
