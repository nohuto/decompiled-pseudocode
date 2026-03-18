/*
 * XREFs of ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007D170
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x14001D588 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotPowerPolOwnerStopping(FxPkgPnp *This)
{
  FxPkgPnp::PowerProcessEvent(This, 0x80u, 0);
  return 1401LL;
}
