/*
 * XREFs of ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x14003B3C4
 * Callers:
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003B390 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003B5D0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14003B68C (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x14003C0E4 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x14007D1BC (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

int __fastcall FxPkgFdo::DispatchSystemQueryPower(FxPkgFdo *this, FxIrp *Irp)
{
  int Power; // eax

  if ( FxPkgPnp::PowerPolicyIsWakeEnabled(this)
    && (Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(
                  this,
                  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.SystemState),
        Irp->m_Irp->IoStatus.Status = Power,
        Power < 0) )
  {
    return FxPkgPnp::CompletePowerRequest(this, Irp, Power);
  }
  else
  {
    return FxPkgFdo::_PowerPassDown(this, Irp);
  }
}
