/*
 * XREFs of UsbhGetD3Policy @ 0x1C0044C98
 * Callers:
 *     UsbhReadPdoRegistryKeys @ 0x1C0046364 (UsbhReadPdoRegistryKeys.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 */

int __fastcall UsbhGetD3Policy(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rax
  NTSTATUS v4; // ebx
  NTSTATUS v5; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-21h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF
  int v13; // [rsp+98h] [rbp+3Fh]

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DeviceRegKey = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v13 = 0;
  KeyValueInformation = 0LL;
  v2 = PdoExt((__int64)DeviceObject);
  v2[355] &= ~0x400000u;
  LODWORD(v3) = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0xF003Fu, &DeviceRegKey);
  if ( (int)v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"e5b3b5ac-9725-4f78-963f-03dfb1d828c7");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    LODWORD(v3) = ZwClose(DeviceRegKey);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"D3ColdSupported");
      v5 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      LODWORD(v3) = ZwClose(KeyHandle);
      if ( v5 >= 0 )
      {
        if ( HIDWORD(KeyValueInformation) )
        {
          v3 = PdoExt((__int64)DeviceObject);
          v3[355] |= 0x400000u;
        }
      }
    }
  }
  return (int)v3;
}
