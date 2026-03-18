/*
 * XREFs of VrpRegistryUnload @ 0x140829360
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsFreeSiloContextSlot @ 0x140772100 (PsFreeSiloContextSlot.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot(VrpSiloContextSlot);
  if ( (unsigned int)dword_140E0A5B0 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A5B0, (unsigned __int8 *)&dword_140058B14, 0LL, 0LL, 2u, &v2);
  v0 = qword_140E0A5D0;
  qword_140E0A5D0 = 0LL;
  dword_140E0A5B0 = 0;
  return EtwUnregister(v0);
}
