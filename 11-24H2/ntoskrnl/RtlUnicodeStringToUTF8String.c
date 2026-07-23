/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x140787370
 * Callers:
 *     <none>
 * Callees:
 *     CountUnicodeToUTF8 @ 0x140445FBC (CountUnicodeToUTF8.c)
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int Length; // edx
  char v7; // r14
  NTSTATUS result; // eax
  ULONG v9; // ebx
  char *Pool2; // rax
  unsigned __int16 *p_MaximumLength; // rsi
  ULONG MaximumLength; // ecx
  int v13; // ebx
  unsigned __int16 v14; // r8
  ULONG UTF8StringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  Length = SourceString->Length;
  UTF8StringActualByteCount = 0;
  v7 = 0;
  result = CountUnicodeToUTF8((unsigned int *)SourceString->Buffer, Length, &UTF8StringActualByteCount);
  if ( result >= 0 )
  {
    v9 = UTF8StringActualByteCount + 1;
    UTF8StringActualByteCount = v9;
    if ( v9 > 0xFFFF )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL, v9, 0x67727453u);
      DestinationString->Buffer = Pool2;
      if ( !Pool2 )
        return -1073741801;
      p_MaximumLength = &DestinationString->MaximumLength;
      LOWORD(MaximumLength) = v9;
      DestinationString->MaximumLength = v9;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      MaximumLength = DestinationString->MaximumLength;
      if ( v9 > MaximumLength )
      {
        if ( !(_WORD)MaximumLength )
          return -2147483643;
        v7 = 1;
      }
    }
    v13 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength - 1,
            &UTF8StringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v13 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    else
    {
      v14 = UTF8StringActualByteCount;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
      DestinationString->Length = v14;
      if ( v7 )
        return -2147483643;
    }
    return v13;
  }
  return result;
}
