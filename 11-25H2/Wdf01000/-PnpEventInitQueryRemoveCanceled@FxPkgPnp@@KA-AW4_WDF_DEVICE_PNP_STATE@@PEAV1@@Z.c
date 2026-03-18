/*
 * XREFs of ?PnpEventInitQueryRemoveCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A30E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitQueryRemoveCanceled(FxPkgPnp *This)
{
  _IRP *m_PendingPnPIrp; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingPnPIrp = This->m_PendingPnPIrp;
  This->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  This->FireAndForgetIrp(This, &irp);
  return 261LL;
}
