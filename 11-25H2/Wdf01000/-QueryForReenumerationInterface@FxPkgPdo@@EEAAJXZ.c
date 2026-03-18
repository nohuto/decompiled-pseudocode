/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x140079D70
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x140079D88 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForReenumerationInterface(FxPkgPdo *this)
{
  return FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
}
