/*
 * XREFs of DpiAcpiExposeInfo @ 0x14024A764
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x14040701C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x14024ACA4 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // r9
  NTSTATUS v4; // ebx
  _DWORD *v5; // rax
  CHAR *Pool2; // rax
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v17[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v18; // [rsp+E0h] [rbp+27h]
  wchar_t v19; // [rsp+E4h] [rbp+2Bh]

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.Length = 65537LL;
  Source.Buffer = (PCHAR)File;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList(v1);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = *(_DWORD **)(v1 + 3424);
    if ( *v5 == 1198089537 && v5[1] )
    {
      Destination.MaximumLength = 4096;
      Pool2 = (CHAR *)ExAllocatePool2(256LL, 4096LL, 1953656900LL, v3);
      Destination.Buffer = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, Destination.MaximumLength);
        v7 = *(_QWORD *)(v1 + 3424);
        v8 = 1;
        v9 = v7 + 8;
        if ( *(_DWORD *)(v7 + 4) > 1u )
        {
          do
          {
            v9 += *(unsigned int *)(v9 + 4) + 8LL;
            if ( (*(_BYTE *)v9 & 1) == 0 )
            {
              DestinationString = 0LL;
              RtlInitAnsiString(&DestinationString, (PCSZ)(v9 + 8));
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v8;
          }
          while ( v8 < *(_DWORD *)(*(_QWORD *)(v1 + 3424) + 4LL) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v4;
        if ( Destination.Length )
        {
          v18 = *(_DWORD *)L"FO";
          v19 = aDisplayAcpiInf[18];
          v15[0] = 2490404LL;
          v15[1] = v17;
          v17[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v17[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v4 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v4 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v4 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
            ZwClose(KeyHandle);
            if ( v4 >= 0 )
            {
              v4 = ZwSetValueKey(
                     Handle,
                     (PUNICODE_STRING)&DestinationString,
                     0,
                     3u,
                     Destination.Buffer,
                     Destination.Length);
              ZwClose(Handle);
            }
          }
        }
      }
      else
      {
        v4 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1537;
      }
    }
    else
    {
      v4 = -1072431089;
    }
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v4;
  }
  return result;
}
