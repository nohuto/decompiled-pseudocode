/*
 * XREFs of ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x14006EED4
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006E8A0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006EBA0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x14006ED64 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDeviceInterface::SetState(FxDeviceInterface *this, unsigned __int8 State)
{
  bool v2; // zf

  v2 = this->m_SymbolicLinkName.Buffer == 0LL;
  this->m_State = State;
  if ( !v2 )
    IoSetDeviceInterfaceState(&this->m_SymbolicLinkName, State);
}
