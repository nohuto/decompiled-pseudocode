/*
 * XREFs of DpiAppendNumberToString @ 0x1403F87DC
 * Callers:
 *     DpiGdoDestroyGdiObjects @ 0x14024EF2C (DpiGdoDestroyGdiObjects.c)
 *     DpiPdoHandleQueryId @ 0x1403E2E00 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x1403F7D4C (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  __int64 v5; // r9
  wchar_t *Pool2; // rax
  NTSTATUS v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  wchar_t *v10; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1953656900LL, v5);
  String.Buffer = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, String.MaximumLength);
    v7 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v7 >= 0 )
    {
      v9 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v9;
      Destination->Length = 0;
      v10 = (wchar_t *)ExAllocatePool2(256LL, v9, 1953656900LL, v8);
      Destination->Buffer = v10;
      if ( v10 )
      {
        memset(v10, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v7 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 329;
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v7 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 303;
  }
  return (unsigned int)v7;
}
