/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x140032388
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x140026ACC (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400320E0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1400322E0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003DE58 (ACPIWakeDisconnectWakeInterrupts.c)
 * Callees:
 *     ACPIWakeEmulationDisable @ 0x140032CC4 (ACPIWakeEmulationDisable.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x140033370 (ACPIFreeWaitWakePowerRequest.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(char *Entry)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*((_DWORD *)Entry + 28);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable(Entry);
    if ( KeGetCurrentIrql() > 1u )
    {
      *((_QWORD *)Entry + 15) = 0LL;
      *((_QWORD *)Entry + 17) = ACPIFreeWaitWakePowerRequest;
      *((_QWORD *)Entry + 18) = Entry;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(Entry + 120), DelayedWorkQueue);
    }
    else
    {
      ACPIFreeWaitWakePowerRequest(Entry);
    }
  }
}
