/*
 * XREFs of RegistryReadPnPKeyValue @ 0x14002D570
 * Callers:
 *     USBHwGetDeviceIDString @ 0x14002D384 (USBHwGetDeviceIDString.c)
 *     USBHwGetCaptureRequestSize @ 0x14002D4FC (USBHwGetCaptureRequestSize.c)
 * Callees:
 *     RegistryGetValue @ 0x140034508 (RegistryGetValue.c)
 */

__int64 __fastcall RegistryReadPnPKeyValue(struct _DEVICE_OBJECT *a1)
{
  NTSTATUS Value; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  Value = IoOpenDeviceRegistryKey(a1, 2u, 0xF003Fu, &Handle);
  if ( Value >= 0 )
  {
    Value = RegistryGetValue(Handle);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
