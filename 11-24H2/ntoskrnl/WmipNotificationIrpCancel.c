/*
 * XREFs of WmipNotificationIrpCancel @ 0x1403CB730
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140357E10 (KxAcquireQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x1403CBB0C (WmipClearIrpObjectList.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  __int64 v3; // rdx
  volatile signed __int64 *v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[2] = 0LL;
  v4[0] = 0LL;
  v4[1] = (volatile signed __int64 *)&WmipCancelSpinLock;
  KxAcquireQueuedSpinLock((__int64)v4, (volatile __int64 *)&WmipCancelSpinLock);
  WmipClearIrpObjectList(a2);
  KxReleaseQueuedSpinLock(v4, v3);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
