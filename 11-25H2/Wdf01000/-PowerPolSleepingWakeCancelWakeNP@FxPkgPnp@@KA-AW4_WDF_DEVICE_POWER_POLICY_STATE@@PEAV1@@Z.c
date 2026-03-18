/*
 * XREFs of ?PowerPolSleepingWakeCancelWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7E40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x14003A520 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeCancelWakeNP(FxPkgPnp *This)
{
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 1320 : 1472;
}
