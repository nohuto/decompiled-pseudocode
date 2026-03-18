/*
 * XREFs of ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140004CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1400051A4 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140031F70 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWake(FxPkgPnp *This)
{
  int v2; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rdx

  v2 = FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( v2 >= 0 )
    return FxPkgPnp::PowerPolicyCanIdlePowerDown(This, m_Owner->m_IdleSettings.DxState) != 0 ? 1472 : 1416;
  _InterlockedCompareExchange(&m_Owner->m_PoxInterface.m_DirectedTransitionActive, 0, 0);
  return 1426LL;
}
