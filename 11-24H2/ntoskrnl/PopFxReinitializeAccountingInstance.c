/*
 * XREFs of PopFxReinitializeAccountingInstance @ 0x1404A66AC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x1404A6344 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404A64E8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AB730 (PoFxStartDevicePowerManagement.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PopFxDisableBasicAccountingWorker @ 0x1405D1130 (PopFxDisableBasicAccountingWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PopFxReinitializeAccountingInstance(__int64 a1, int a2)
{
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  memset_0((void *)(a1 + 32), 0, 0x60uLL);
  memset_0((void *)(a1 + 128), 0, 0x60uLL);
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 == 2 && !_InterlockedExchange(&PopFxBasicAccountingDisabled, 1) )
  {
    PopFxBasicAccountingDisableWorkItem.Parameter = 0LL;
    PopFxBasicAccountingDisableWorkItem.List.Flink = 0LL;
    PopFxBasicAccountingDisableWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopFxDisableBasicAccountingWorker;
    ExQueueWorkItem(&PopFxBasicAccountingDisableWorkItem, DelayedWorkQueue);
  }
}
