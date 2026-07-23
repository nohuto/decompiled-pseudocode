/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x1407780E0
 * Callers:
 *     PiGetDefaultMessageString @ 0x1409B00D4 (PiGetDefaultMessageString.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x14047A544 (CountUTF8ToUnicode.c)
 *     RtlUTF8ToUnicodeN @ 0x1408E7640 (RtlUTF8ToUnicodeN.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int Length; // edx
  NTSTATUS result; // eax
  ULONG v8; // edi
  wchar_t *Pool2; // rax
  ULONG MaximumLength; // ecx
  int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  Length = SourceString->Length;
  UnicodeStringActualByteCount = 0;
  result = CountUTF8ToUnicode(SourceString->Buffer, Length, &UnicodeStringActualByteCount);
  if ( result >= 0 )
  {
    v8 = UnicodeStringActualByteCount + 2;
    UnicodeStringActualByteCount = v8;
    if ( v8 > 0xFFFE )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      DestinationString->Buffer = Pool2;
      if ( !Pool2 )
        return -1073741801;
      DestinationString->MaximumLength = v8;
      LOWORD(MaximumLength) = v8;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v8 > MaximumLength )
        return -2147483643;
    }
    v11 = RtlUTF8ToUnicodeN(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength,
            &UnicodeStringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
      return v11;
    }
    v12 = UnicodeStringActualByteCount;
    v13 = DestinationString->MaximumLength;
    DestinationString->Length = UnicodeStringActualByteCount;
    if ( (unsigned int)v12 < v13 )
    {
      v11 = 0;
      DestinationString->Buffer[v12 >> 1] = 0;
      return v11;
    }
    return -2147483643;
  }
  return result;
}
