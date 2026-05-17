/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x18006AF30
 * Callers:
 *     GetModuleFullPathName @ 0x180069508 (GetModuleFullPathName.c)
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlUnicodeToUTF8N @ 0x18006B850 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r12
  NTSTATUS v7; // ebx
  unsigned int Length; // eax
  wchar_t *Buffer; // r9
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int MaximumLength; // eax
  unsigned int v14; // ecx
  wchar_t *v15; // r9
  unsigned int v16; // r10d
  char *v17; // r11
  __int16 v18; // dx
  __int16 v19; // ax
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  int v23; // r14d
  __int16 v24; // dx
  unsigned int v25; // eax
  __int16 v27; // dx
  char *Atom; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+30h] [rbp-68h]
  unsigned int v31; // [rsp+38h] [rbp-60h]
  unsigned int v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+44h] [rbp-54h]
  int v34; // [rsp+48h] [rbp-50h]
  char *v35; // [rsp+50h] [rbp-48h]
  wchar_t *v36; // [rsp+58h] [rbp-40h]
  unsigned int v37; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v38; // [rsp+B0h] [rbp+18h]
  unsigned int v39; // [rsp+B8h] [rbp+20h] BYREF

  v38 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  v37 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v29, 0);
  if ( word_1801CEFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( Length )
      RtlUnicodeToUTF8N(0, 0, (unsigned int)&v37, (_DWORD)Buffer, Length);
  }
  else
  {
    _InterlockedOr(v29, 0);
    v10 = 0;
    v11 = Length >> 1;
    if ( word_1801CEF9C )
    {
      for ( ; v11; --v11 )
      {
        v27 = *(_WORD *)(qword_1801CEFB8 + 2LL * *Buffer++);
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
  v39 = v37 + 1;
  if ( v37 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Atom = (char *)RtlpAllocateAtom();
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
  v14 = SourceString->Length;
  v15 = SourceString->Buffer;
  v16 = (unsigned __int16)MaximumLength - 1;
  v17 = DestinationString->Buffer;
  _InterlockedOr(v29, 0);
  if ( word_1801CEFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v18 = Utf8TableInfo;
    v19 = WORD6(Utf8TableInfo);
    v20 = *((_QWORD *)&xmmword_1801CF070 + 1);
  }
  else
  {
    _InterlockedOr(v29, 0);
    v18 = GlobalRtlNlsState;
    v19 = word_1801CEF9C;
    v20 = qword_1801CEFB8;
  }
  v36 = v15;
  v31 = v16;
  v35 = v17;
  v30 = 0;
  v32 = 0;
  if ( v18 == -535 )
  {
    v34 = 0;
    if ( !v14 )
    {
      v16 = 0;
      v39 = 0;
      goto LABEL_31;
    }
    RtlUnicodeToUTF8N((_DWORD)v17, v16, (unsigned int)&v39, (_DWORD)v15, v14);
  }
  else
  {
    v21 = v14 >> 1;
    v32 = v21;
    if ( !v19 )
    {
      if ( v21 < v16 )
        v16 = v21;
      v39 = v16;
      v22 = 0;
      v30 = 0;
      while ( v22 < v16 )
      {
        v17[v22] = *(_BYTE *)(v15[v22] + v20);
        v30 = ++v22;
      }
      goto LABEL_31;
    }
    LOWORD(v37) = 0;
    v23 = (int)v17;
    while ( v21 && v16 )
    {
      v24 = *(_WORD *)(v20 + 2LL * *v15);
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
    v39 = (_DWORD)v17 - v23;
  }
  v16 = v39;
LABEL_31:
  v33 = 0;
  DestinationString->Buffer[v16] = 0;
  DestinationString->Length = v16;
  if ( v6 )
    return -2147483643;
  return v7;
}
