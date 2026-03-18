/*
 * XREFs of UsbhFdoPnp_QueryStop @ 0x14004FBF0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDisableHardReset @ 0x14004B550 (UsbhDisableHardReset.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryStop(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rbp
  _DWORD *v5; // rsi
  __int64 v6; // r9
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  v5 = FdoExt(a1) + 346;
  Log(a1, 2, 1903784820, (__int64)v5, (__int64)a2);
  UsbhDisableHardReset(*((_QWORD *)v5 + 1));
  if ( (int)UsbhFdoCheckUpstreamConnectionState(*((_QWORD *)v5 + 1), &v8) >= 0 )
    Usbh_SSH_Event(*((_QWORD *)v5 + 1), 6LL, (__int64)v5, v6);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
