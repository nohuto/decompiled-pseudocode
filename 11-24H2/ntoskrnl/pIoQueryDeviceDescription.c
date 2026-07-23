/*
 * XREFs of pIoQueryDeviceDescription @ 0x1407138CC
 * Callers:
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlIntegerToUnicodeString @ 0x140860970 (RtlIntegerToUnicodeString.c)
 *     IopGetRegistryKeyInformation @ 0x1409CECBC (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x1409CED70 (IopGetRegistryValues.c)
 *     IopOpenRegistryKey @ 0x140A71460 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall pIoQueryDeviceDescription(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edi
  int appended; // ebx
  ULONG *v8; // rsi
  ULONG v9; // esi
  ULONG v10; // r12d
  __int128 v11; // xmm7
  ULONG *v12; // rdi
  ULONG v13; // edi
  ULONG v14; // r15d
  __int128 v15; // xmm6
  int v17; // [rsp+28h] [rbp-E0h]
  _QWORD Destination[3]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v21; // [rsp+88h] [rbp-80h]
  UNICODE_STRING String; // [rsp+90h] [rbp-78h] BYREF
  PVOID v23; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  PVOID v25[2]; // [rsp+B0h] [rbp-58h]
  PVOID v26; // [rsp+C0h] [rbp-48h]
  PVOID v27[2]; // [rsp+C8h] [rbp-40h]
  PVOID v28; // [rsp+D8h] [rbp-30h]
  char v29; // [rsp+E0h] [rbp-28h] BYREF

  v5 = a5;
  *(_OWORD *)&Destination[1] = *a2;
  v26 = 0LL;
  v28 = 0LL;
  v21 = a5;
  String.MaximumLength = 28;
  Handle = 0LL;
  String.Buffer = (wchar_t *)&v29;
  KeyHandle = 0LL;
  P = 0LL;
  v23 = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)v27 = 0LL;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[**(int **)(a1 + 16)]);
    if ( appended >= 0 )
    {
      v8 = *(ULONG **)(a1 + 24);
      if ( v8 )
      {
        v9 = *v8;
        v10 = v9 + 1;
      }
      else
      {
        appended = IopOpenRegistryKey(&Handle, 0LL, &Destination[1], 131097LL, 0);
        if ( appended < 0 )
          return (unsigned int)appended;
        appended = IopGetRegistryKeyInformation(Handle);
        ZwClose(Handle);
        Handle = 0LL;
        if ( appended < 0 )
          return (unsigned int)appended;
        v9 = 0;
        v10 = *((_DWORD *)P + 5);
        ExFreePoolWithTag(P, 0);
      }
      v11 = *(_OWORD *)&Destination[1];
      if ( v9 < v10 )
      {
        while ( 1 )
        {
          *(_OWORD *)&Destination[1] = v11;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v9, 0xAu, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          LOBYTE(v17) = 0;
          appended = IopOpenRegistryKey(&Handle, 0LL, &Destination[1], 131097LL, v17);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(Handle);
            ZwClose(Handle);
            Handle = 0LL;
            if ( appended >= 0 )
              break;
          }
LABEL_46:
          if ( ++v9 >= v10 )
            return (unsigned int)appended;
        }
        if ( !*(_QWORD *)(a1 + 32) )
        {
          v17 = v5;
          appended = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), &Destination[1]);
          goto LABEL_39;
        }
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
        if ( appended < 0
          || (appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[**(int **)(a1 + 32)]),
              appended < 0) )
        {
LABEL_39:
          if ( v25[0] )
          {
            ExFreePoolWithTag(v25[0], 0);
            v25[0] = 0LL;
          }
          if ( v25[1] )
          {
            ExFreePoolWithTag(v25[1], 0);
            v25[1] = 0LL;
          }
          if ( v26 )
          {
            ExFreePoolWithTag(v26, 0);
            v26 = 0LL;
          }
          if ( appended < 0 )
            return (unsigned int)appended;
          goto LABEL_46;
        }
        v12 = *(ULONG **)(a1 + 40);
        if ( v12 )
        {
          v13 = *v12;
          v14 = v13 + 1;
        }
        else
        {
          LOBYTE(v17) = 0;
          if ( (int)IopOpenRegistryKey(&KeyHandle, 0LL, &Destination[1], 131097LL, v17) < 0
            || (appended = IopGetRegistryKeyInformation(KeyHandle), ZwClose(KeyHandle), KeyHandle = 0LL, appended < 0) )
          {
            appended = 0;
LABEL_38:
            v5 = v21;
            goto LABEL_39;
          }
          v13 = 0;
          v14 = *((_DWORD *)v23 + 5);
          ExFreePoolWithTag(v23, 0);
          v23 = 0LL;
        }
        v15 = *(_OWORD *)&Destination[1];
        while ( v13 < v14 )
        {
          *(_OWORD *)&Destination[1] = v15;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v13, 0xAu, &String);
          if ( appended < 0 )
            break;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
          if ( appended < 0 )
            break;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            break;
          LOBYTE(v17) = 0;
          appended = IopOpenRegistryKey(&KeyHandle, 0LL, &Destination[1], 131097LL, v17);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(KeyHandle);
            ZwClose(KeyHandle);
            KeyHandle = 0LL;
            if ( appended >= 0 )
            {
              v17 = v21;
              appended = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), &Destination[1]);
              if ( v27[0] )
              {
                ExFreePoolWithTag(v27[0], 0);
                v27[0] = 0LL;
              }
              if ( v27[1] )
              {
                ExFreePoolWithTag(v27[1], 0);
                v27[1] = 0LL;
              }
              if ( v28 )
              {
                ExFreePoolWithTag(v28, 0);
                v28 = 0LL;
              }
              if ( appended < 0 )
                break;
            }
          }
          ++v13;
        }
        goto LABEL_38;
      }
    }
  }
  return (unsigned int)appended;
}
