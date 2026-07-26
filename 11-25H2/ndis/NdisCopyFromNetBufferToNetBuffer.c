/*
 * XREFs of NdisCopyFromNetBufferToNetBuffer @ 0x140068990
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

NDIS_STATUS __stdcall NdisCopyFromNetBufferToNetBuffer(
        PNET_BUFFER Destination,
        ULONG DestinationOffset,
        ULONG BytesToCopy,
        PNET_BUFFER Source,
        ULONG SourceOffset,
        PULONG BytesCopied)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  _MDL *CurrentMdl; // rsi
  _MDL *v9; // r13
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v11; // rax
  size_t v12; // r14
  NDIS_STATUS v13; // edi
  char *MappedSystemVa; // rbp
  char *v15; // rbp
  size_t v16; // r15
  char *v17; // r12
  char *v18; // r12
  size_t v19; // rbx
  size_t v20; // rcx
  ULONG v21; // eax
  size_t v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  size_t v27; // [rsp+30h] [rbp-48h]
  ULONG v29; // [rsp+80h] [rbp+8h]
  unsigned __int64 i; // [rsp+98h] [rbp+20h]

  v6 = Destination->CurrentMdlOffset + DestinationOffset;
  v7 = SourceOffset + Source->CurrentMdlOffset;
  CurrentMdl = Source->CurrentMdl;
  v9 = Destination->CurrentMdl;
  v29 = *BytesCopied;
  for ( i = v6; CurrentMdl; v7 -= ByteCount )
  {
    ByteCount = CurrentMdl->ByteCount;
    if ( v7 < ByteCount )
      break;
    CurrentMdl = CurrentMdl->Next;
  }
  if ( v9 )
  {
    do
    {
      v11 = v9->ByteCount;
      if ( v6 < v11 )
        break;
      v9 = v9->Next;
      v6 -= v11;
    }
    while ( v9 );
    i = v6;
  }
  if ( BytesToCopy && CurrentMdl && v9 )
  {
    v12 = BytesToCopy;
    v27 = BytesToCopy;
    if ( CurrentMdl->ByteCount - v7 <= BytesToCopy )
      v12 = CurrentMdl->ByteCount - v7;
    v13 = 0;
    if ( (CurrentMdl->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
    }
    else
    {
      v24 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      v6 = i;
      MappedSystemVa = v24;
    }
    if ( MappedSystemVa
      && ((v15 = &MappedSystemVa[v7], v16 = v9->ByteCount - v6, (v9->MdlFlags & 5) == 0)
        ? (v25 = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u), v6 = i, v17 = v25)
        : (v17 = (char *)v9->MappedSystemVa),
          v17) )
    {
      v18 = &v17[v6];
      while ( 1 )
      {
LABEL_18:
        v19 = v16;
        if ( v16 >= v12 )
          v19 = v12;
        memmove(v18, v15, v19);
        if ( v27 == v19 )
        {
          v21 = BytesToCopy;
          goto LABEL_26;
        }
        v20 = v27 - v19;
        v27 -= v19;
        if ( v16 == v19 )
          break;
        v18 += v19;
        v16 -= v19;
LABEL_23:
        if ( v12 == v19 )
        {
          while ( 1 )
          {
            CurrentMdl = CurrentMdl->Next;
            if ( !CurrentMdl )
              goto LABEL_37;
            v23 = CurrentMdl->ByteCount;
            if ( (_DWORD)v23 )
            {
              v12 = v20;
              if ( v23 <= v20 )
                v12 = CurrentMdl->ByteCount;
              if ( (CurrentMdl->MdlFlags & 5) != 0 )
                v15 = (char *)CurrentMdl->MappedSystemVa;
              else
                v15 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
              if ( v15 )
                goto LABEL_18;
              goto LABEL_35;
            }
          }
        }
        v15 += v19;
        v12 -= v19;
      }
      while ( 1 )
      {
        v9 = v9->Next;
        if ( !v9 )
          break;
        v16 = v9->ByteCount;
        if ( v9->ByteCount )
        {
          if ( (v9->MdlFlags & 5) != 0 )
          {
            v18 = (char *)v9->MappedSystemVa;
          }
          else
          {
            v26 = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
            v20 = v27;
            v18 = v26;
          }
          if ( !v18 )
            goto LABEL_35;
          goto LABEL_23;
        }
      }
LABEL_37:
      v21 = BytesToCopy - v20;
    }
    else
    {
LABEL_35:
      v21 = v29;
      v13 = -1073741670;
    }
  }
  else
  {
    v13 = 0;
    v21 = 0;
  }
LABEL_26:
  *BytesCopied = v21;
  return v13;
}
