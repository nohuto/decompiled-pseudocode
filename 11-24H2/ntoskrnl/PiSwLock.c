/*
 * XREFs of PiSwLock @ 0x1408B9494
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1405A8D00 (PiSwIrpCancelStartCreate.c)
 *     PiSwIrpCleanup @ 0x1407308E0 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x140730AD4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140730B74 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140730C14 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x140730D50 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1408B1C78 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408B1E40 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B9044 (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PiSwFreePdoAssociationsList @ 0x1409F8118 (PiSwFreePdoAssociationsList.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwPdoPnPDispatch @ 0x1409FAA40 (PiSwPdoPnPDispatch.c)
 *     PiSwStopDestroy @ 0x140A102F4 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140A105F8 (PiSwProcessParentRemoveIrp.c)
 *     PiSwProcessParentStartIrp @ 0x140A11698 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
