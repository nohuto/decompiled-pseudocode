/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C006DDA8
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C006E248 (IsMouseDeviceOnIgnoreList.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C01927F8 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1C01922AC (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // esi
  __int64 v6; // rdi
  ULONG v7; // r12d
  int v8; // edx
  int v9; // r8d
  NTSTATUS v10; // r14d
  struct _KEY_VALUE_FULL_INFORMATION *v11; // rdi
  unsigned int v12; // r13d
  char v13; // dl
  __int64 v15; // [rsp+40h] [rbp-39h]
  __int64 v16; // [rsp+48h] [rbp-31h]
  void *KeyHandle; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING v18; // [rsp+60h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF
  ULONG Length; // [rsp+F8h] [rbp+7Fh] BYREF

  ObjectAttributes.ObjectName = a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      if ( a3 && a2->Length >= 0x2Au )
      {
        v7 = 0;
        Length = 0;
        while ( !v5 )
        {
          v10 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v10 != -1073741789 )
          {
            if ( v10 != -2147483622 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v8) = 0;
              }
              if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v8,
                  v9,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  17,
                  (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids,
                  v10);
              }
            }
            break;
          }
          v11 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInit(Length, 0x78657355u);
          if ( v11 )
          {
            v10 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueFullInformation, v11, Length, &Length);
            if ( v10 >= 0 )
            {
              v12 = *((unsigned __int8 *)&v11->TitleIndex + v11->DataOffset);
              if ( v12 - 1 <= 1
                && v11->Type == 4
                && v11->NameLength >= 0x2A
                && RtlCompareMemory(v11->Name, L"HID", 6uLL) == 6 )
              {
                v18 = *a2;
                v5 = CompareDeviceVIDPID(&v18, v11, v12) != 0;
              }
              else
              {
                v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v16) = v11->NameLength;
                  LODWORD(v15) = v12;
                  WPP_RECORDER_AND_TRACE_SF_dd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v13,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    (__int64)gRimLog,
                    4u,
                    1u,
                    0x10u,
                    (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids,
                    v15,
                    v16);
                }
              }
            }
            Win32FreePool((char *)v11);
          }
          ++v7;
          if ( v10 == -2147483622 )
            break;
        }
      }
    }
    else
    {
      v6 = Win32AllocPoolZInit(ResultLength, 0x78657355u);
      if ( v6 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v6, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v6 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v6 + 12) - 1) <= 2u;
        }
        Win32FreePool((char *)v6);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
