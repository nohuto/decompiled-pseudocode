/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x180139DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18004AF70 (RtlMultiByteToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  ULONG v6; // edx
  ULONG *v7; // r8
  const CHAR *v8; // r9
  ULONG v9; // r10d
  WCHAR *v10; // r11
  unsigned __int16 *MultiByteTable; // r14
  __int64 v13; // r15
  ULONG v14; // edx
  ULONG v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int16 *DBCSOffsets; // r12
  int v19; // ebp
  ULONG v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rsi
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF

  *pdwSpecialChar = 0;
  if ( RtlpIsUtf8Process() )
  {
    while ( v9 < BytesInMultiByteString )
    {
      if ( v8[v9] < 0x20u )
      {
        *pdwSpecialChar = 1;
        return RtlMultiByteToUnicodeN(v10, v6, v7, v8, BytesInMultiByteString);
      }
      ++v9;
    }
    return RtlMultiByteToUnicodeN(v10, v6, v7, v8, BytesInMultiByteString);
  }
  else
  {
    _InterlockedOr(v23, v9);
    MultiByteTable = GlobalRtlNlsState.MultiByteTable;
    v13 = qword_1801CF020;
    v14 = v6 >> 1;
    if ( GlobalRtlNlsState.DBCSCodePage == (_WORD)v9 )
    {
      v15 = BytesInMultiByteString;
      if ( v14 < BytesInMultiByteString )
        v15 = v14;
      if ( v7 )
        *v7 = 2 * v15;
      if ( v15 )
      {
        v16 = v15;
        do
        {
          if ( *v8 < 0x20u )
            *pdwSpecialChar = 1;
          v17 = *(unsigned __int8 *)v8++;
          *v10++ = MultiByteTable[v17];
          --v16;
        }
        while ( v16 );
      }
    }
    else
    {
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
      v19 = (int)v10;
      v20 = BytesInMultiByteString;
      while ( v14 && v20 )
      {
        v21 = *(unsigned __int8 *)v8;
        --v14;
        --v20;
        v22 = *(unsigned __int16 *)(v13 + 2 * v21);
        if ( (_WORD)v22 )
        {
          if ( !v20 )
          {
            *v10 = v9;
            LODWORD(v10) = (_DWORD)v10 + 2;
            break;
          }
          ++v8;
          --v20;
          *v10 = DBCSOffsets[v22 + *(unsigned __int8 *)v8];
        }
        else
        {
          if ( (unsigned __int8)v21 < 0x20u )
            *pdwSpecialChar = 1;
          *v10 = MultiByteTable[*(unsigned __int8 *)v8];
        }
        ++v10;
        ++v8;
      }
      if ( v7 )
        *v7 = (_DWORD)v10 - v19;
    }
    return 0;
  }
}
