/*
 * XREFs of RtlFindCharInUnicodeString @ 0x1800A6730
 * Callers:
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180070DA0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180073190 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x1800DB530 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  __int64 v4; // r12
  char v6; // r10
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  wchar_t *Buffer; // r11
  wchar_t *v13; // r14
  __int64 v14; // r9
  unsigned __int16 v15; // bp
  int v16; // r15d
  _BOOL8 v17; // rsi
  wchar_t v18; // ax
  int v19; // r10d
  USHORT v20; // r9
  __int64 v22; // r13
  __int16 v23; // di
  int v24; // r10d
  __int64 v25; // r11
  int v26; // r10d
  wchar_t v27; // dx
  unsigned __int16 v28; // cx
  __int64 v29; // r13
  signed __int64 v30; // r14
  _WORD *v31; // rdi
  __int64 v32; // r11
  int v33; // r10d
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  unsigned __int16 v36; // [rsp+22h] [rbp-96h]
  _WORD v37[32]; // [rsp+30h] [rbp-88h] BYREF

  LODWORD(v4) = 0;
  v6 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !NonInclusivePrefixLength )
    return -1073741811;
  if ( StringToSearch )
  {
    Length = StringToSearch->Length;
    if ( (StringToSearch->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = StringToSearch->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  if ( CharSet )
  {
    v9 = CharSet->Length;
    if ( (CharSet->Length & 1) != 0 )
      return -1073741811;
    v10 = CharSet->MaximumLength;
    if ( (v10 & 1) != 0 || v9 > v10 || v10 == 0xFFFF || !CharSet->Buffer && (v9 || v10) )
      return -1073741811;
  }
  v11 = StringToSearch->Length;
  Buffer = StringToSearch->Buffer;
  v14 = StringToSearch->Length;
  v13 = CharSet->Buffer;
  LOWORD(v14) = (unsigned __int16)v14 >> 1;
  v15 = CharSet->Length >> 1;
  v36 = StringToSearch->Length;
  v16 = v6 & 1;
  if ( (v6 & 1) != 0 )
    Buffer = &Buffer[(unsigned __int16)v14 - 1];
  v17 = !(v6 & 1);
  if ( (v6 & 4) == 0 )
  {
    if ( v15 != 1 )
    {
      if ( (_WORD)v14 )
      {
        v26 = v6 & 2;
        while ( 1 )
        {
          v27 = *Buffer;
          v28 = 0;
          if ( v26 )
          {
            if ( v15 )
            {
              do
              {
                if ( v27 == v13[v28] )
                  break;
                ++v28;
              }
              while ( v28 < v15 );
            }
            if ( v28 == v15 )
              goto LABEL_37;
          }
          else
          {
            if ( v15 )
            {
              do
              {
                if ( v27 == v13[v28] )
                  break;
                ++v28;
              }
              while ( v28 < v15 );
            }
            if ( v28 != v15 )
              goto LABEL_37;
          }
          Buffer = &Buffer[2 * v17 - 1];
          LOWORD(v14) = v14 - 1;
          if ( !(_WORD)v14 )
            return -1073741275;
        }
      }
      return -1073741275;
    }
    v18 = *v13;
    v19 = v6 & 2;
    if ( !(_WORD)v14 )
      return -1073741275;
    if ( v19 )
    {
      while ( *Buffer == v18 )
      {
        Buffer = &Buffer[2 * v17 - 1];
        LOWORD(v14) = v14 - 1;
        if ( !(_WORD)v14 )
          return -1073741275;
      }
    }
    else
    {
      while ( *Buffer != v18 )
      {
        Buffer = &Buffer[2 * v17 - 1];
        LOWORD(v14) = v14 - 1;
        if ( !(_WORD)v14 )
          return -1073741275;
      }
    }
LABEL_24:
    v20 = 2 * v14 - 2;
    if ( !v16 )
      v20 = v11 - v20;
    *NonInclusivePrefixLength = v20;
    return v4;
  }
  if ( v15 > 0x20u )
  {
    if ( (_WORD)v14 )
    {
      v22 = qword_1801CC040;
      while ( 1 )
      {
        v23 = NLS_DOWNCASE(v22, *Buffer, CharSet, v14);
        if ( v24 )
        {
          do
          {
            if ( v23 == (unsigned __int16)NLS_DOWNCASE(v22, v13[(unsigned __int16)v4], CharSet, v14) )
              break;
            LOWORD(v4) = v4 + 1;
          }
          while ( (unsigned __int16)v4 < v15 );
          if ( (_WORD)v4 == v15 )
          {
LABEL_36:
            LODWORD(v4) = 0;
            goto LABEL_37;
          }
        }
        else
        {
          do
          {
            if ( v23 == (unsigned __int16)NLS_DOWNCASE(v22, v13[(unsigned __int16)v4], CharSet, v14) )
              break;
            LOWORD(v4) = v4 + 1;
          }
          while ( (unsigned __int16)v4 < v15 );
          if ( (_WORD)v4 != v15 )
            goto LABEL_36;
        }
        LOWORD(v4) = 0;
        Buffer = (wchar_t *)(v25 + 4 * v17 - 2);
        LOWORD(v14) = v14 - 1;
        if ( !(_WORD)v14 )
          return -1073741275;
      }
    }
    return -1073741275;
  }
  v29 = qword_1801CC040;
  if ( v15 )
  {
    v4 = v15;
    v30 = (char *)v13 - (char *)v37;
    v31 = v37;
    do
    {
      *v31 = NLS_DOWNCASE(v29, *(unsigned __int16 *)((char *)v31 + v30), CharSet, v14);
      ++v31;
      --v4;
    }
    while ( v4 );
  }
  if ( !(_WORD)v14 )
    return -1073741275;
  while ( 1 )
  {
    LOWORD(CharSet) = NLS_DOWNCASE(v29, *Buffer, CharSet, v14);
    if ( !v33 )
      break;
    for ( i = v4; i < v15; ++i )
    {
      if ( (_WORD)CharSet == v37[i] )
        break;
    }
    if ( i == v15 )
      goto LABEL_37;
LABEL_68:
    Buffer = (wchar_t *)(v32 + 4 * v17 - 2);
    LOWORD(v14) = v14 - 1;
    if ( !(_WORD)v14 )
      return -1073741275;
  }
  for ( j = v4; j < v15; ++j )
  {
    if ( (_WORD)CharSet == v37[j] )
      break;
  }
  if ( j == v15 )
    goto LABEL_68;
LABEL_37:
  if ( (_WORD)v14 )
  {
    v11 = v36;
    goto LABEL_24;
  }
  return -1073741275;
}
