/*
 * XREFs of RtlGenerate8dot3Name @ 0x140906940
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 *     RtlComputeLfnChecksum @ 0x1409074A8 (RtlComputeLfnChecksum.c)
 *     RtlIsValidOemCharacter @ 0x1409075B0 (RtlIsValidOemCharacter.c)
 */

NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  char v4; // r14
  NTSTATUS v6; // ebx
  PGENERATE_NAME_CONTEXT v7; // rdi
  bool v9; // si
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v11; // r14
  unsigned int v12; // ebp
  char v13; // si
  wchar_t v14; // dx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  unsigned int NameLength; // ebp
  wchar_t v19; // dx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // r13
  unsigned int v24; // r9d
  unsigned int v25; // esi
  __int64 v26; // rax
  char v27; // cl
  __int16 v28; // r8
  unsigned int v29; // ecx
  PUNICODE_STRING v30; // r15
  _WORD *v31; // r14
  unsigned __int16 v32; // cx
  unsigned __int16 v33; // cx
  ULONG v34; // eax
  int v36; // eax
  unsigned int v37; // esi
  wchar_t v38; // dx
  int v39; // eax
  __int64 ExtensionLength; // rcx
  int v41; // eax
  USHORT v42; // ax
  int v43; // r10d
  USHORT v44; // r11
  __int64 v45; // r8
  WCHAR *v46; // r9
  __int16 v47; // ax
  unsigned __int16 v48; // cx
  USHORT v49; // ax
  USHORT v50; // r10
  unsigned int i; // r8d
  UCHAR v52; // al
  unsigned int v53; // ecx
  unsigned int v54; // edx
  __int16 v55; // dx
  __int64 v56; // rax
  WCHAR v57; // dx
  int v58; // eax
  signed __int32 v59[8]; // [rsp+0h] [rbp-88h] BYREF
  char v60; // [rsp+20h] [rbp-68h]
  char v61; // [rsp+21h] [rbp-67h]
  WCHAR Char[2]; // [rsp+24h] [rbp-64h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+28h] [rbp-60h]
  PUNICODE_STRING v64; // [rsp+30h] [rbp-58h]
  _QWORD v65[2]; // [rsp+38h] [rbp-50h] BYREF

  v4 = 1;
  v64 = Name8dot3;
  v65[0] = Context;
  v6 = 0;
  v61 = 1;
  Flink = 0LL;
  v7 = Context;
  v9 = 0;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v59, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v9 = WORD2(CurrentServerSiloGlobals[69].Flink) != 0;
    Flink = CurrentServerSiloGlobals[71].Flink;
  }
  if ( !AllowExtendedCharacters || (v60 = 1, !v9) )
    v60 = 0;
  if ( v7->NameLength )
    goto LABEL_46;
  v11 = 0xFFFFFFFFLL;
  v12 = 0;
  if ( !Name->Length || (v13 = 1, *Name->Buffer != 46) )
    v13 = 0;
  while ( 2 )
  {
    v14 = 0;
    while ( v12 < Name->Length >> 1 )
    {
      v15 = v12++;
      v14 = Name->Buffer[v15];
      Char[0] = v14;
      if ( v14 <= 0x20u )
        goto LABEL_64;
      if ( v14 >= 0x7Fu )
      {
        if ( !AllowExtendedCharacters || !RtlIsValidOemCharacter(Char) )
          goto LABEL_64;
        v14 = Char[0];
      }
      if ( v14 != 46 )
      {
        if ( v14 < 0x80u )
        {
LABEL_15:
          v16 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v14 >> 5));
          if ( _bittest(&v16, v14 & 0x1F) )
            v14 = 95;
        }
        if ( (unsigned __int16)(v14 - 97) <= 0x19u )
          v14 -= 32;
        break;
      }
      if ( !v13 )
        goto LABEL_15;
LABEL_64:
      v14 = 0;
    }
    if ( v14 )
    {
      v13 = 0;
      if ( v14 == 46 )
        v11 = v12;
      continue;
    }
    break;
  }
  v17 = 0;
  v7 = (PGENERATE_NAME_CONTEXT)v65[0];
  NameLength = 0;
  if ( (_DWORD)v11 == Name->Length >> 1 )
    v11 = 0xFFFFFFFFLL;
  *(_BYTE *)(v65[0] + 3LL) = 0;
  while ( 2 )
  {
    v19 = 0;
    while ( 2 )
    {
      if ( v17 < Name->Length >> 1 )
      {
        v20 = v17++;
        v19 = Name->Buffer[v20];
        Char[0] = v19;
        if ( v19 > 0x20u )
        {
          if ( v19 >= 0x7Fu )
          {
            if ( AllowExtendedCharacters && RtlIsValidOemCharacter(Char) )
            {
              v19 = Char[0];
              goto LABEL_29;
            }
          }
          else
          {
LABEL_29:
            if ( v19 != 46 )
            {
              if ( v19 < 0x80u )
              {
                v21 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v19 >> 5));
                if ( _bittest(&v21, v19 & 0x1F) )
                  v19 = 95;
              }
              if ( (unsigned __int16)(v19 - 97) <= 0x19u )
                v19 -= 32;
              break;
            }
          }
        }
        v19 = 0;
        continue;
      }
      break;
    }
    if ( v19 && v17 < (unsigned int)v11 && (v22 = v7->NameLength, (unsigned __int8)v22 < 6u) )
    {
      if ( !v60 )
        goto LABEL_39;
      if ( v19 <= 0x7Fu || (v36 = 2, !*((_BYTE *)&Flink->Flink + 2 * v19 + 1)) )
        v36 = 1;
      NameLength += v36;
      if ( NameLength <= 6 )
      {
LABEL_39:
        v7->NameBuffer[v22] = v19;
        ++v7->NameLength;
        continue;
      }
    }
    else if ( !v60 )
    {
      NameLength = v7->NameLength;
    }
    break;
  }
  if ( NameLength <= 2 )
  {
    v49 = RtlComputeLfnChecksum(Name);
    v7->Checksum = v49;
    v50 = v49;
    for ( i = 0; i < 4; ++i )
    {
      v55 = 48;
      if ( (v50 & 0xFu) > 9 )
        v55 = 55;
      v56 = i + v7->NameLength;
      v57 = (v50 & 0xF) + v55;
      v50 >>= 4;
      v7->NameBuffer[v56] = v57;
    }
    v7->NameLength += 4;
    v7->CheckSumInserted = 1;
  }
  if ( (_DWORD)v11 == -1 )
  {
    v7->ExtensionLength = 0;
LABEL_45:
    v4 = v61;
    goto LABEL_46;
  }
  v37 = 1;
  v7->ExtensionBuffer[0] = 46;
  v7->ExtensionLength = 1;
  while ( 2 )
  {
    v38 = 0;
    while ( 2 )
    {
      if ( (unsigned int)v11 < Name->Length >> 1 )
      {
        v38 = Name->Buffer[v11];
        v11 = (unsigned int)(v11 + 1);
        Char[0] = v38;
        if ( v38 > 0x20u )
        {
          if ( v38 >= 0x7Fu )
          {
            if ( AllowExtendedCharacters && RtlIsValidOemCharacter(Char) )
            {
              v38 = Char[0];
              goto LABEL_72;
            }
          }
          else
          {
LABEL_72:
            if ( v38 != 46 )
            {
              if ( v38 < 0x80u )
              {
                v39 = *((_DWORD *)RtlFatIllegalTable + ((unsigned __int64)v38 >> 5));
                if ( _bittest(&v39, v38 & 0x1F) )
                  v38 = 95;
              }
              if ( (unsigned __int16)(v38 - 97) <= 0x19u )
                v38 -= 32;
              break;
            }
          }
        }
        v38 = 0;
        continue;
      }
      break;
    }
    if ( !v38 )
      goto LABEL_45;
    ExtensionLength = v7->ExtensionLength;
    if ( (unsigned int)ExtensionLength < 4 )
    {
      if ( !v60 )
        goto LABEL_81;
      if ( v38 <= 0x7Fu || (v41 = 2, !*((_BYTE *)&Flink->Flink + 2 * v38 + 1)) )
        v41 = 1;
      v37 += v41;
      if ( v37 <= 4 )
      {
LABEL_81:
        v7->ExtensionBuffer[ExtensionLength] = v38;
        ++v7->ExtensionLength;
        continue;
      }
    }
    break;
  }
  v4 = v61;
  if ( FsRtlSafeExtensions )
    v7->ExtensionBuffer[(unsigned int)(ExtensionLength - 1)] = 126;
LABEL_46:
  v23 = v60;
  v24 = v7->LastIndexValue + 1;
  v7->LastIndexValue = v24;
  if ( v24 > 4 && !v7->CheckSumInserted )
  {
    v42 = RtlComputeLfnChecksum(Name);
    v7->Checksum = v42;
    v44 = v42;
    if ( 2 - v43 < (unsigned int)(6 - v43) )
    {
      v45 = 4LL;
      v46 = &v7->NameBuffer[2 - v43];
      do
      {
        v47 = 48;
        v48 = v44 & 0xF;
        if ( v48 > 9u )
          v47 = 55;
        v44 >>= 4;
        *v46++ = v48 + v47;
        --v45;
      }
      while ( v45 );
    }
    v7->LastIndexValue = 1;
    v7->NameLength = 6 - v43;
    v24 = 1;
    v7->CheckSumInserted = 1;
  }
  v25 = 1;
  do
  {
    if ( !v24 )
      break;
    v26 = 8 - v25++;
    v27 = 0;
    v28 = v24 % 0xA + 48;
    v24 /= 0xAu;
    *((_WORD *)v65 + v26) = v28;
    if ( v28 == 57 )
      v27 = v4;
    v4 = v27;
  }
  while ( v25 <= 7 );
  v29 = v7->NameLength;
  v30 = v64;
  v61 = v4;
  v31 = (_WORD *)v65 + 8 - v25;
  *v31 = 126;
  if ( (unsigned __int8)(v29 - 1) > 0xBu )
  {
    v32 = 0;
  }
  else
  {
    memmove(v30->Buffer, v7->NameBuffer, 2LL * v29);
    v32 = 2 * v7->NameLength;
  }
  v30->Length = v32;
  memmove(&v30->Buffer[(unsigned __int64)v32 >> 1], v31, 2 * v25);
  v33 = v30->Length + 2 * v25;
  v30->Length = v33;
  v34 = v7->ExtensionLength;
  if ( v34 )
  {
    memmove(&v30->Buffer[(unsigned __int64)v33 >> 1], v7->ExtensionBuffer, 2 * v34);
    v30->Length += 2 * LOWORD(v7->ExtensionLength);
  }
  if ( !v61 )
    return 0;
  v52 = v7->NameLength;
  if ( v23 )
  {
    v53 = 0;
    v54 = 0;
    if ( v52 )
    {
      do
      {
        if ( v7->NameBuffer[v53] <= 0x7Fu || (v58 = 2, !*((_BYTE *)&Flink->Flink + 2 * v7->NameBuffer[v53] + 1)) )
          v58 = 1;
        v54 += v58;
        if ( v54 > 7 - v25 )
          break;
        ++v53;
      }
      while ( v53 < v7->NameLength );
    }
  }
  else
  {
    LOBYTE(v53) = v52 - 1;
  }
  v7->NameLength = v53;
  if ( !(_BYTE)v53 )
    return -1073740761;
  return v6;
}
