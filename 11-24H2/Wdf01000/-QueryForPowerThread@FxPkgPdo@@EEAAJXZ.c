/*
 * XREFs of ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1400A2D60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1400A6250 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForPowerThread(FxPkgPdo *this)
{
  return FxPkgPnp::CreatePowerThread(this);
}
