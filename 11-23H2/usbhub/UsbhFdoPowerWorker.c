/*
 * XREFs of UsbhFdoPowerWorker @ 0x1C003C0A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoPowerWorkerInternal @ 0x1C0022850 (UsbhFdoPowerWorkerInternal.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorker(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return UsbhFdoPowerWorkerInternal(a1, a2);
}
