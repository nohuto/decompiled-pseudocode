/*
 * XREFs of MouseClassCreateWaitWakeIrpWorker @ 0x1C00106B0
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassCreateWaitWakeIrp @ 0x1C0010710 (MouseClassCreateWaitWakeIrp.c)
 */

void __fastcall MouseClassCreateWaitWakeIrpWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  MouseClassCreateWaitWakeIrp(*((PVOID *)Context + 1));
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)Context + 1) + 32LL), Context, 0x20u);
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 2));
  ExFreePoolWithTag(Context, 0);
}
