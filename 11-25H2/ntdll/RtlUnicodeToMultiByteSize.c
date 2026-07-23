/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x18006B270
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180069370 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1800D75B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     wcstombs @ 0x180129D50 (wcstombs.c)
 *     RtlUnicodeStringToCountedOemString @ 0x18013D9C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x18013DAD0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013DBC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18006B850 (RtlUnicodeToUTF8N.c)
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
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
      return 0;
    }
    *BytesInMultiByteString = 0;
    return 0;
  }
  else
  {
    _InterlockedOr(v7, 0);
    v3 = 0;
    if ( !GlobalRtlNlsState.DBCSCodePage )
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
      v3 += (HIBYTE(*((_WORD *)GlobalRtlNlsState.WideCharTable + v6)) != 0) + 1;
      --v5;
    }
    while ( v5 );
    *BytesInMultiByteString = v3;
    return 0;
  }
}
