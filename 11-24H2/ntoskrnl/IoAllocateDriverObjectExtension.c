/*
 * XREFs of IoAllocateDriverObjectExtension @ 0x1404A8CF0
 * Callers:
 *     DifIoAllocateDriverObjectExtensionWrapper @ 0x140623AE0 (DifIoAllocateDriverObjectExtensionWrapper.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoAllocateDriverObjectExtension(
        PDRIVER_OBJECT DriverObject,
        PVOID ClientIdentificationAddress,
        ULONG DriverObjectExtensionSize,
        PVOID *DriverObjectExtension)
{
  char v4; // si
  __int64 Pool2; // rax
  struct _DRIVER_OBJECT *v9; // rbx
  KIRQL v11; // r9
  struct _DRIVER_OBJECT *v12; // r8
  struct _DRIVER_OBJECT *v13; // rdx

  *DriverObjectExtension = 0LL;
  v4 = 0;
  if ( DriverObjectExtensionSize > 0xFFFFFFEF )
    return -1073741670;
  Pool2 = ExAllocatePool2(0x40uLL, DriverObjectExtensionSize + 16LL, 0x76697244u);
  v9 = (struct _DRIVER_OBJECT *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 8) = ClientIdentificationAddress;
  v11 = KeAcquireQueuedSpinLock(0xAuLL);
  v12 = DriverObject->DriverExtension[1].DriverObject;
  v13 = v12;
  if ( v12 )
  {
    while ( v13->DeviceObject != ClientIdentificationAddress )
    {
      v13 = *(struct _DRIVER_OBJECT **)&v13->Type;
      if ( !v13 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *(_QWORD *)&v9->Type = v12;
    v4 = 1;
    DriverObject->DriverExtension[1].DriverObject = v9;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v11);
  if ( v4 )
  {
    *DriverObjectExtension = &v9->Flags;
    return 0;
  }
  else
  {
    ExFreePoolWithTag(v9, 0);
    return -1073741771;
  }
}
