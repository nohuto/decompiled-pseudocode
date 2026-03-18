/*
 * XREFs of ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400323E0 (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxStopped(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PowerSendIdlePowerEvent(This, PowerIdleEventPowerDown);
  FxPkgPnp::PowerPolicyProcessEvent(
    This,
    (FxPowerPolicyEvent)(This->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown),
    v2);
  return 789LL;
}
