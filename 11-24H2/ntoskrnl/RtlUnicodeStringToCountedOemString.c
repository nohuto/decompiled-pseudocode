/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x140907190
 * Callers:
 *     DifRtlUnicodeStringToCountedOemStringWrapper @ 0x140638D00 (DifRtlUnicodeStringToCountedOemStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1404379D0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpDidUnicodeToOemWork @ 0x140904D20 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToMultiByteSize @ 0x140905100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToOemN @ 0x1409072A0 (RtlUnicodeToOemN.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rsi
  NTSTATUS result; // eax
  int v9; // ebx
  ULONG BytesInOemString; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v11; // [rsp+90h] [rbp+18h]

  v11 = AllocateDestinationString;
  BytesInOemString = 0;
  RtlUnicodeToMultiByteSize(&BytesInOemString, SourceString->Buffer, SourceString->Length);
  if ( BytesInOemString )
  {
    if ( BytesInOemString > 0xFFFF )
    {
      return -1073741584;
    }
    else
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
        v9 = RtlUnicodeToOemN(
               *p_Buffer,
               *p_MaximumLength,
               &BytesInOemString,
               SourceString->Buffer,
               SourceString->Length);
        if ( v9 >= 0 )
        {
          DestinationString->Length = BytesInOemString;
          if ( !RtlpDidUnicodeToOemWork(&DestinationString->Length, (__int64)SourceString) )
            v9 = -1073741470;
        }
        if ( v9 < 0 )
        {
          if ( AllocateDestinationString )
          {
            ExFreePool(*p_Buffer);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        return v9;
      }
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
