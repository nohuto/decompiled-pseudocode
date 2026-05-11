/*
 * XREFs of RegistryGetIdleInfo @ 0x140034014
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline @ 0x14000BE30 (Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RegistryGetIdleInfo(
        PDEVICE_OBJECT DeviceObject,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *Pool2; // rbx
  struct _UNICODE_STRING *v12; // rdx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-89h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-81h] BYREF
  void *DeviceRegKey; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING v17; // [rsp+50h] [rbp-71h] BYREF
  struct _UNICODE_STRING v18; // [rsp+60h] [rbp-61h] BYREF
  struct _UNICODE_STRING v19; // [rsp+70h] [rbp-51h] BYREF
  struct _UNICODE_STRING v20; // [rsp+80h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-1h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp+Fh] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline();
  *a2 = 30;
  *a6 = 4;
  if ( IsEnabledDeviceUsageNoInline )
  {
    *a3 = 30;
    *a4 = 0;
    *a5 = 30;
    if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x20019u, &DeviceRegKey) >= 0 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"PowerSettings");
      ObjectAttributes.RootDirectory = DeviceRegKey;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        ResultLength[0] = 0;
        ValueName = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        RtlInitUnicodeString(&ValueName, L"ConservationIdleTime");
        RtlInitUnicodeString(&v17, L"CSConservationIdleTime");
        RtlInitUnicodeString(&v18, L"PerformanceIdleTime");
        RtlInitUnicodeString(&v19, L"CSPerformanceIdleTime");
        RtlInitUnicodeString(&v20, L"IdlePowerState");
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 1096972357LL);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            *a2 = Pool2[3];
          }
          if ( ZwQueryValueKey(KeyHandle, &v17, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            *a3 = Pool2[3];
          }
          if ( ZwQueryValueKey(KeyHandle, &v18, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            *a4 = Pool2[3];
          }
          if ( ZwQueryValueKey(KeyHandle, &v19, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            *a5 = Pool2[3];
          }
          v12 = &v20;
LABEL_28:
          if ( ZwQueryValueKey(KeyHandle, v12, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            switch ( Pool2[3] )
            {
              case 1:
                *a6 = 2;
                break;
              case 2:
                *a6 = 3;
                break;
              case 3:
                *a6 = 4;
                break;
              default:
                *a6 = 1;
                break;
            }
          }
          ExFreePool(Pool2);
          goto LABEL_38;
        }
        goto LABEL_38;
      }
      goto LABEL_39;
    }
  }
  else
  {
    *a4 = 30;
    if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x20019u, &DeviceRegKey) >= 0 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      v20 = 0LL;
      RtlInitUnicodeString(&v20, L"PowerSettings");
      ObjectAttributes.RootDirectory = DeviceRegKey;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v20;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        ResultLength[0] = 0;
        v19 = 0LL;
        v18 = 0LL;
        v17 = 0LL;
        RtlInitUnicodeString(&v19, L"ConservationIdleTime");
        RtlInitUnicodeString(&v18, L"PerformanceIdleTime");
        RtlInitUnicodeString(&v17, L"IdlePowerState");
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 1096972357LL);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(KeyHandle, &v19, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            *a2 = Pool2[3];
          }
          if ( ZwQueryValueKey(KeyHandle, &v18, KeyValuePartialInformation, Pool2, 0x14u, ResultLength) >= 0
            && Pool2[2] == 4 )
          {
            *a4 = Pool2[3];
          }
          v12 = &v17;
          goto LABEL_28;
        }
LABEL_38:
        ZwClose(KeyHandle);
      }
LABEL_39:
      ZwClose(DeviceRegKey);
    }
  }
  return 0LL;
}
