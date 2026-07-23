/*
 * XREFs of IoGetDriverObjectExtension @ 0x140487C60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
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
