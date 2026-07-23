/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1800CA890
 * Callers:
 *     toupper @ 0x180129050 (toupper.c)
 *     _mbstrlen @ 0x18012CF58 (_mbstrlen.c)
 *     mbtowc @ 0x18012DEE0 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x180130644 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  int v2; // edx
  const CHAR *v3; // r9
  UCHAR v4; // al
  ULONG UTF8StringByteCount; // edi
  unsigned __int16 CodePage; // ax
  unsigned __int16 **p_MultiByteTable; // rsi
  unsigned __int16 DBCSCodePage; // cx
  unsigned __int16 *MultiByteTable; // r11
  unsigned __int16 *DBCSOffsets; // r14
  WCHAR *p_UnicodeStringDestination; // r8
  ULONG v12; // r10d
  __int64 v13; // r8
  WCHAR *v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 *v19; // r9
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  _InterlockedOr(v20, 0);
  v2 = 1;
  if ( CodePageTable.CodePage != 0xFDE9 && GlobalRtlNlsState.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v20, 0);
    v3 = (const CHAR *)*SourceCharacter;
    if ( *(_WORD *)(qword_1801CF020 + 2LL * **SourceCharacter) )
    {
      UTF8StringByteCount = 2;
      goto LABEL_6;
    }
    goto LABEL_18;
  }
  v3 = (const CHAR *)*SourceCharacter;
  v4 = **SourceCharacter;
  if ( v4 < 0xC0u )
  {
LABEL_18:
    UTF8StringByteCount = 1;
    goto LABEL_6;
  }
  if ( v4 < 0xE0u )
  {
    UTF8StringByteCount = 2;
  }
  else if ( v4 >= 0xF0u )
  {
    UTF8StringByteCount = 1;
    if ( v4 < 0xF8u )
      UTF8StringByteCount = 4;
  }
  else
  {
    UTF8StringByteCount = 3;
  }
LABEL_6:
  _InterlockedOr(v20, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    CodePage = LOWORD(Utf8TableInfo.m512_f32[0]);
    p_MultiByteTable = (unsigned __int16 **)&Utf8TableInfo.m512_f32[8];
    DBCSCodePage = LOWORD(Utf8TableInfo.m512_f32[3]);
    MultiByteTable = *(unsigned __int16 **)&Utf8TableInfo.m512_f32[8];
    DBCSOffsets = *(unsigned __int16 **)&Utf8TableInfo.m512_f32[14];
  }
  else
  {
    _InterlockedOr(v20, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    MultiByteTable = GlobalRtlNlsState.MultiByteTable;
    DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v12 = UTF8StringByteCount;
  if ( CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
  }
  else if ( DBCSCodePage )
  {
    while ( v2 && v12 )
    {
      --v2;
      --v12;
      v17 = *(unsigned __int8 *)v3;
      v18 = DBCSOffsets[v17];
      if ( (_WORD)v18 )
      {
        if ( !v12 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v19 = (unsigned __int8 *)(v3 + 1);
        --v12;
        *p_UnicodeStringDestination++ = DBCSOffsets[*v19 + v18];
        v3 = (const CHAR *)(v19 + 1);
      }
      else
      {
        *p_UnicodeStringDestination++ = (*p_MultiByteTable)[v17];
        ++v3;
      }
    }
  }
  else
  {
    v13 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v13 = 1LL;
    v14 = &UnicodeStringDestination;
    do
    {
      v15 = *(unsigned __int8 *)v3;
      ++v14;
      ++v3;
      *(v14 - 1) = MultiByteTable[v15];
      --v13;
    }
    while ( v13 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
