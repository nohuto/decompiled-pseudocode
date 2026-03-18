/*
 * XREFs of ?PowerPolDeviceIdleReturnToActive@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140067D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolDeviceIdleReturnToActive(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( (m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    PoFxActivateComponent(m_Owner->m_PoxInterface.m_PoHandle, 0LL, 0LL);
  return 1382LL;
}
