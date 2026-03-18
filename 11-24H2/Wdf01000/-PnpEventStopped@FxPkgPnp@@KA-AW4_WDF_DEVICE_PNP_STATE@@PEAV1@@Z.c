/*
 * XREFs of ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3A40
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x14006DD0C (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x140072EF8 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1400774DC (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084384 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStopped(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // edi

  if ( (int)FxPkgPnp::PnpReleaseHardware(This) < 0 )
  {
    FxPkgPnp::SetInternalFailure(This);
    v3 = 299;
  }
  else
  {
    FxPkgPnp::NotifyResourceobjectsToReleaseResources(This);
    v3 = 314;
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return v3;
}
