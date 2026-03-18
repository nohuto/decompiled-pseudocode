/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1403F816C
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1403F7D4C (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiAppendStringToString @ 0x140242BF0 (DpiAppendStringToString.c)
 *     DpiCopyUnicodeString @ 0x140242DA0 (DpiCopyUnicodeString.c)
 *     DpiGdoCreateServiceEntry @ 0x14024EDD0 (DpiGdoCreateServiceEntry.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  __int64 v7; // rdi
  __int64 v8; // rbx
  int appended; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // r9
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v23; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  PVOID ValueData[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v32; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[4]; // [rsp+110h] [rbp+10h] BYREF
  int v34; // [rsp+118h] [rbp+18h]
  __int16 v35; // [rsp+11Ch] [rbp+1Ch]

  v4 = *(_QWORD *)(a1 + 64);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v5 = a3;
  *(_QWORD *)SourceString = 0LL;
  v34 = 0;
  Source = 0LL;
  v35 = 0;
  v23 = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  *(_OWORD *)ValueData = 0LL;
  Handle = 0LL;
  Destination = 0LL;
  memset(&v32, 0, sizeof(v32));
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( *(_BYTE *)(v7 + 2847) )
  {
    LODWORD(v8) = 0;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v7 + 480) )
  {
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v7 + 40) + 40LL), a3, a4);
  }
  else
  {
    if ( ((*(_QWORD *)(*(_QWORD *)(v7 + 24) + 64LL) + 4896LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 64LL) + 4904LL) >> 64)) == 0 )
    {
      LODWORD(v8) = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 1774;
      goto LABEL_38;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(unsigned __int16 **)(((*(_QWORD *)(*(_QWORD *)(v7 + 24) + 64LL) + 4896LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 64LL) + 4904LL) >> 64))
                                      + 8),
                 &Source);
  }
  LODWORD(v8) = appended;
  if ( appended >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = &Source;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    LODWORD(v8) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 1814;
      goto LABEL_38;
    }
    LODWORD(v8) = DpiGdoCreateServiceEntry(*(_QWORD *)(v7 + 40) + 40LL, KeyHandle);
    if ( (int)v8 >= 0 )
    {
      if ( *(_BYTE *)(v7 + 480) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        goto LABEL_14;
      }
      RtlStringCbPrintfW(SourceString, 0xEuLL, (size_t *)L"\\%04d", v5);
      RtlInitUnicodeString(&DestinationString, &SourceString[1]);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v23, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        v13 = ZwDeleteKey(v23);
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(3LL, v13);
          WdLogGlobalForLineNumber = 1880;
        }
      }
      v14 = ZwCreateKey(&v23, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      LODWORD(v8) = v14;
      if ( v14 < 0 )
      {
        if ( v14 != -1073741771 )
        {
          WdLogSingleEntry1(2LL, v14);
          WdLogGlobalForLineNumber = 1903;
          goto LABEL_38;
        }
LABEL_14:
        LODWORD(v8) = DpiAppendStringToString(Source.Buffer, SourceString, (PUNICODE_STRING)ValueData);
        if ( (int)v8 >= 0 )
        {
          v11 = RtlWriteRegistryValue(4u, L"VIDEO", *(PCWSTR *)(a2 + 8), 1u, ValueData[1], WORD1(ValueData[0]));
          v8 = v11;
          if ( v11 >= 0 )
          {
            Destination.MaximumLength = Source.Length + 52;
            Destination.Buffer = (wchar_t *)ExAllocatePool2(
                                              256LL,
                                              (unsigned __int16)(Source.Length + 52),
                                              1953656900LL,
                                              v12);
            if ( Destination.Buffer )
            {
              v16 = RtlAppendUnicodeStringToString(&Destination, &Source);
              LODWORD(v8) = v16;
              if ( v16 >= 0 )
              {
                v17 = RtlAppendUnicodeToString(&Destination, SourceString);
                LODWORD(v8) = v17;
                if ( v17 >= 0 )
                {
                  v18 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
                  LODWORD(v8) = v18;
                  if ( v18 >= 0 )
                  {
                    v32.ObjectName = &Destination;
                    v32.Length = 48;
                    v32.RootDirectory = 0LL;
                    *(_OWORD *)&v32.SecurityDescriptor = 0LL;
                    v32.Attributes = 576;
                    v19 = ZwCreateKey(&Handle, 0xC0000000, &v32, 0, 0LL, 1u, 0LL);
                    LODWORD(v8) = v19;
                    if ( v19 >= 0 )
                    {
                      v20 = RtlWriteRegistryValue(
                              0,
                              Destination.Buffer,
                              L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
                              3u,
                              *(PVOID *)(v4 + 168),
                              *(unsigned __int16 *)(v4 + 160));
                      LODWORD(v8) = v20;
                      if ( v20 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v20);
                        WdLogGlobalForLineNumber = 2103;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL, v19);
                      WdLogGlobalForLineNumber = 2082;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v18);
                    WdLogGlobalForLineNumber = 2054;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, v17);
                  WdLogGlobalForLineNumber = 2037;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, v16);
                WdLogGlobalForLineNumber = 2020;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v8);
              WdLogGlobalForLineNumber = 2003;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v11);
            WdLogGlobalForLineNumber = 1974;
          }
        }
        goto LABEL_38;
      }
      if ( Disposition != 1 )
        goto LABEL_14;
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
      v15 = ZwSetValueKey(v23, &ValueName, 0, 6u, *(PVOID *)(v7 + 536), *(unsigned __int16 *)(v7 + 528));
      LODWORD(v8) = v15;
      if ( v15 >= 0 )
        goto LABEL_14;
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 1933;
    }
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
LABEL_40:
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString((PUNICODE_STRING)ValueData);
  if ( v23 )
    ZwClose(v23);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v8;
}
