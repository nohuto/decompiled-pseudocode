/*
 * XREFs of ACPIRootIrpRemoveDevice @ 0x1400676F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitializeKernelTableHandler @ 0x1400548F0 (ACPIInitializeKernelTableHandler.c)
 */

__int64 __fastcall ACPIRootIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  unsigned int MinorFunction; // ebp
  char v6; // al
  __int64 v7; // rcx
  const char *v8; // rdx
  char v9; // r10
  const char *v10; // r8
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rcx
  void *v14; // rcx
  KIRQL v15; // al
  struct _DEVICE_OBJECT *v16; // rsi

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  *(_DWORD *)(DeviceExtension + 368) = 4;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
  v7 = *(_QWORD *)(DeviceExtension + 8);
  v8 = byte_140075488;
  v9 = v6;
  v10 = byte_140075488;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(DeviceExtension + 608);
    if ( (v7 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v11 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
      (char)Irp,
      ACPIDispatchPnpTableNames[v11],
      v9,
      DeviceExtension,
      v8,
      v10);
  }
  if ( IoWMIRegistrationControl(DeviceObject, 2u) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1,
      11,
      (__int64)&WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids);
  }
  ACPIInitializeKernelTableHandler(0, (__int64)DeviceObject->DriverObject);
  v13 = *(void **)(DeviceExtension + 672);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(void **)(DeviceExtension + 680);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = 0LL;
  v16 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 776);
  *(_QWORD *)(DeviceExtension + 776) = 0LL;
  *(_QWORD *)(DeviceExtension + 784) = 0LL;
  *(_QWORD *)(DeviceExtension + 768) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 8uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
  if ( (*(_BYTE *)(DeviceExtension + 8) & 0x10) != 0 )
  {
    if ( NotificationEntry )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
    }
    if ( qword_140088C30 )
    {
      IoUnregisterPlugPlayNotification(qword_140088C30);
      qword_140088C30 = 0LL;
    }
  }
  ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  IoDetachDevice(v16);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
