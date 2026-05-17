/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1800B18B0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1800AF9B0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1800D4300 (RtlUpcaseUnicodeStringToOemString.c)
 *     wcstombs @ 0x180128270 (wcstombs.c)
 *     RtlUnicodeStringToCountedOemString @ 0x18013C290 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x18013C3A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013C490 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x1800B1E90 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r9d
  ULONG v5; // r8d
  __int64 v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v7, 0);
  if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(0, 0, (_DWORD)BytesInMultiByteString, (_DWORD)UnicodeString, BytesInUnicodeString);
      return 0;
    }
    *BytesInMultiByteString = 0;
    return 0;
  }
  else
  {
    _InterlockedOr(v7, 0);
    v3 = 0;
    if ( !word_1801CCF9C )
    {
      v3 = BytesInUnicodeString >> 1;
LABEL_5:
      *BytesInMultiByteString = v3;
      return 0;
    }
    v5 = BytesInUnicodeString >> 1;
    if ( !v5 )
      goto LABEL_5;
    do
    {
      v6 = *UnicodeString++;
      v3 += (HIBYTE(*(_WORD *)(qword_1801CCFB8 + 2 * v6)) != 0) + 1;
      --v5;
    }
    while ( v5 );
    *BytesInMultiByteString = v3;
    return 0;
  }
}
