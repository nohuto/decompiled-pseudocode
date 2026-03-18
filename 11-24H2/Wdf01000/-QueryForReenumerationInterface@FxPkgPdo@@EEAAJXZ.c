/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x140079890
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1400798A8 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForReenumerationInterface(FxPkgPdo *this)
{
  return FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
}
