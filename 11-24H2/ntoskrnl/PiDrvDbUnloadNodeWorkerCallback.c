/*
 * XREFs of PiDrvDbUnloadNodeWorkerCallback @ 0x140A92DE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     PiDrvDbUnloadNodeReset @ 0x1404D340C (PiDrvDbUnloadNodeReset.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 */

void __fastcall PiDrvDbUnloadNodeWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx

  PiDrvDbUnloadNodeReset(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 488) )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Start, (unsigned __int16 *)(a1 + 16));
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      ZwClose(v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_WORD *)(a1 + 488) = 0;
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Pend, (unsigned __int16 *)(a1 + 16));
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_QWORD *)(a1 + 456) = PiDrvDbUnloadNodeWaitWorkerCallback;
    *(_QWORD *)(a1 + 464) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 440), DelayedWorkQueue);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegion();
}
