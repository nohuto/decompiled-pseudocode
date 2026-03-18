/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x1407830D8
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x1407830C0 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  wchar_t *Buffer; // rdi
  NTSTATUS appended; // ebx
  __int64 v8; // r8
  UNICODE_STRING Destination; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  Destination.MaximumLength = 112;
  Source = 0LL;
  UnicodeString = 0LL;
  if ( a3 )
    Destination.MaximumLength = 190;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000B3A0);
    if ( appended < 0 )
      goto LABEL_14;
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    if ( appended < 0 )
      goto LABEL_14;
    if ( a3 )
    {
      LOBYTE(v8) = 1;
      appended = RtlStringFromGUIDEx(a3, &Source, v8);
      if ( appended < 0 )
        goto LABEL_14;
      appended = RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( appended < 0 )
        goto LABEL_14;
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended < 0 )
        goto LABEL_14;
    }
    LOBYTE(v8) = 1;
    appended = RtlStringFromGUIDEx(a2, &UnicodeString, v8);
    if ( appended < 0 || (appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString), appended < 0) )
    {
LABEL_14:
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a1 = Destination;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&Source);
  RtlFreeAnsiString(&UnicodeString);
  if ( Buffer )
    ExFreePool(Buffer);
  return (unsigned int)appended;
}
