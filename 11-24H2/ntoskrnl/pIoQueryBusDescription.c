/*
 * XREFs of pIoQueryBusDescription @ 0x1409CE954
 * Callers:
 *     IoQueryDeviceDescription @ 0x1409CDEA0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x1409CECBC (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x1409CED70 (IopGetRegistryValues.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall pIoQueryBusDescription(__int64 a1, UNICODE_STRING *a2, void *a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  PVOID v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned __int16 *Pool2; // r14
  ULONG v12; // r12d
  NTSTATUS RegistryValues; // edi
  _DWORD *v14; // rcx
  PVOID v15; // r8
  _DWORD *v16; // rcx
  NTSTATUS BusDescription; // ebx
  __int64 v18; // r9
  _DWORD *v19; // rax
  NTSTATUS v20; // eax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  ULONG ResultLength[4]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING *v27; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING v28; // [rsp+B0h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v30[2]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v31; // [rsp+100h] [rbp+0h]

  v27 = a2;
  KeyHandle = a3;
  v31 = 0LL;
  Handle = 0LL;
  P = 0LL;
  ResultLength[0] = 0;
  Source = 0LL;
  Destination = 0LL;
  *(_OWORD *)v30 = 0LL;
  result = IopGetRegistryKeyInformation(a3);
  if ( (int)result >= 0 )
  {
    v8 = P;
    v9 = *((_DWORD *)P + 6);
    v10 = v9 + 32;
    if ( v9 + 32 >= v9 )
    {
      P = (PVOID)v10;
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, v10, 0x424B6F49u);
      ExFreePoolWithTag(v8, 0);
      if ( Pool2 )
      {
        v12 = 0;
        RegistryValues = 0;
        do
        {
          v14 = *(_DWORD **)(a1 + 8);
          if ( v14 && *v14 == *a4 )
            break;
          RegistryValues = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, Pool2, (ULONG)P, ResultLength);
          if ( RegistryValues < 0 )
            break;
          if ( !a5
            || !wcsncmp(Pool2 + 8, L"MultifunctionAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1) )
          {
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            Source.Buffer = Pool2 + 8;
            Source.Length = Pool2[6];
            Source.MaximumLength = Pool2[6];
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = &Source;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              Destination = *v27;
              RtlAppendUnicodeToString(&Destination, L"\\");
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_20;
              RegistryValues = IopGetRegistryValues(Handle);
              if ( RegistryValues >= 0 )
              {
                v15 = v30[1];
                if ( v30[1] )
                {
                  if ( *((_DWORD *)v30[1] + 3) )
                  {
                    if ( *(_DWORD *)((char *)v30[1] + *((unsigned int *)v30[1] + 2)) == **(_DWORD **)a1 )
                    {
                      v18 = (unsigned int)(*a4 + 1);
                      *a4 = v18;
                      v19 = *(_DWORD **)(a1 + 8);
                      if ( !v19 || *v19 == (_DWORD)v18 )
                      {
                        if ( *(_QWORD *)(a1 + 16) )
                        {
                          v28 = Destination;
                          v20 = pIoQueryDeviceDescription(a1, &v28, (__int64)v15, v18, (__int64)v30);
                        }
                        else
                        {
                          v20 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), &Destination);
                        }
                        v15 = v30[1];
                        RegistryValues = v20;
                      }
                    }
                  }
                }
                if ( v30[0] )
                {
                  ExFreePoolWithTag(v30[0], 0);
                  v15 = v30[1];
                  v30[0] = 0LL;
                }
                if ( v15 )
                {
                  ExFreePoolWithTag(v15, 0);
                  v30[1] = 0LL;
                }
                if ( v31 )
                {
                  ExFreePoolWithTag(v31, 0);
                  v31 = 0LL;
                }
              }
              v16 = *(_DWORD **)(a1 + 8);
              if ( v16 && *v16 == *a4 )
              {
                ZwClose(Handle);
                Handle = 0LL;
              }
              else
              {
LABEL_20:
                v28 = Destination;
                BusDescription = pIoQueryBusDescription(a1, (unsigned int)&v28, (_DWORD)Handle, (_DWORD)a4, a5 == 0);
                ZwClose(Handle);
                Handle = 0LL;
                RegistryValues = 0;
                if ( BusDescription != -2147483622 )
                  RegistryValues = BusDescription;
              }
            }
          }
          ++v12;
        }
        while ( RegistryValues >= 0 );
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)RegistryValues;
      }
      else
      {
        return 3221225626LL;
      }
    }
    else
    {
      return 3221225621LL;
    }
  }
  return result;
}
