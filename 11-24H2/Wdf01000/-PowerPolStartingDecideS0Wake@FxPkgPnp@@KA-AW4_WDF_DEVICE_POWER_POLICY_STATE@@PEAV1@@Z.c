/*
 * XREFs of ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140031790
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x140031800 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1400318C4 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?UpdateIdleTimeoutHint@FxPoxInterface@@QEAAXXZ @ 0x140031AC4 (-UpdateIdleTimeoutHint@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingDecideS0Wake(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax

  This->m_PowerPolicyMachine.m_Owner->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
  FxPkgPnp::PowerPolicyChildrenCanPowerUp(This);
  FxPkgPnp::SaveState(This, 1u);
  FxPoxInterface::UpdateIdleTimeoutHint(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_IdleSettings.Enabled )
    return m_Owner->m_IdleSettings.WakeFromS0Capable != 0 ? 1329 : 1285;
  else
    return 1381LL;
}
