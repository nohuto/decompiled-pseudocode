/*
 * XREFs of RtlGenerate8dot3Name @ 0x180143780
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18008D5B0 (RtlpIsUtf8Process.c)
 *     GetNextWchar @ 0x180143634 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180143718 (RtlComputeLfnChecksum.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  NTSTATUS v4; // ebx
  bool v8; // cl
  __int64 v9; // r8
  unsigned int v10; // r14d
  char v11; // r8
  __int16 i; // ax
  int v13; // eax
  unsigned int NameLength; // esi
  int v15; // eax
  WCHAR NextWchar; // cx
  USHORT v17; // ax
  USHORT v18; // r10
  unsigned int j; // r8d
  __int16 v20; // dx
  __int64 v21; // rax
  WCHAR v22; // dx
  unsigned int v23; // esi
  WCHAR v24; // cx
  int v25; // eax
  ULONG v26; // r9d
  USHORT v27; // ax
  int v28; // r10d
  USHORT v29; // r11
  __int64 v30; // r8
  WCHAR *v31; // r9
  __int16 v32; // ax
  unsigned __int16 v33; // cx
  unsigned int v34; // esi
  char v35; // r13
  __int64 v36; // rax
  char v37; // cl
  __int16 v38; // r8
  PUNICODE_STRING v39; // r12
  unsigned __int8 v40; // al
  _WORD *v41; // r15
  unsigned __int16 v42; // cx
  unsigned __int16 v43; // cx
  ULONG ExtensionLength; // eax
  UCHAR v45; // al
  unsigned int v46; // ecx
  unsigned int v47; // edx
  int v48; // eax
  signed __int32 v50[8]; // [rsp+0h] [rbp-60h] BYREF
  char v51; // [rsp+20h] [rbp-40h]
  unsigned int v52; // [rsp+24h] [rbp-3Ch] BYREF
  _BYTE *WideCharTable; // [rsp+28h] [rbp-38h]
  unsigned int v54; // [rsp+30h] [rbp-30h] BYREF
  PUNICODE_STRING v55; // [rsp+38h] [rbp-28h]
  _WORD v56[8]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v55 = Name8dot3;
  WideCharTable = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v50, 0);
    v8 = CodePageTable.DBCSCodePage != 0;
    WideCharTable = CodePageTable.WideCharTable;
  }
  if ( !AllowExtendedCharacters || (v51 = 1, !v8) )
    v51 = 0;
  if ( !*(_BYTE *)(v9 + 3) )
  {
    v52 = 0;
    v10 = -1;
    if ( !Name->Length || (v11 = 1, *Name->Buffer != 46) )
      v11 = 0;
    for ( i = GetNextWchar(&Name->Length, &v52, v11, AllowExtendedCharacters);
          i;
          i = GetNextWchar(&Name->Length, &v52, 0, AllowExtendedCharacters) )
    {
      if ( i == 46 )
        v10 = v52;
    }
    v13 = Name->Length >> 1;
    v52 = 0;
    Context->NameLength = 0;
    if ( v10 == v13 )
      v10 = -1;
    NameLength = 0;
    v54 = v10;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v52, 1, AllowExtendedCharacters);
      if ( !NextWchar || v52 >= v10 || Context->NameLength >= 6u )
        break;
      if ( v51 )
      {
        if ( NextWchar <= 0x7Fu || (v15 = 2, !WideCharTable[2 * NextWchar + 1]) )
          v15 = 1;
        NameLength += v15;
        if ( NameLength > 6 )
          goto LABEL_28;
      }
      Context->NameBuffer[Context->NameLength++] = NextWchar;
    }
    if ( !v51 )
      NameLength = Context->NameLength;
LABEL_28:
    if ( NameLength <= 2 )
    {
      v17 = RtlComputeLfnChecksum(&Name->Length);
      Context->Checksum = v17;
      v18 = v17;
      for ( j = 0; j < 4; ++j )
      {
        v20 = 48;
        if ( (v18 & 0xFu) > 9 )
          v20 = 55;
        v21 = j + Context->NameLength;
        v22 = (v18 & 0xF) + v20;
        v18 >>= 4;
        Context->NameBuffer[v21] = v22;
      }
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v10 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      v23 = 1;
      Context->ExtensionBuffer[0] = 46;
      Context->ExtensionLength = 1;
      v24 = GetNextWchar(&Name->Length, &v54, 1, AllowExtendedCharacters);
      if ( v24 )
      {
        while ( Context->ExtensionLength < 4 )
        {
          if ( !v51 )
            goto LABEL_81;
          if ( v24 <= 0x7Fu || (v25 = 2, !WideCharTable[2 * v24 + 1]) )
            v25 = 1;
          v23 += v25;
          if ( v23 <= 4 )
          {
LABEL_81:
            Context->ExtensionBuffer[Context->ExtensionLength++] = v24;
            v24 = GetNextWchar(&Name->Length, &v54, 1, AllowExtendedCharacters);
            if ( v24 )
              continue;
          }
          if ( !v24 )
            goto LABEL_45;
          break;
        }
        Context->ExtensionBuffer[Context->ExtensionLength - 1] = 126;
      }
    }
  }
LABEL_45:
  v26 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v26;
  if ( v26 > 4 && !Context->CheckSumInserted )
  {
    v27 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v27;
    v29 = v27;
    if ( 2 - v28 < (unsigned int)(6 - v28) )
    {
      v30 = 4LL;
      v31 = &Context->NameBuffer[2 - v28];
      do
      {
        v32 = 48;
        v33 = v29 & 0xF;
        if ( v33 > 9u )
          v32 = 55;
        v29 >>= 4;
        *v31++ = v33 + v32;
        --v30;
      }
      while ( v30 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v28;
    v26 = 1;
    Context->CheckSumInserted = 1;
  }
  v34 = 1;
  v35 = 1;
  do
  {
    if ( !v26 )
      break;
    v36 = 8 - v34++;
    v37 = 0;
    v38 = v26 % 0xA + 48;
    v26 /= 0xAu;
    v56[v36] = v38;
    if ( v38 == 57 )
      v37 = v35;
    v35 = v37;
  }
  while ( v34 <= 7 );
  v39 = v55;
  v40 = Context->NameLength - 1;
  v41 = &v56[8 - v34];
  *v41 = 126;
  if ( v40 > 0xBu )
  {
    v42 = 0;
  }
  else
  {
    memmove(v39->Buffer, Context->NameBuffer, 2LL * Context->NameLength);
    v42 = 2 * Context->NameLength;
  }
  v39->Length = v42;
  memmove(&v39->Buffer[(unsigned __int64)v42 >> 1], v41, 2 * v34);
  v43 = v39->Length + 2 * v34;
  v39->Length = v43;
  ExtensionLength = Context->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v39->Buffer[(unsigned __int64)v43 >> 1], Context->ExtensionBuffer, 2 * ExtensionLength);
    v39->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v35 )
    return 0;
  v45 = Context->NameLength;
  if ( v51 )
  {
    v46 = 0;
    v47 = 0;
    if ( v45 )
    {
      do
      {
        if ( Context->NameBuffer[v46] <= 0x7Fu || (v48 = 2, !WideCharTable[2 * Context->NameBuffer[v46] + 1]) )
          v48 = 1;
        v47 += v48;
        if ( v47 > 7 - v34 )
          break;
        ++v46;
      }
      while ( v46 < Context->NameLength );
    }
  }
  else
  {
    LOBYTE(v46) = v45 - 1;
  }
  Context->NameLength = v46;
  if ( !(_BYTE)v46 )
    return -1073740761;
  return v4;
}
