/*
 * XREFs of ?PowerSendPowerDownFailureEvent@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1400A53C4
 * Callers:
 *     ?PowerFinalPowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4F20 (-PowerFinalPowerDownFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerReportPowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5320 (-PowerReportPowerDownFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x14001B478 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x14001E738 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084394 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerDownFailureEvent(FxPkgPnp *this, FxPowerDownType Type)
{
  unsigned __int8 v4; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyEvent v6; // edx
  unsigned __int8 v7; // r8

  FxPkgPnp::SetInternalFailure(this);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( Type == FxPowerDownTypeImplicit )
      FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDownFailed, v4);
    else
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDownFailed);
  }
  else
  {
    v6 = PwrPolImplicitPowerDownFailed;
    if ( Type != FxPowerDownTypeImplicit )
      v6 = PwrPolPowerDownFailed;
    FxPkgPnp::PowerPolicyProcessEvent(this, v6, v4);
    if ( !this->m_ReleaseHardwareAfterDescendantsOnFailure )
      FxPkgPnp::PnpProcessEvent(this, PnpEventPowerDownFailed, v7);
  }
}
