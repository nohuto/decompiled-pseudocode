/*
 * XREFs of ?FireAndForgetIrp@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x140004760
 * Callers:
 *     <none>
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400049D0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140063F00 (-_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::FireAndForgetIrp(FxPkgFdo *this, FxIrp *Irp)
{
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  else
    return FxPkgFdo::_PnpPassDown(this, Irp);
}
