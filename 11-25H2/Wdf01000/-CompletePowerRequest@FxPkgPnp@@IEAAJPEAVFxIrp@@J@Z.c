/*
 * XREFs of ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x14003B68C
 * Callers:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x14003A458 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x14003A520 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x14003A8B4 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14003A960 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x14003B3C4 (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14003B42C (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z @ 0x14003B530 (-PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z @ 0x14003B570 (-PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x14003C558 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x140079F90 (-FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A9ED0 (-_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::CompletePowerRequest(FxPkgPnp *this, FxIrp *Irp, unsigned int Status)
{
  _IRP *m_Irp; // rsi

  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  PoStartNextPowerIrp(Irp->m_Irp);
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return Status;
}
