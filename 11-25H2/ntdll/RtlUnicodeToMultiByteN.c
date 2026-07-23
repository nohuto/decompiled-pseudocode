/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x18006BDF0
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x18008330C (EtwpAddDebugInfoEvents.c)
 *     wcstombs @ 0x180129D50 (wcstombs.c)
 *     _wctomb_s_l @ 0x18012DDB8 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x180130698 (_safecrt_wctomb_s.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18006B850 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __cdecl RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  unsigned __int16 CodePage; // ax
  void **p_WideCharTable; // rbx
  unsigned __int16 DBCSCodePage; // cx
  _WORD *WideCharTable; // rsi
  PCHAR v11; // r8
  ULONG v12; // eax
  _BYTE *v13; // r11
  NTSTATUS result; // eax
  __int64 v15; // rcx
  __int16 v16; // di
  __int64 v17; // r8
  __int64 v18; // rax
  ULONG *v19; // r8
  ULONG v20; // ecx
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF
  char v22; // [rsp+48h] [rbp+10h] BYREF

  _InterlockedOr(v21, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    CodePage = Utf8TableInfo;
    p_WideCharTable = (void **)&xmmword_1801CF070 + 1;
    DBCSCodePage = WORD6(Utf8TableInfo);
    WideCharTable = (_WORD *)*((_QWORD *)&xmmword_1801CF070 + 1);
  }
  else
  {
    _InterlockedOr(v21, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    p_WideCharTable = &GlobalRtlNlsState.WideCharTable;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    WideCharTable = GlobalRtlNlsState.WideCharTable;
  }
  v11 = MultiByteString;
  if ( CodePage == 0xFDE9 )
  {
    v19 = (ULONG *)&v22;
    if ( BytesInMultiByteString )
      v19 = BytesInMultiByteString;
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v19, UnicodeString, BytesInUnicodeString);
      return 0;
    }
    result = 0;
    *v19 = 0;
  }
  else
  {
    v12 = BytesInUnicodeString >> 1;
    if ( !DBCSCodePage )
    {
      if ( v12 < MaxBytesInMultiByteString )
        MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = MaxBytesInMultiByteString;
      v13 = *p_WideCharTable;
      if ( MaxBytesInMultiByteString )
      {
        v17 = MaxBytesInMultiByteString;
        do
        {
          v18 = *UnicodeString;
          ++MultiByteString;
          ++UnicodeString;
          *(MultiByteString - 1) = v13[v18];
          --v17;
        }
        while ( v17 );
      }
      return 0;
    }
    if ( v12 )
    {
      while ( MaxBytesInMultiByteString )
      {
        v15 = *UnicodeString++;
        v16 = WideCharTable[v15];
        if ( HIBYTE(v16) )
        {
          v20 = MaxBytesInMultiByteString--;
          if ( v20 < 2 )
            break;
          *v11++ = HIBYTE(v16);
        }
        *v11 = v16;
        --MaxBytesInMultiByteString;
        ++v11;
        if ( !--v12 )
          break;
      }
    }
    if ( !BytesInMultiByteString )
      return 0;
    *BytesInMultiByteString = (_DWORD)v11 - (_DWORD)MultiByteString;
    return 0;
  }
  return result;
}
