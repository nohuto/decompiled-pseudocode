/*
 * XREFs of IopDeviceEjectComplete @ 0x1405A94E0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

__int64 __fastcall IopDeviceEjectComplete(__int64 a1, IRP *a2, __int64 a3)
{
  __int32 v4; // ebx

  v4 = _InterlockedExchange((volatile __int32 *)(a3 + 80), 3);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = PnpProcessCompletedEject;
  *(_QWORD *)(a3 + 40) = a3;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 16), DelayedWorkQueue);
  if ( v4 != 1 )
    IoFreeIrp(a2);
  return 3221225494LL;
}
