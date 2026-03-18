/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140031F40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140031F70 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDown(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCanIdlePowerDown(This, This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState) != 0
       ? 1472
       : 1338;
}
