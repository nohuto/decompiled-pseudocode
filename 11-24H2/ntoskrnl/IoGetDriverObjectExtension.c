/*
 * XREFs of IoGetDriverObjectExtension @ 0x14048CF40
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 */

PVOID __stdcall IoGetDriverObjectExtension(PDRIVER_OBJECT DriverObject, PVOID ClientIdentificationAddress)
{
  KIRQL v4; // al
  struct _DRIVER_OBJECT *i; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  for ( i = DriverObject->DriverExtension[1].DriverObject;
        i && i->DeviceObject != ClientIdentificationAddress;
        i = *(struct _DRIVER_OBJECT **)&i->Type )
  {
    ;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return (PVOID)((unsigned __int64)&i->Flags & -(__int64)(i != 0LL));
}
