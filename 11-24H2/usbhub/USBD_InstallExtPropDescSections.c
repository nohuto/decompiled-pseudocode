/*
 * XREFs of USBD_InstallExtPropDescSections @ 0x140041080
 * Callers:
 *     UsbhInstallMsOsExtendedProperties @ 0x1400427A0 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall USBD_InstallExtPropDescSections(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  const WCHAR *v7; // rdi
  unsigned int i; // esi
  __int64 v9; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+10h] BYREF

  DeviceRegKey = 0LL;
  if ( !a2 || !a1 )
    return -1073741811;
  v4 = *(unsigned __int16 *)(a2 + 8);
  *(_QWORD *)&DestinationString.Length = *(_QWORD *)a2;
  if ( !(_WORD)v4 )
    return 0;
  if ( *(_DWORD *)&DestinationString.Length < 0xAu || *(_DWORD *)&DestinationString.Length > a3 )
    return -1073741811;
  result = IoOpenDeviceRegistryKey(a1, 1u, 0x1F0000u, &DeviceRegKey);
  v6 = result;
  if ( result >= 0 )
  {
    v7 = (const WCHAR *)(a2 + 10);
    for ( i = 0; i < v4; ++i )
    {
      DestinationString = 0LL;
      v9 = v7[4];
      RtlInitUnicodeString(&DestinationString, v7 + 5);
      v6 = ZwSetValueKey(
             DeviceRegKey,
             &DestinationString,
             0,
             *((_DWORD *)v7 + 1),
             (char *)v7 + v9 + 14,
             *(_DWORD *)((char *)v7 + v9 + 10));
      if ( v6 < 0 )
        break;
      v7 = (const WCHAR *)((char *)v7 + *(unsigned int *)v7);
    }
    ZwClose(DeviceRegKey);
    return v6;
  }
  return result;
}
