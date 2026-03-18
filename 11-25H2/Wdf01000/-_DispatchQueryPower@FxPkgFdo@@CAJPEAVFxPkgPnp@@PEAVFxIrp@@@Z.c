/*
 * XREFs of ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003B390
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x14003B3C4 (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003B5D0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::_DispatchQueryPower(FxPkgFdo *This, FxIrp *Irp)
{
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgFdo::DispatchSystemQueryPower(This, Irp);
  Irp->m_Irp->IoStatus.Status = 0;
  return FxPkgFdo::_PowerPassDown(This, Irp);
}
