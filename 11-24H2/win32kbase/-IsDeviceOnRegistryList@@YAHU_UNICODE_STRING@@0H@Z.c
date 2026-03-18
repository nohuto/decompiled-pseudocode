/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400A7F20
 * Callers:
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400A68DC (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1400A7E38 (IsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1400A8308 (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // r14d
  ULONG v6; // ebx
  NTSTATUS v7; // r15d
  struct _KEY_VALUE_FULL_INFORMATION *v8; // rsi
  unsigned int v9; // r12d
  __int64 v11; // rbx
  char v12; // r12
  ULONG NameLength; // ebx
  __int64 v14; // rax
  char v15; // bl
  bool v16; // si
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+48h] [rbp-41h]
  ULONG Length; // [rsp+50h] [rbp-39h] BYREF
  ULONG v23; // [rsp+54h] [rbp-35h]
  unsigned int v24; // [rsp+58h] [rbp-31h]
  void *KeyHandle; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v26; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  char v28; // [rsp+F0h] [rbp+67h]
  ULONG ResultLength; // [rsp+108h] [rbp+7Fh] BYREF

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
        v6 = 0;
        Length = 0;
        v7 = 0;
        while ( 1 )
        {
          v23 = v6;
          if ( v7 == -2147483622 || v5 )
            break;
          v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v7 != -1073741789 )
          {
            if ( v7 != -2147483622 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v15 = 0;
              }
              v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
                LOBYTE(v18) = v16;
                LOBYTE(v19) = v15;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v19,
                  v18,
                  *(_QWORD *)(UserSessionState + 19392),
                  3,
                  1,
                  17,
                  (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
                  v7);
              }
            }
            break;
          }
          v8 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInitImpl(256LL, Length, 0x78657355u);
          if ( v8 )
          {
            v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, v8, Length, &Length);
            if ( v7 >= 0 )
            {
              v9 = *((unsigned __int8 *)&v8->TitleIndex + v8->DataOffset);
              v24 = v9;
              if ( v9 - 1 <= 1
                && v8->Type == 4
                && v8->NameLength >= 0x2A
                && RtlCompareMemory(v8->Name, L"HID", 6uLL) == 6 )
              {
                v26 = *a2;
                v5 = CompareDeviceVIDPID(&v26, v8, v9) != 0;
              }
              else
              {
                v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  NameLength = v8->NameLength;
                  v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
                  LODWORD(v21) = NameLength;
                  LODWORD(v20) = v24;
                  WPP_RECORDER_AND_TRACE_SF_Dd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v12,
                    v28,
                    *(_QWORD *)(v14 + 19392),
                    4u,
                    1u,
                    0x10u,
                    (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
                    v20,
                    v21);
                  v6 = v23;
                }
              }
            }
            GreDeleteFastMutex((char *)v8);
          }
          ++v6;
        }
      }
    }
    else
    {
      v11 = Win32AllocPoolZInitImpl(256LL, ResultLength, 0x78657355u);
      if ( v11 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v11, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v11 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v11 + 12) - 1) <= 2u;
        }
        GreDeleteFastMutex((char *)v11);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
