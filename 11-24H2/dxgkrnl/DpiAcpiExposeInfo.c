/*
 * XREFs of DpiAcpiExposeInfo @ 0x140251594
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1403FF92C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140251AD4 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  _DWORD *v4; // rax
  CHAR *Pool2; // rax
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v16[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v17; // [rsp+E0h] [rbp+27h]
  wchar_t v18; // [rsp+E4h] [rbp+2Bh]

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&Source.Length = 65537LL;
  Source.Buffer = (PCHAR)File;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList(v1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD **)(v1 + 3424);
    if ( *v4 == 1198089537 && v4[1] )
    {
      Destination.MaximumLength = 4096;
      Pool2 = (CHAR *)ExAllocatePool2(256LL, 4096LL, 1953656900LL);
      Destination.Buffer = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, Destination.MaximumLength);
        v6 = *(_QWORD *)(v1 + 3424);
        v7 = 1;
        v8 = v6 + 8;
        if ( *(_DWORD *)(v6 + 4) > 1u )
        {
          do
          {
            v8 += *(unsigned int *)(v8 + 4) + 8LL;
            if ( (*(_BYTE *)v8 & 1) == 0 )
            {
              DestinationString = 0LL;
              RtlInitAnsiString(&DestinationString, (PCSZ)(v8 + 8));
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v7;
          }
          while ( v7 < *(_DWORD *)(*(_QWORD *)(v1 + 3424) + 4LL) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v3;
        if ( Destination.Length )
        {
          v17 = *(_DWORD *)L"FO";
          v18 = aDisplayAcpiInf[18];
          v14[0] = 2490404LL;
          v14[1] = v16;
          v16[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v16[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v3 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
            ZwClose(KeyHandle);
            if ( v3 >= 0 )
            {
              v3 = ZwSetValueKey(
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
        v3 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1537;
      }
    }
    else
    {
      v3 = -1072431089;
    }
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v3;
  }
  return result;
}
