/*
 * XREFs of DpiAppendNumberToString @ 0x1403F25CC
 * Callers:
 *     DpiGdoDestroyGdiObjects @ 0x140255D5C (DpiGdoDestroyGdiObjects.c)
 *     DpiPdoHandleQueryId @ 0x1403D9970 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x1403F1B3C (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  wchar_t *Pool2; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  wchar_t *v8; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1953656900LL);
  String.Buffer = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, String.MaximumLength);
    v6 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v6 >= 0 )
    {
      v7 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v7;
      Destination->Length = 0;
      v8 = (wchar_t *)ExAllocatePool2(256LL, v7, 1953656900LL);
      Destination->Buffer = v8;
      if ( v8 )
      {
        memset(v8, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 329;
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 303;
  }
  return (unsigned int)v6;
}
