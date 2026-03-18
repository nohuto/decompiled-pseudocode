/*
 * XREFs of UsbhDeferIrpCompletion @ 0x1C002A2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhDeferIrpCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, struct _KEVENT *Context)
{
  KeSetEvent(Context, 1, 0);
  return 3221225494LL;
}
