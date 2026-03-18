/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A9910
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A044C (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x1406A6490 (ZwWaitForSingleObject.c)
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
