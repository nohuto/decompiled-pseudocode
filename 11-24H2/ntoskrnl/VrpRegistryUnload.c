/*
 * XREFs of VrpRegistryUnload @ 0x140829B90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsFreeSiloContextSlot @ 0x140772320 (PsFreeSiloContextSlot.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot(VrpSiloContextSlot);
  if ( (unsigned int)dword_140E0A620 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A620, (unsigned __int8 *)byte_14005968D, 0LL, 0LL, 2u, &v2);
  v0 = qword_140E0A640;
  qword_140E0A640 = 0LL;
  dword_140E0A620 = 0;
  return EtwUnregister(v0);
}
