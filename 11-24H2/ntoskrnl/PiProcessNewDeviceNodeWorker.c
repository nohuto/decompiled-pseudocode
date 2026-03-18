/*
 * XREFs of PiProcessNewDeviceNodeWorker @ 0x140724020
 * Callers:
 *     <none>
 * Callees:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14043B148 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiProcessNewDeviceNodeWorker(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx

  v1 = *(void **)(a1 + 24);
  *(_DWORD *)(a1 + 40) = PiProcessNewDeviceNode(*(_QWORD *)(a1 + 16));
  PnpDeviceCompletionQueueDispatchedEntryCompleted(v3, (_QWORD *)a1);
  ExFreePoolWithTag(v1, 0);
}
