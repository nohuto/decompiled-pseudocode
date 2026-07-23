/*
 * XREFs of PiProcessNewDeviceNodeAsync @ 0x14082CDEC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14048B208 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140835154 (PnpDeviceCompletionRequestCreate.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( !Pool2 )
    return (unsigned int)PiProcessNewDeviceNode(BugCheckParameter2);
  v9 = (_QWORD *)PnpDeviceCompletionRequestCreate(BugCheckParameter2, 772LL, Pool2);
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
