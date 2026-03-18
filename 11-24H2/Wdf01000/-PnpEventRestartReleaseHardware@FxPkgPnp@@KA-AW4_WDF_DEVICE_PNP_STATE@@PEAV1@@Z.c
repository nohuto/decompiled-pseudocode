/*
 * XREFs of ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3960
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1400774DC (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084384 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRestartReleaseHardware(FxPkgPnp *This)
{
  int v2; // edi
  __int64 result; // rax

  v2 = FxPkgPnp::PnpReleaseHardware(This);
  if ( v2 >= 0 )
    return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 307 : 314;
  FxPkgPnp::SetInternalFailure(This);
  result = 299LL;
  This->m_PendingPnPIrp->IoStatus.Status = v2;
  return result;
}
