/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x1409073C0
 * Callers:
 *     DifRtlOemStringToCountedUnicodeStringWrapper @ 0x140638370 (DifRtlOemStringToCountedUnicodeStringWrapper.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140423340 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlMultiByteToUnicodeSize @ 0x140904BB0 (RtlMultiByteToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x140907320 (RtlOemToUnicodeN.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 *p_MaximumLength; // r14
  wchar_t **p_Buffer; // rsi
  NTSTATUS result; // eax
  int v9; // edi
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v11; // [rsp+80h] [rbp+18h]

  v11 = AllocateDestinationString;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, SourceString->Buffer, SourceString->Length);
  if ( BytesInUnicodeString )
  {
    if ( BytesInUnicodeString > 0xFFFE )
    {
      return -1073741584;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = &DestinationString->Buffer;
      result = AllocateOrValidateUnicodeStringBuffer(
                 AllocateDestinationString,
                 BytesInUnicodeString,
                 (__int64 *)&DestinationString->Buffer,
                 &DestinationString->MaximumLength);
      if ( result >= 0 )
      {
        v9 = RtlOemToUnicodeN(
               *p_Buffer,
               *p_MaximumLength,
               &BytesInUnicodeString,
               SourceString->Buffer,
               SourceString->Length);
        if ( v9 < 0 )
        {
          if ( AllocateDestinationString )
          {
            ExFreePool(*p_Buffer);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        else
        {
          DestinationString->Length = BytesInUnicodeString;
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
