/*
 * XREFs of IoCancelIrp @ 0x140418FA0
 * Callers:
 *     IopCancelIrpsInCurrentThreadList @ 0x140418AB4 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneTimerCallback @ 0x140418BF0 (PopThermalZoneTimerCallback.c)
 *     IopCancelIrpsInFileObjectList @ 0x140418C10 (IopCancelIrpsInFileObjectList.c)
 *     PopThermalUpdateTimerPolicy @ 0x14042847C (PopThermalUpdateTimerPolicy.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneDpc @ 0x1405D40A0 (PopThermalZoneDpc.c)
 *     IopCancelPendingEject @ 0x1407339A0 (IopCancelPendingEject.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x14075B010 (PopBatteryRemove.c)
 *     PopPowerAdapterRemove @ 0x14075BD60 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x14075CEF0 (PopFanRemove.c)
 *     IoCancelThreadIo @ 0x1408A867C (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x1409E2AE0 (NtCancelIoFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1409FD030 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409FD260 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     PopThermalReadCounters @ 0x1409FE178 (PopThermalReadCounters.c)
 *     FsRtlQueryInformationFile @ 0x140A2EF10 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140A9B694 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1404190D0 (FsRtlpOplockRHIrpCancelRoutine.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IovCancelIrp @ 0x140B826F0 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x140B8D508 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // rdi
  KIRQL v6; // si
  bool v7; // zf
  PDEVICE_OBJECT DeviceObject; // rcx

  if ( (VfRuleClasses & 0x10) != 0 && (VfRuleClasses & 0x400) != 0 )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v6 = v2;
  if ( v5 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v5, 0LL, 0LL);
    v7 = ViVerifierEnabled == 0;
    Irp->CancelIrql = v2;
    if ( v7 || !VfXdvEnabled )
    {
      DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
      if ( v5 == FsRtlpOplockRHIrpCancelRoutine )
        FsRtlpOplockRHIrpCancelRoutine(DeviceObject, Irp);
      else
        guard_dispatch_icall_no_overrides(DeviceObject, Irp, v3, v4);
    }
    else
    {
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v5);
    }
    if ( KeGetCurrentIrql() == 2 && v6 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v5, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
