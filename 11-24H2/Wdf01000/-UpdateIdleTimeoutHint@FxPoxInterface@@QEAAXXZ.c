/*
 * XREFs of ?UpdateIdleTimeoutHint@FxPoxInterface@@QEAAXXZ @ 0x140031AC4
 * Callers:
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140031790 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoxInterface::UpdateIdleTimeoutHint(FxPoxInterface *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdx
  __int64 m_NextIdleTimeoutHint; // rax

  m_Owner = this->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( (m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0
    && !m_Owner->m_IdleSettings.m_TimeoutMgmt.m_UseWdfTimerForPofx )
  {
    m_NextIdleTimeoutHint = this->m_NextIdleTimeoutHint;
    if ( (_DWORD)m_NextIdleTimeoutHint != this->m_CurrentIdleTimeoutHint )
    {
      this->m_CurrentIdleTimeoutHint = m_NextIdleTimeoutHint;
      PoFxSetDeviceIdleTimeout(this->m_PoHandle, 10000 * m_NextIdleTimeoutHint);
    }
  }
}
