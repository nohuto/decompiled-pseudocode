/*
 * XREFs of ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x140032304
 * Callers:
 *     ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A53B0 (-PowerPowerFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400323E0 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x140032D98 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerDownEvents(FxPkgPnp *this, FxPowerDownType Type, unsigned __int8 a3)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyEvent v5; // edx

  if ( Type == FxPowerDownTypeImplicit )
  {
    FxPkgPnp::PowerSendIdlePowerEvent(this, PowerIdleEventPowerDown);
    v5 = this->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown;
  }
  else
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    if ( m_Owner )
    {
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      return;
    }
    v5 = PwrPolPowerDown;
  }
  FxPkgPnp::PowerPolicyProcessEvent(this, v5, a3);
}
