/*
 * XREFs of IoCancelIrp @ 0x140408D50
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140408864 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneTimerCallback @ 0x1404089A0 (PopThermalZoneTimerCallback.c)
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 *     PopThermalUpdateTimerPolicy @ 0x14041C60C (PopThermalUpdateTimerPolicy.c)
 *     PopThermalSxExit @ 0x1405D1508 (PopThermalSxExit.c)
 *     PopThermalZoneDpc @ 0x1405D1860 (PopThermalZoneDpc.c)
 *     IopCancelPendingEject @ 0x1407318D4 (IopCancelPendingEject.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x140759700 (PopBatteryRemove.c)
 *     PopBatteryUpdateTestExempt @ 0x140759914 (PopBatteryUpdateTestExempt.c)
 *     PopPowerAdapterRemove @ 0x14075AD90 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x14075BE90 (PopFanRemove.c)
 *     IoCancelThreadIo @ 0x1408FE8DC (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x1409DCE40 (NtCancelIoFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1409F5D70 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409F5FA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     PopThermalReadCounters @ 0x1409F73E8 (PopThermalReadCounters.c)
 *     FsRtlQueryInformationFile @ 0x140A23950 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140A96C04 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x140408E80 (FsRtlpOplockRHIrpCancelRoutine.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IovCancelIrp @ 0x140B846F0 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x140B8F508 (IovpCancelRoutine.c)
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
