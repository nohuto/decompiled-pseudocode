/*
 * XREFs of pIoQueryDeviceDescription @ 0x140715D3C
 * Callers:
 *     pIoQueryBusDescription @ 0x14099C1E4 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 *     IopGetRegistryKeyInformation @ 0x14099C54C (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x14099C600 (IopGetRegistryValues.c)
 *     IopOpenRegistryKey @ 0x140A77340 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall pIoQueryDeviceDescription(unsigned int **a1, _OWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v5; // edi
  int appended; // ebx
  ULONG *v9; // rsi
  ULONG v10; // esi
  ULONG v11; // r12d
  __int128 v12; // xmm7
  ULONG *v13; // rdi
  ULONG v14; // edi
  ULONG v15; // r15d
  __int128 v16; // xmm6
  int v18; // [rsp+28h] [rbp-E0h]
  _QWORD Destination[3]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h]
  UNICODE_STRING String; // [rsp+90h] [rbp-78h] BYREF
  PVOID v24; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  PVOID v26[2]; // [rsp+B0h] [rbp-58h]
  PVOID v27; // [rsp+C0h] [rbp-48h]
  PVOID v28[2]; // [rsp+C8h] [rbp-40h]
  PVOID v29; // [rsp+D8h] [rbp-30h]
  char v30; // [rsp+E0h] [rbp-28h] BYREF

  v5 = a5;
  *(_OWORD *)&Destination[1] = *a2;
  v27 = 0LL;
  v29 = 0LL;
  v22 = a5;
  String.MaximumLength = 28;
  Handle = 0LL;
  String.Buffer = (wchar_t *)&v30;
  KeyHandle = 0LL;
  P = 0LL;
  v24 = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_OWORD *)v26 = 0LL;
  *(_OWORD *)v28 = 0LL;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[*a1[2]]);
    if ( appended >= 0 )
    {
      v9 = a1[3];
      if ( v9 )
      {
        v10 = *v9;
        v11 = v10 + 1;
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
        v10 = 0;
        v11 = *((_DWORD *)P + 5);
        ExFreePoolWithTag(P, 0);
      }
      v12 = *(_OWORD *)&Destination[1];
      if ( v10 < v11 )
      {
        while ( 1 )
        {
          *(_OWORD *)&Destination[1] = v12;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v10, 0xAu, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          LOBYTE(v18) = 0;
          appended = IopOpenRegistryKey(&Handle, 0LL, &Destination[1], 131097LL, v18);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(Handle);
            ZwClose(Handle);
            Handle = 0LL;
            if ( appended >= 0 )
              break;
          }
LABEL_46:
          if ( ++v10 >= v11 )
            return (unsigned int)appended;
        }
        if ( !a1[4] )
        {
          v18 = v5;
          appended = guard_dispatch_icall_no_overrides(a1[7], &Destination[1], **a1, a4);
          goto LABEL_39;
        }
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
        if ( appended < 0
          || (appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[*a1[4]]), appended < 0) )
        {
LABEL_39:
          if ( v26[0] )
          {
            ExFreePoolWithTag(v26[0], 0);
            v26[0] = 0LL;
          }
          if ( v26[1] )
          {
            ExFreePoolWithTag(v26[1], 0);
            v26[1] = 0LL;
          }
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0);
            v27 = 0LL;
          }
          if ( appended < 0 )
            return (unsigned int)appended;
          goto LABEL_46;
        }
        v13 = a1[5];
        if ( v13 )
        {
          v14 = *v13;
          v15 = v14 + 1;
        }
        else
        {
          LOBYTE(v18) = 0;
          if ( (int)IopOpenRegistryKey(&KeyHandle, 0LL, &Destination[1], 131097LL, v18) < 0
            || (appended = IopGetRegistryKeyInformation(KeyHandle), ZwClose(KeyHandle), KeyHandle = 0LL, appended < 0) )
          {
            appended = 0;
LABEL_38:
            v5 = v22;
            goto LABEL_39;
          }
          v14 = 0;
          v15 = *((_DWORD *)v24 + 5);
          ExFreePoolWithTag(v24, 0);
          v24 = 0LL;
        }
        v16 = *(_OWORD *)&Destination[1];
        while ( v14 < v15 )
        {
          *(_OWORD *)&Destination[1] = v16;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v14, 0xAu, &String);
          if ( appended < 0 )
            break;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
          if ( appended < 0 )
            break;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            break;
          LOBYTE(v18) = 0;
          appended = IopOpenRegistryKey(&KeyHandle, 0LL, &Destination[1], 131097LL, v18);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(KeyHandle);
            ZwClose(KeyHandle);
            KeyHandle = 0LL;
            if ( appended >= 0 )
            {
              v18 = v22;
              appended = guard_dispatch_icall_no_overrides(a1[7], &Destination[1], **a1, a4);
              if ( v28[0] )
              {
                ExFreePoolWithTag(v28[0], 0);
                v28[0] = 0LL;
              }
              if ( v28[1] )
              {
                ExFreePoolWithTag(v28[1], 0);
                v28[1] = 0LL;
              }
              if ( v29 )
              {
                ExFreePoolWithTag(v29, 0);
                v29 = 0LL;
              }
              if ( appended < 0 )
                break;
            }
          }
          ++v14;
        }
        goto LABEL_38;
      }
    }
  }
  return (unsigned int)appended;
}
