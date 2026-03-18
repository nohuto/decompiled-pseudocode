/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A5F80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A172C (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x14069B1C0 (ZwWaitForSingleObject.c)
 */

void __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  NTSTATUS v2; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v4; // esi

  v2 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop, (unsigned __int16 *)(a1 + 16), v4);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, (unsigned __int16 *)(a1 + 16), v4);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegion();
}
