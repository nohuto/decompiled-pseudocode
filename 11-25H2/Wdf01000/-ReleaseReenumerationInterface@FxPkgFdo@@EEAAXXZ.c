/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x140076E00
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x140076E58 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgFdo::ReleaseReenumerationInterface(FxPkgFdo *this)
{
  void (__fastcall *InterfaceDereference)(void *); // rax

  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
  InterfaceDereference = this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceDereference;
  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
}
