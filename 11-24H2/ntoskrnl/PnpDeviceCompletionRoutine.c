/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x1402F0310
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1402F03C8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1402F0434 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     IoFindDeviceThatFailedIrp @ 0x1402F074C (IoFindDeviceThatFailedIrp.c)
 *     PnpTraceStartDevice @ 0x1402F07F0 (PnpTraceStartDevice.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 DeviceThatFailedIrp; // rax

  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( a2->PendingReturned )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = a2->IoStatus.Information;
  *(_DWORD *)(a3 + 40) = a2->IoStatus.Status;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2, a2, a3, a4);
    if ( DeviceThatFailedIrp )
      v4 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 783 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop);
  else
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v4);
  PnpDeviceCompletionRequestDestroy((PVOID)a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}
