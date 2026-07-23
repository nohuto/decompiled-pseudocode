/*
 * XREFs of RtlFindUnicodePrefix @ 0x140975F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1402E38E0 (RtlSplay.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     ComputeUnicodeNameLength @ 0x140976230 (ComputeUnicodeNameLength.c)
 *     CompareUnicodeStrings @ 0x140976270 (CompareUnicodeStrings.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlFindUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PCUNICODE_STRING FullName,
        ULONG CaseInsensitiveIndex)
{
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // r14
  CSHORT i; // ax
  _RTL_SPLAY_LINKS *p_Links; // r15
  _UNICODE_PREFIX_TABLE_ENTRY *v7; // rdi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int16 v9; // dx
  unsigned __int16 v10; // r8
  unsigned __int16 *v11; // r11
  __int64 v12; // rsi
  struct _LIST_ENTRY *Flink; // r12
  unsigned int v14; // ebp
  unsigned int v15; // edi
  unsigned __int16 *v16; // r11
  unsigned int v17; // r10d
  wchar_t *Buffer; // rbx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  _RTL_SPLAY_LINKS *v21; // rbx
  PRTL_SPLAY_LINKS v22; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *v24; // rbx
  PUNICODE_PREFIX_TABLE v25; // [rsp+60h] [rbp+8h]

  v25 = PrefixTable;
  NextPrefixTree = PrefixTable->NextPrefixTree;
  for ( i = ComputeUnicodeNameLength(FullName);
        NextPrefixTree->NameLength > i;
        NextPrefixTree = NextPrefixTree->NextPrefixTree )
  {
    v25 = (PUNICODE_PREFIX_TABLE)NextPrefixTree;
  }
  while ( 2 )
  {
    if ( NextPrefixTree->NameLength <= 0 )
      return 0LL;
    p_Links = &NextPrefixTree->Links;
LABEL_5:
    if ( !p_Links )
    {
LABEL_48:
      v25 = (PUNICODE_PREFIX_TABLE)NextPrefixTree;
      NextPrefixTree = NextPrefixTree->NextPrefixTree;
      continue;
    }
    break;
  }
  v7 = (_UNICODE_PREFIX_TABLE_ENTRY *)&p_Links[-1];
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v12 = *v11 >> 1;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v14 = FullName->Length >> 1;
  if ( (_DWORD)v12 == 1 && **((_WORD **)v11 + 1) == 92 )
  {
    if ( v14 > 1 )
    {
      if ( *FullName->Buffer == 92 )
        goto LABEL_41;
      goto LABEL_12;
    }
LABEL_8:
    v15 = FullName->Length >> 1;
    goto LABEL_13;
  }
  if ( (unsigned int)v12 >= v14 )
    goto LABEL_8;
LABEL_12:
  v15 = *v11 >> 1;
LABEL_13:
  v16 = (unsigned __int16 *)*((_QWORD *)v11 + 1);
  v17 = 0;
  Buffer = FullName->Buffer;
  if ( !v15 )
    goto LABEL_16;
  while ( 1 )
  {
    v19 = *v16++;
    v20 = *Buffer++;
    if ( (_WORD)v19 != (_WORD)v20 )
      break;
LABEL_15:
    if ( ++v17 >= v15 )
      goto LABEL_16;
  }
  if ( (unsigned int)v19 >= 0x61 )
  {
    if ( (unsigned int)v19 > 0x7A )
    {
      if ( Flink && (unsigned __int16)v19 >= v10 )
      {
        v10 = 192;
        LOWORD(v19) = *((_WORD *)&Flink->Flink
                      + (v19 & 0xF)
                      + *((unsigned __int16 *)&Flink->Flink
                        + ((unsigned __int8)v19 >> 4)
                        + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v19 >> 8))))
                    + v19;
        v9 = -32;
      }
    }
    else
    {
      LOWORD(v19) = v9 + v19;
    }
  }
  if ( (unsigned int)v20 >= 0x61 )
  {
    if ( (unsigned int)v20 > 0x7A )
    {
      if ( Flink && (unsigned __int16)v20 >= v10 )
        LOWORD(v20) = *((_WORD *)&Flink->Flink
                      + (v20 & 0xF)
                      + *((unsigned __int16 *)&Flink->Flink
                        + ((unsigned __int8)v20 >> 4)
                        + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v20 >> 8))))
                    + v20;
    }
    else
    {
      LOWORD(v20) = v9 + v20;
    }
  }
  if ( (_WORD)v19 == (_WORD)v20 )
  {
    v9 = -32;
    v10 = 192;
    goto LABEL_15;
  }
  if ( v17 < v15 )
  {
    if ( (_WORD)v19 == 92 )
      goto LABEL_33;
    if ( (_WORD)v20 == 92 )
      goto LABEL_18;
    if ( (unsigned __int16)v19 < (unsigned __int16)v20 )
      goto LABEL_33;
    if ( (unsigned __int16)v19 > (unsigned __int16)v20 )
    {
LABEL_18:
      p_Links = p_Links->LeftChild;
      goto LABEL_5;
    }
  }
LABEL_16:
  if ( (unsigned int)v12 < v14 )
  {
    if ( FullName->Buffer[v12] == 92 )
      goto LABEL_40;
LABEL_33:
    p_Links = p_Links->RightChild;
    goto LABEL_5;
  }
  if ( (unsigned int)v12 > v14 )
    goto LABEL_18;
LABEL_40:
  v7 = (_UNICODE_PREFIX_TABLE_ENTRY *)&p_Links[-1];
LABEL_41:
  if ( CaseInsensitiveIndex )
  {
    v24 = v7;
    while ( (unsigned int)CompareUnicodeStrings(v24->Prefix, FullName, CaseInsensitiveIndex) - 1 > 1 )
    {
      v24 = v24->CaseMatch;
      if ( v24 == v7 )
        goto LABEL_48;
    }
    return v24;
  }
  else
  {
    if ( v7->NodeTypeCode == 2050 )
    {
      v21 = (_RTL_SPLAY_LINKS *)NextPrefixTree->NextPrefixTree;
      NextPrefixTree->NextPrefixTree = 0LL;
      NextPrefixTree->NodeTypeCode = 2050;
      v22 = RtlSplay(p_Links);
      LOWORD(v22[-1].Parent) = 2049;
      v7 = (_UNICODE_PREFIX_TABLE_ENTRY *)&v22[-1];
      v25->NextPrefixTree = (PUNICODE_PREFIX_TABLE_ENTRY)&v22[-1];
      v22[-1].LeftChild = v21;
    }
    return v7;
  }
}
