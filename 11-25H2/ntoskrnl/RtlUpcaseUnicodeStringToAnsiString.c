/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x14076DEB0
 * Callers:
 *     DifRtlUpcaseUnicodeStringToAnsiStringWrapper @ 0x14062EA80 (DifRtlUpcaseUnicodeStringToAnsiStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140441300 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToMultiByteSize @ 0x1408E66F0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1408E6D40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // edx
  NTSTATUS result; // eax
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rdi
  int v10; // ebx
  unsigned __int16 v11; // dx
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v13; // [rsp+80h] [rbp+18h]

  v13 = AllocateDestinationString;
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, SourceString->Buffer, SourceString->Length);
  v6 = BytesInMultiByteString + 1;
  BytesInMultiByteString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToMultiByteN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInMultiByteString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInMultiByteString;
      (*p_Buffer)[BytesInMultiByteString] = 0;
      DestinationString->Length = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v10;
  }
  return result;
}
