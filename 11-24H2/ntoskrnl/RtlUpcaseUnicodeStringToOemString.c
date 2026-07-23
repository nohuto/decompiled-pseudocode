/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x140A66D10
 * Callers:
 *     DifRtlUpcaseUnicodeStringToOemStringWrapper @ 0x140639300 (DifRtlUpcaseUnicodeStringToOemStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1404379D0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToOemN @ 0x140904C60 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x140904D20 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToMultiByteSize @ 0x140905100 (RtlUnicodeToMultiByteSize.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // edx
  unsigned __int16 *p_MaximumLength; // r12
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG v11; // ecx
  ULONG BytesInOemString; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v13; // [rsp+90h] [rbp+18h]

  v13 = AllocateDestinationString;
  BytesInOemString = 0;
  RtlUnicodeToMultiByteSize(&BytesInOemString, SourceString->Buffer, SourceString->Length);
  v6 = BytesInOemString + 1;
  BytesInOemString = v6;
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
    v10 = RtlUpcaseUnicodeToOemN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInOemString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInOemString;
      DestinationString->Length = BytesInOemString;
      (*p_Buffer)[v11] = 0;
      if ( !RtlpDidUnicodeToOemWork(&DestinationString->Length, (__int64)SourceString) )
        v10 = -1073741470;
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
