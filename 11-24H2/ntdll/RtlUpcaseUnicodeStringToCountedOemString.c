/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x18013A680
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x180143C60 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180038890 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToMultiByteSize @ 0x18007E150 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800CF780 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800CF7F4 (RtlpDidUnicodeToOemWork.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rsi
  int v9; // ebx
  ULONG BytesInOemString; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v11; // [rsp+90h] [rbp+18h]

  v11 = AllocateDestinationString;
  BytesInOemString = 0;
  RtlUnicodeToMultiByteSize(&BytesInOemString, SourceString->Buffer, SourceString->Length);
  if ( BytesInOemString )
  {
    if ( BytesInOemString <= 0xFFFF )
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = &DestinationString->Buffer;
      result = AllocateOrValidateCharStringBuffer(
                 AllocateDestinationString,
                 BytesInOemString,
                 (__int64 *)&DestinationString->Buffer,
                 &DestinationString->MaximumLength);
      if ( result >= 0 )
      {
        v9 = RtlUpcaseUnicodeToOemN(
               *p_Buffer,
               *p_MaximumLength,
               &BytesInOemString,
               SourceString->Buffer,
               SourceString->Length);
        if ( v9 >= 0 )
        {
          DestinationString->Length = BytesInOemString;
          if ( !RtlpDidUnicodeToOemWork((__int64)DestinationString) )
            v9 = -1073741470;
        }
        if ( v9 < 0 )
        {
          if ( AllocateDestinationString )
          {
            RtlpSysVolFree(*p_Buffer);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        return v9;
      }
    }
    else
    {
      return -1073741584;
    }
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  return result;
}
