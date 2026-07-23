/*
 * XREFs of PiProcessNewDeviceNodeAsync @ 0x140A767EC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140485928 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1408B8B8C (PnpDeviceCompletionRequestCreate.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNodeAsync(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned int v3; // esi
  bool v4; // bp
  __int64 i; // rdx
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx

  v3 = 259;
  if ( InitSafeBootMode )
    return (unsigned int)PiProcessNewDeviceNode(BugCheckParameter2);
  v4 = a2 == 0;
  if ( (PnpAsyncOptions & 4) == 0 || a2 )
    return (unsigned int)PiProcessNewDeviceNode(BugCheckParameter2);
  for ( i = *(_QWORD *)(BugCheckParameter2 + 32); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 8) + 16LL) & 0x1000) == 0 )
      return (unsigned int)PiProcessNewDeviceNode(BugCheckParameter2);
  }
  Pool2 = ExAllocatePool2(0x40uLL, 0x20uLL, 0x31706E50u);
  v8 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( !Pool2 )
    return (unsigned int)PiProcessNewDeviceNode(BugCheckParameter2);
  v9 = (_QWORD *)PnpDeviceCompletionRequestCreate(BugCheckParameter2, 772, Pool2);
  if ( v9 )
  {
    v8->List.Flink = 0LL;
    v8->WorkerRoutine = (void (__fastcall *)(void *))PiProcessNewDeviceNodeWorker;
    v8->Parameter = v9;
    PipSetDevNodeState(BugCheckParameter2, 770);
    *(_DWORD *)(BugCheckParameter2 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v10, v9);
    ExQueueWorkItem(v8, DelayedWorkQueue);
  }
  else
  {
    v4 = 0;
    ExFreePoolWithTag(v8, 0);
  }
  if ( !v4 )
    return (unsigned int)PiProcessNewDeviceNode(BugCheckParameter2);
  return v3;
}
