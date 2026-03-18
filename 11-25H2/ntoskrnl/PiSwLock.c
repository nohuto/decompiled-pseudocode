/*
 * XREFs of PiSwLock @ 0x1408363D0
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1405A54F0 (PiSwIrpCancelStartCreate.c)
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x1407249F4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140724A94 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140724B34 (PiSwIrpSetAttributes.c)
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14095DFA4 (PiSwIrpInterfaceSetState.c)
 *     PiSwStopDestroy @ 0x1409A13B8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409A1544 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 *     PiSwFreePdoAssociationsList @ 0x1409A3F9C (PiSwFreePdoAssociationsList.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 *     PiSwProcessParentStartIrp @ 0x140A7FC24 (PiSwProcessParentStartIrp.c)
 *     PiSwIrpSetLifetime @ 0x140AC0768 (PiSwIrpSetLifetime.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
