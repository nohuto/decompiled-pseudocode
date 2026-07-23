/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x1800CF540
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x1800CF450 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // r9d
  __int64 v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v7, 0);
  if ( CodePageTable.CodePage != 0xFDE9 && GlobalRtlNlsState.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v7, 0);
    v3 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( BytesInMultiByteString-- )
      {
        v6 = *(unsigned __int8 *)MultiByteString++;
        if ( *(_WORD *)(qword_1801CC020 + 2 * v6) )
        {
          if ( !BytesInMultiByteString )
          {
            *BytesInUnicodeString = v3 + 2;
            return 0;
          }
          --BytesInMultiByteString;
          ++MultiByteString;
        }
        v3 += 2;
      }
    }
    else
    {
      v3 = 2 * BytesInMultiByteString;
    }
    *BytesInUnicodeString = v3;
    return 0;
  }
  if ( BytesInMultiByteString )
  {
    RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    return 0;
  }
  *BytesInUnicodeString = 0;
  return 0;
}
