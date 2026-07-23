/*
 * XREFs of PipDmgGetDeviceDmarRegistryValue @ 0x140724F20
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x140724E90 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpGetRegistryDword @ 0x1404AFC44 (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IoOpenDeviceRegistryKey @ 0x1409B6100 (IoOpenDeviceRegistryKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PipDmgGetDeviceDmarRegistryValue(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  struct _DEVICE_OBJECT *v3; // rcx
  int RegistryDword; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  HANDLE DeviceRegKey; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v9 = 0;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  *a3 = 0;
  DestinationString = 0LL;
  RegistryDword = IoOpenDeviceRegistryKey(v3, 1u, 0x20019u, &DeviceRegKey);
  if ( RegistryDword >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"DMA Management");
    RegistryDword = IopOpenRegistryKeyEx(&Handle, DeviceRegKey, &DestinationString, 131097LL);
    if ( RegistryDword >= 0 )
    {
      PnpGetRegistryDword(Handle, (__int64)L"RemappingFlags", a2);
      RegistryDword = PnpGetRegistryDword(Handle, (__int64)L"RemappingSupported", &v9);
      if ( RegistryDword >= 0 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
            *a3 = 1;
          else
            RegistryDword = -1073741811;
        }
        else
        {
          *a3 = 0;
        }
      }
    }
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)RegistryDword;
}
