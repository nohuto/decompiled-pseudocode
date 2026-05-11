/*
 * XREFs of RegistryGetIdleInfo @ 0x140033EA4
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryGetIdleInfo(
        struct _DEVICE_OBJECT *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *ResultLength,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  _DWORD *v8; // rdi
  _DWORD *Pool2; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-59h] BYREF
  struct _UNICODE_STRING v15; // [rsp+50h] [rbp-49h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING v17; // [rsp+70h] [rbp-29h] BYREF
  struct _UNICODE_STRING v18; // [rsp+80h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-9h] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+5Fh] BYREF
  void *DeviceRegKey; // [rsp+100h] [rbp+67h] BYREF

  *a4 = 0;
  v6 = ResultLength;
  v8 = a6;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  *a2 = 30;
  *a3 = 30;
  *v6 = 30;
  *v8 = 4;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) >= 0 )
  {
    *(&ObjectAttributes.Attributes + 1) = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PowerSettings");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      LODWORD(ResultLength) = 0;
      ValueName = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      RtlInitUnicodeString(&ValueName, L"ConservationIdleTime");
      RtlInitUnicodeString(&v15, L"CSConservationIdleTime");
      RtlInitUnicodeString(&v16, L"PerformanceIdleTime");
      RtlInitUnicodeString(&v17, L"CSPerformanceIdleTime");
      RtlInitUnicodeString(&v18, L"IdlePowerState");
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 1096972357LL);
      if ( Pool2 )
      {
        if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, 0x14u, (PULONG)&ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          *a2 = Pool2[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v15, KeyValuePartialInformation, Pool2, 0x14u, (PULONG)&ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          *a3 = Pool2[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v16, KeyValuePartialInformation, Pool2, 0x14u, (PULONG)&ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          *a4 = Pool2[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v17, KeyValuePartialInformation, Pool2, 0x14u, (PULONG)&ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          *v6 = Pool2[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v18, KeyValuePartialInformation, Pool2, 0x14u, (PULONG)&ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          switch ( Pool2[3] )
          {
            case 1:
              *v8 = 2;
              break;
            case 2:
              *v8 = 3;
              break;
            case 3:
              *v8 = 4;
              break;
            default:
              *v8 = 1;
              break;
          }
        }
        ExFreePool(Pool2);
      }
      ZwClose(KeyHandle);
    }
    ZwClose(DeviceRegKey);
  }
  return 0LL;
}
