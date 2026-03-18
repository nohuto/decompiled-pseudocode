/*
 * XREFs of PsSetVmProcessorHostProcess @ 0x140766CCC
 * Callers:
 *     VmSetVpHostProcess @ 0x14078FB20 (VmSetVpHostProcess.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x140489530 (PspSynchronizeThreadIsolationDomains.c)
 */

NTSTATUS __fastcall PsSetVmProcessorHostProcess(_QWORD *a1)
{
  volatile signed __int32 *v1; // rsi
  NTSTATUS result; // eax
  NTSTATUS v4; // r8d
  signed __int64 v5; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-28h] BYREF
  NTSTATUS v9; // [rsp+80h] [rbp+10h] BYREF

  v1 = (volatile signed __int32 *)a1 + 383;
  memset(&Event, 0, sizeof(Event));
  memset(&WorkItem, 0, sizeof(WorkItem));
  _m_prefetchw((char *)a1 + 1532);
  result = *((_DWORD *)a1 + 383);
  while ( 1 )
  {
    v9 = result;
    v4 = result;
    if ( (result & 0x800000) != 0 )
      break;
    result = _InterlockedCompareExchange(v1, result | 0x1800000, result);
    if ( result == v4 )
    {
      if ( !a1[236] )
      {
        _InterlockedOr(v1, 0x200000u);
        v5 = _InterlockedIncrement64(&PsNextSecurityDomain);
        a1[236] = v5;
        a1[237] = v5;
        PspSynchronizeThreadIsolationDomains((__int64)a1);
      }
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspSetVmProcessorHostProcessWorkerRoutine;
      WorkItem.Parameter = &Event;
      ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
      result = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      _InterlockedAnd(v1, 0xFEFFFFFF);
      _InterlockedOr(v6, 0);
      if ( PsVmProcessorHostTransitionEvent )
        return ExfUnblockPushLock((__int64)&PsVmProcessorHostTransitionEvent, 0LL);
      return result;
    }
  }
  if ( (result & 0x1000000) != 0 )
  {
    do
    {
      ExBlockOnAddressPushLock(&PsVmProcessorHostTransitionEvent, v1, &v9, 4LL, 0LL);
      v9 = *((_DWORD *)a1 + 383);
      result = v9;
    }
    while ( (v9 & 0x1000000) != 0 );
  }
  return result;
}
