/*
 * XREFs of DpiFdoDispatchPower @ 0x1403B94F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoHandleWaitWake @ 0x140188F6C (DpiFdoHandleWaitWake.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 */

NTSTATUS __fastcall DpiFdoDispatchPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MinorFunction )
    return DpiFdoHandleWaitWake((__int64)a1, a2);
  if ( CurrentStackLocation->Parameters.Create.Options )
    return DpiFdoHandleDevicePower(a1, a2);
  return DpiFdoHandleSystemPower(a1, a2);
}
