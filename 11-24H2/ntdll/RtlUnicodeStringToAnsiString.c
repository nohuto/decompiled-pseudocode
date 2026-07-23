/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x18007DE10
 * Callers:
 *     GetModuleFullPathName @ 0x18007C3E8 (GetModuleFullPathName.c)
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlUnicodeToUTF8N @ 0x18007E730 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r12
  NTSTATUS v7; // ebx
  ULONG Length; // eax
  wchar_t *Buffer; // r9
  ULONG v10; // r8d
  ULONG v11; // eax
  ULONG v12; // edi
  ULONG MaximumLength; // eax
  ULONG UnicodeStringByteCount; // ecx
  wchar_t *v15; // r9
  unsigned int v16; // r10d
  char *v17; // r11
  unsigned __int16 CodePage; // dx
  unsigned __int16 DBCSCodePage; // ax
  _BYTE *WideCharTable; // rdi
  ULONG v21; // ecx
  unsigned int v22; // r8d
  int v23; // r14d
  __int16 v24; // dx
  unsigned int v25; // eax
  __int16 v27; // dx
  char *Atom; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+30h] [rbp-68h]
  unsigned int v31; // [rsp+38h] [rbp-60h]
  ULONG v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+44h] [rbp-54h]
  int v34; // [rsp+48h] [rbp-50h]
  char *v35; // [rsp+50h] [rbp-48h]
  wchar_t *v36; // [rsp+58h] [rbp-40h]
  ULONG v37; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v38; // [rsp+B0h] [rbp+18h]
  ULONG UTF8StringActualByteCount; // [rsp+B8h] [rbp+20h] BYREF

  v38 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  v37 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v29, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( Length )
      RtlUnicodeToUTF8N(0LL, 0, &v37, Buffer, Length);
  }
  else
  {
    _InterlockedOr(v29, 0);
    v10 = 0;
    v11 = Length >> 1;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      for ( ; v11; --v11 )
      {
        v27 = *((_WORD *)GlobalRtlNlsState.WideCharTable + *Buffer++);
        v10 += (HIBYTE(v27) != 0) + 1;
      }
      v37 = v10;
    }
    else
    {
      v37 = v11;
    }
  }
  v12 = v37 + 1;
  UTF8StringActualByteCount = v37 + 1;
  if ( v37 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Atom = (char *)RtlpAllocateAtom(v12);
    DestinationString->Buffer = Atom;
    if ( !Atom )
      return -1073741801;
    DestinationString->MaximumLength = v12;
    LOWORD(MaximumLength) = v12;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v12 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v33 = 0;
  UnicodeStringByteCount = SourceString->Length;
  v15 = SourceString->Buffer;
  v16 = (unsigned __int16)MaximumLength - 1;
  v17 = DestinationString->Buffer;
  _InterlockedOr(v29, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    CodePage = LOWORD(Utf8TableInfo.m512_f32[0]);
    DBCSCodePage = LOWORD(Utf8TableInfo.m512_f32[3]);
    WideCharTable = *(_BYTE **)&Utf8TableInfo.m512_f32[10];
  }
  else
  {
    _InterlockedOr(v29, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    WideCharTable = GlobalRtlNlsState.WideCharTable;
  }
  v36 = v15;
  v31 = v16;
  v35 = v17;
  v30 = 0;
  v32 = 0;
  if ( CodePage == 0xFDE9 )
  {
    v34 = 0;
    if ( !UnicodeStringByteCount )
    {
      v16 = 0;
      UTF8StringActualByteCount = 0;
      goto LABEL_31;
    }
    RtlUnicodeToUTF8N(v17, v16, &UTF8StringActualByteCount, v15, UnicodeStringByteCount);
  }
  else
  {
    v21 = UnicodeStringByteCount >> 1;
    v32 = v21;
    if ( !DBCSCodePage )
    {
      if ( v21 < v16 )
        v16 = v21;
      UTF8StringActualByteCount = v16;
      v22 = 0;
      v30 = 0;
      while ( v22 < v16 )
      {
        v17[v22] = WideCharTable[v15[v22]];
        v30 = ++v22;
      }
      goto LABEL_31;
    }
    LOWORD(v37) = 0;
    v23 = (int)v17;
    while ( v21 && v16 )
    {
      v24 = *(_WORD *)&WideCharTable[2 * *v15];
      LOWORD(v37) = v24;
      v36 = ++v15;
      if ( HIBYTE(v24) )
      {
        v25 = v16--;
        v31 = v16;
        if ( v25 < 2 )
          break;
        *v17++ = HIBYTE(v24);
        v35 = v17;
      }
      *v17++ = v24;
      v35 = v17;
      v31 = --v16;
      v32 = --v21;
    }
    UTF8StringActualByteCount = (_DWORD)v17 - v23;
  }
  v16 = UTF8StringActualByteCount;
LABEL_31:
  v33 = 0;
  DestinationString->Buffer[v16] = 0;
  DestinationString->Length = v16;
  if ( v6 )
    return -2147483643;
  return v7;
}
