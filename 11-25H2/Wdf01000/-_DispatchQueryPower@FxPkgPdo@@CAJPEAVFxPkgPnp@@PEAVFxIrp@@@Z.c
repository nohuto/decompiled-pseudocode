/*
 * XREFs of ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003A960
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14003B68C (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x14003C0E4 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x14007D1BC (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

int __fastcall FxPkgPdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  int Power; // r8d
  __int64 v5; // r9

  Power = 0;
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options
    && FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
  {
    Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(This, *(_SYSTEM_POWER_STATE *)(v5 + 24));
  }
  return FxPkgPnp::CompletePowerRequest(This, Irp, Power);
}
