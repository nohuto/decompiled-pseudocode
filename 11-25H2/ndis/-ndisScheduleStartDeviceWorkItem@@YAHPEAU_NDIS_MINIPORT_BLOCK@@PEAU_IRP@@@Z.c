/*
 * XREFs of ?ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400AF87C
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14004E200 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisScheduleStartDeviceWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 48LL, 538985550);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->List.Flink = 0LL;
  Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisStartDeviceWorkItem;
  Pool2->Parameter = Pool2;
  Pool2[1].List.Flink = a1;
  Pool2[1].List.Blink = a2;
  ExQueueWorkItem(Pool2, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  return 0LL;
}
