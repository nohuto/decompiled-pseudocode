/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x180038AD0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x1801230C0 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x180136880 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // rdi
  unsigned __int16 DBCSCodePage; // dx
  unsigned __int16 *DBCSOffsets; // rsi
  ULONG v11; // eax
  PWCH v12; // rbx
  ULONG v13; // r11d
  unsigned __int16 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  NTSTATUS result; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG *p_BytesInMultiByteString; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v21, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    CodePage = LOWORD(Utf8TableInfo.m512_f32[0]);
    p_MultiByteTable = (unsigned __int16 **)&Utf8TableInfo.m512_f32[8];
    DBCSCodePage = LOWORD(Utf8TableInfo.m512_f32[3]);
    DBCSOffsets = *(unsigned __int16 **)&Utf8TableInfo.m512_f32[14];
  }
  else
  {
    _InterlockedOr(v21, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
  }
  v11 = BytesInMultiByteString;
  v12 = UnicodeString;
  if ( CodePage == 0xFDE9 )
  {
    p_BytesInMultiByteString = &BytesInMultiByteString;
    if ( BytesInUnicodeString )
      p_BytesInMultiByteString = BytesInUnicodeString;
    if ( BytesInMultiByteString )
    {
      RtlUTF8ToUnicodeN(
        UnicodeString,
        MaxBytesInUnicodeString,
        p_BytesInMultiByteString,
        MultiByteString,
        BytesInMultiByteString);
      return 0;
    }
    result = 0;
    *p_BytesInMultiByteString = 0;
  }
  else
  {
    v13 = MaxBytesInUnicodeString >> 1;
    if ( !DBCSCodePage )
    {
      if ( v13 < BytesInMultiByteString )
        v11 = v13;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v11;
      v14 = *p_MultiByteTable;
      if ( v11 )
      {
        v15 = v11;
        do
        {
          v16 = *(unsigned __int8 *)MultiByteString;
          ++UnicodeString;
          ++MultiByteString;
          *(UnicodeString - 1) = v14[v16];
          --v15;
        }
        while ( v15 );
      }
      return 0;
    }
    while ( v13 && v11 )
    {
      --v13;
      --v11;
      v18 = *(unsigned __int8 *)MultiByteString;
      v19 = DBCSOffsets[v18];
      if ( (_WORD)v19 )
      {
        if ( !v11 )
        {
          *v12 = 0;
          LODWORD(v12) = (_DWORD)v12 + 2;
          break;
        }
        --v11;
        *v12++ = DBCSOffsets[v19 + *((unsigned __int8 *)MultiByteString + 1)];
        MultiByteString += 2;
      }
      else
      {
        *v12++ = (*p_MultiByteTable)[v18];
        ++MultiByteString;
      }
    }
    if ( !BytesInUnicodeString )
      return 0;
    *BytesInUnicodeString = (_DWORD)v12 - (_DWORD)UnicodeString;
    return 0;
  }
  return result;
}
