/*
 * XREFs of RtlUpperString @ 0x1409056A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // ebp
  char *Buffer; // rsi
  char *v4; // rbx
  char v5; // di
  char v6; // cl

  Length = SourceString->Length;
  Buffer = DestinationString->Buffer;
  v4 = SourceString->Buffer;
  if ( (unsigned __int16)Length > DestinationString->MaximumLength )
    Length = DestinationString->MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
  {
    v5 = *v4;
    RtlpIsUtf8Process(0LL);
    ++Buffer;
    v6 = v5 ^ 0x20;
    ++v4;
    if ( (unsigned __int8)(v5 - 97) > 0x19u )
      v6 = v5;
    *(Buffer - 1) = v6;
  }
}
