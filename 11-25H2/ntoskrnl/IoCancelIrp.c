/*
 * XREFs of IoCancelIrp @ 0x14041B240
 * Callers:
 *     IopCancelIrpsInCurrentThreadList @ 0x14041AD54 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneTimerCallback @ 0x14041AE90 (PopThermalZoneTimerCallback.c)
 *     IopCancelIrpsInFileObjectList @ 0x14041AEB0 (IopCancelIrpsInFileObjectList.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     PopThermalUpdateTimerPolicy @ 0x140431F0C (PopThermalUpdateTimerPolicy.c)
 *     PopThermalZoneDpc @ 0x1405CF690 (PopThermalZoneDpc.c)
 *     IopCancelPendingEject @ 0x140727708 (IopCancelPendingEject.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x14074E7B0 (PopBatteryRemove.c)
 *     PopPowerAdapterRemove @ 0x14074F4E0 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x1407505C0 (PopFanRemove.c)
 *     IoCancelThreadIo @ 0x1408F526C (IoCancelThreadIo.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     NtCancelIoFile @ 0x1409E3D30 (NtCancelIoFile.c)
 *     PopThermalReadCounters @ 0x1409FC328 (PopThermalReadCounters.c)
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140A95A84 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x14041B370 (FsRtlpOplockRHIrpCancelRoutine.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IovCancelIrp @ 0x140B726F0 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x140B7D528 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rdi
  KIRQL v4; // si
  bool v5; // zf
  PDEVICE_OBJECT DeviceObject; // rcx

  if ( (VfRuleClasses & 0x10) != 0 && (VfRuleClasses & 0x400) != 0 )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = (__int64 (__fastcall *)(_QWORD, _QWORD))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    v5 = ViVerifierEnabled == 0;
    Irp->CancelIrql = v2;
    if ( v5 || !VfXdvEnabled )
    {
      DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
      if ( v3 == FsRtlpOplockRHIrpCancelRoutine )
        FsRtlpOplockRHIrpCancelRoutine(DeviceObject, Irp);
      else
        guard_dispatch_icall_no_overrides(DeviceObject, Irp);
    }
    else
    {
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    }
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
