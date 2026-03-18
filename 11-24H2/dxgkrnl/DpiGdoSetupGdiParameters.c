/*
 * XREFs of DpiGdoSetupGdiParameters @ 0x1403F1F5C
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1403F1B3C (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140052E4C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DpiAppendStringToString @ 0x1402499F0 (DpiAppendStringToString.c)
 *     DpiCopyUnicodeString @ 0x140249BA0 (DpiCopyUnicodeString.c)
 *     DpiGdoCreateServiceEntry @ 0x140255C00 (DpiGdoCreateServiceEntry.c)
 */

__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  int appended; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  PVOID ValueData[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v30; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[4]; // [rsp+110h] [rbp+10h] BYREF
  int v32; // [rsp+118h] [rbp+18h]
  __int16 v33; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)SourceString = 0LL;
  v32 = 0;
  Source = 0LL;
  v33 = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  *(_OWORD *)ValueData = 0LL;
  Handle = 0LL;
  Destination = 0LL;
  memset(&v30, 0, sizeof(v30));
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_BYTE *)(v6 + 2847) )
  {
    LODWORD(v7) = 0;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v6 + 480) )
  {
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v6 + 40) + 40LL));
  }
  else
  {
    if ( ((*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4896LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4904LL) >> 64)) == 0 )
    {
      LODWORD(v7) = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 1774;
      goto LABEL_38;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(unsigned __int16 **)(((*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4896LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4904LL) >> 64))
                                      + 8),
                 &Source);
  }
  LODWORD(v7) = appended;
  if ( appended >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = &Source;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    LODWORD(v7) = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 1814;
      goto LABEL_38;
    }
    LODWORD(v7) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
    if ( (int)v7 >= 0 )
    {
      if ( *(_BYTE *)(v6 + 480) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        goto LABEL_14;
      }
      RtlStringCbPrintfW(SourceString, 0xEuLL, (size_t *)L"\\%04d", a3);
      RtlInitUnicodeString(&DestinationString, &SourceString[1]);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v21, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        v11 = ZwDeleteKey(v21);
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(3LL, v11);
          WdLogGlobalForLineNumber = 1880;
        }
      }
      v12 = ZwCreateKey(&v21, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      LODWORD(v7) = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741771 )
        {
          WdLogSingleEntry1(2LL, v12);
          WdLogGlobalForLineNumber = 1903;
          goto LABEL_38;
        }
LABEL_14:
        LODWORD(v7) = DpiAppendStringToString(Source.Buffer, SourceString, (PUNICODE_STRING)ValueData);
        if ( (int)v7 >= 0 )
        {
          v10 = RtlWriteRegistryValue(4u, L"VIDEO", *(PCWSTR *)(a2 + 8), 1u, ValueData[1], WORD1(ValueData[0]));
          v7 = v10;
          if ( v10 >= 0 )
          {
            Destination.MaximumLength = Source.Length + 52;
            Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(Source.Length + 52), 1953656900LL);
            if ( Destination.Buffer )
            {
              v14 = RtlAppendUnicodeStringToString(&Destination, &Source);
              LODWORD(v7) = v14;
              if ( v14 >= 0 )
              {
                v15 = RtlAppendUnicodeToString(&Destination, SourceString);
                LODWORD(v7) = v15;
                if ( v15 >= 0 )
                {
                  v16 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
                  LODWORD(v7) = v16;
                  if ( v16 >= 0 )
                  {
                    v30.ObjectName = &Destination;
                    v30.Length = 48;
                    v30.RootDirectory = 0LL;
                    *(_OWORD *)&v30.SecurityDescriptor = 0LL;
                    v30.Attributes = 576;
                    v17 = ZwCreateKey(&Handle, 0xC0000000, &v30, 0, 0LL, 1u, 0LL);
                    LODWORD(v7) = v17;
                    if ( v17 >= 0 )
                    {
                      v18 = RtlWriteRegistryValue(
                              0,
                              Destination.Buffer,
                              L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
                              3u,
                              *(PVOID *)(v3 + 168),
                              *(unsigned __int16 *)(v3 + 160));
                      LODWORD(v7) = v18;
                      if ( v18 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v18);
                        WdLogGlobalForLineNumber = 2103;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL, v17);
                      WdLogGlobalForLineNumber = 2082;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v16);
                    WdLogGlobalForLineNumber = 2054;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, v15);
                  WdLogGlobalForLineNumber = 2037;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, v14);
                WdLogGlobalForLineNumber = 2020;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v7);
              WdLogGlobalForLineNumber = 2003;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v10);
            WdLogGlobalForLineNumber = 1974;
          }
        }
        goto LABEL_38;
      }
      if ( Disposition != 1 )
        goto LABEL_14;
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
      v13 = ZwSetValueKey(v21, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
      LODWORD(v7) = v13;
      if ( v13 >= 0 )
        goto LABEL_14;
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 1933;
    }
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
LABEL_40:
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString((PUNICODE_STRING)ValueData);
  if ( v21 )
    ZwClose(v21);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v7;
}
