/*
 * XREFs of UsbhFdoPnp_DoDefault @ 0x1C0042C60
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_DoDefault(__int64 a1, IRP *a2)
{
  __int64 v4; // r10

  FdoExt(a1);
  Log(a1, 2, 1715758438, a2->Tail.Overlay.CurrentStackLocation->MinorFunction, (__int64)a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
