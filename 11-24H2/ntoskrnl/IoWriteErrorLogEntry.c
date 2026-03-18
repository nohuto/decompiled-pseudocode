/*
 * XREFs of IoWriteErrorLogEntry @ 0x1404AC3E0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x14059607C (IopDisassociateThreadIrp.c)
 *     DifIoWriteErrorLogEntryWrapper @ 0x14062B9E0 (DifIoWriteErrorLogEntryWrapper.c)
 *     MiBadMemoryLogger @ 0x140673560 (MiBadMemoryLogger.c)
 *     IopLogBlockedDriverEvent @ 0x1407128DC (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140723460 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A18B7C (MiLogFailedDriverLoad.c)
 *     FsRtlLogCcFlushError @ 0x140AB2090 (FsRtlLogCcFlushError.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  _QWORD *v5; // rbx
  bool v6; // zf
  void *v7; // rcx
  void *v8; // rcx

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v7 = (void *)*((_QWORD *)v1 + 3);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    v8 = (void *)*((_QWORD *)v1 + 4);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    _InterlockedAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (_QWORD *)qword_140F8C858;
    v4 = v2;
    v5 = v1 + 8;
    if ( *(__int64 **)qword_140F8C858 != &IopErrorLogListHead )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v5 = &IopErrorLogListHead;
    v5[1] = v3;
    *v3 = v5;
    qword_140F8C858 = (__int64)v5;
    if ( v6 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v4);
  }
}
