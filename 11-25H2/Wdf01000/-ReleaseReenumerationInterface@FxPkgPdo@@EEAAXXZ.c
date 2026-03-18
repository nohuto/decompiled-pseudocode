/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x140076E40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x140076E58 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPdo::ReleaseReenumerationInterface(FxPkgPdo *this)
{
  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
}
