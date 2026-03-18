/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x14083856C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     PiDqSameUserHive @ 0x1406EFFA8 (PiDqSameUserHive.c)
 *     PiDqQueryLock @ 0x1408384AC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14083850C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140839AA8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14083A0B0 (PiDqQueryActionQueueEntryCreate.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x1408D06A0 (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x1408D1A38 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140A40194 (PiDqQueryAddObjectToResultSet.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v4; // cl
  char v5; // bl
  unsigned int v7; // r15d
  char v8; // r12
  BOOLEAN v9; // r13
  PVOID v10; // rbx
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // edi
  unsigned int v26; // r15d
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  const wchar_t *v32; // rcx
  const wchar_t *v33; // rdx
  _QWORD *v34; // rdi
  PVOID v35; // rbx
  bool v36; // r13
  _QWORD *v37; // rdx
  char v38; // cl
  char v39; // bl
  __int64 v40; // rbx
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // rcx
  const wchar_t *v44; // rcx
  const wchar_t *v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  const wchar_t *j; // rbx
  __int64 v49; // rax
  int v50; // ecx
  const wchar_t *v51; // rbx
  unsigned int v52; // r15d
  __int64 v53; // rdi
  const wchar_t *i; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  BOOLEAN v58; // [rsp+30h] [rbp-20h] BYREF
  bool v59; // [rsp+31h] [rbp-1Fh]
  int AddObjectToResultSet; // [rsp+34h] [rbp-1Ch]
  int v61; // [rsp+38h] [rbp-18h]
  __int64 v62; // [rsp+40h] [rbp-10h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-8h] BYREF
  char v64; // [rsp+98h] [rbp+48h]
  __int64 v65; // [rsp+A0h] [rbp+50h] BYREF
  bool v66; // [rsp+A8h] [rbp+58h]

  v2 = *(_DWORD *)(a2 + 4);
  AddObjectToResultSet = 0;
  v62 = 0LL;
  v4 = 0;
  v59 = 0;
  v5 = 0;
  v64 = 0;
  v61 = 0;
  v7 = 0;
  v66 = 0;
  v8 = 0;
  LOBYTE(v65) = 0;
  v9 = 0;
  v58 = 0;
  if ( (v2 & 1) != 0 )
  {
    PiDqQueryLock(a1);
    Buffer = *(_QWORD *)(a2 + 8);
    v10 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer);
    PiDqQueryUnlock(a1);
    v11 = v10 == 0LL;
    v5 = 0;
    v4 = !v11;
    v59 = !v11;
  }
  v12 = *(_DWORD *)(a2 + 4);
  if ( (v12 & 1) != 0 && !v4 || (v12 & 2) != 0 || (v12 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
  {
LABEL_46:
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      v36 = v59;
      v34 = (_QWORD *)(a2 + 8);
    }
    else
    {
      PiDqQueryLock(a1);
      v34 = (_QWORD *)(a2 + 8);
      v65 = *(_QWORD *)(a2 + 8);
      v35 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &v65);
      PiDqQueryUnlock(a1);
      v36 = v35 != 0LL;
    }
    LODWORD(v24) = *(_DWORD *)(a2 + 4);
    if ( (v24 & 2) != 0 )
    {
      if ( v36 )
      {
        v7 = 3;
        v39 = 1;
        PiDqQueryLock(a1);
        PiDqQueryDeleteObjectFromResultSet(a1, *v34);
        LOBYTE(v24) = PiDqQueryUnlock(a1);
        goto LABEL_56;
      }
LABEL_55:
      v39 = v66;
LABEL_56:
      if ( AddObjectToResultSet >= 0 )
      {
        if ( !v39 )
          return v24;
        if ( (int)PiDqQueryActionQueueEntryCreate(v7, *v34, a2, &v62) >= 0 )
        {
          PiDqQueryLock(a1);
          PiDqQueryAppendActionEntry(a1, v62);
          goto LABEL_58;
        }
      }
LABEL_57:
      PiDqQueryLock(a1);
      *(_DWORD *)(a1 + 216) |= 1u;
      PiDqQueryFreeActiveData(a1);
LABEL_58:
      LOBYTE(v24) = PiDqQueryUnlock(a1);
      return v24;
    }
    v37 = v34;
    if ( (v24 & 1) == 0 )
    {
      if ( !v8 )
      {
        v38 = v36;
        goto LABEL_52;
      }
      v37 = (_QWORD *)(a2 + 8);
    }
    v40 = a1 + 24;
    v41 = *(_QWORD *)(a1 + 24);
    v42 = *(_DWORD *)(v41 + 20);
    if ( v42 )
    {
      v50 = v42 - 1;
      if ( v50 )
      {
        if ( v50 != 1 )
          goto LABEL_53;
        v51 = *(const wchar_t **)(v41 + 32);
        v38 = 0;
        LOBYTE(v65) = 0;
        v34 = v37;
        if ( !*v51 )
          goto LABEL_53;
        LOBYTE(v24) = 0;
        while ( !(_BYTE)v24 )
        {
          v34 = (_QWORD *)(a2 + 8);
          v38 = wcsicmp(v51, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
          v56 = -1LL;
          LOBYTE(v24) = v38;
          LOBYTE(v65) = v38;
          do
            ++v56;
          while ( v51[v56] );
          v51 += v56 + 1;
          if ( !*v51 )
          {
            v40 = a1 + 24;
            goto LABEL_63;
          }
        }
        v40 = a1 + 24;
      }
      else
      {
        v34 = (_QWORD *)(a2 + 8);
        v38 = wcsicmp(*(const wchar_t **)(v41 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
        LOBYTE(v65) = v38;
        LOBYTE(v24) = v38;
LABEL_63:
        if ( !(_BYTE)v24 )
          goto LABEL_53;
      }
    }
    else
    {
      v38 = 1;
      LOBYTE(v65) = 1;
    }
    v24 = *(_QWORD *)(a1 + 24);
    v34 = (_QWORD *)(a2 + 8);
    if ( !*(_DWORD *)(v24 + 20) )
    {
      LODWORD(v24) = PiPnpRtlApplyMandatoryFilters(
                       PiPnpRtlCtx,
                       *(_QWORD *)(*v34 + 16LL),
                       *(_DWORD *)(*v34 + 28LL),
                       0,
                       (PSECURITY_SUBJECT_CONTEXT)(a1 + 32),
                       (__int64)&v65);
      AddObjectToResultSet = v24;
      if ( (_DWORD)v24 == -1073741772 || (_DWORD)v24 == -1073741275 )
      {
        v34 = (_QWORD *)(a2 + 8);
        v38 = 0;
        AddObjectToResultSet = 0;
        LOBYTE(v65) = 0;
      }
      else
      {
        if ( (int)v24 < 0 )
          goto LABEL_57;
        v38 = v65;
      }
    }
    if ( !v38 )
    {
LABEL_53:
      if ( v36 )
      {
        v66 = 1;
        v7 = 3;
        PiDqQueryLock(a1);
        PiDqQueryDeleteObjectFromResultSet(a1, *v34);
        LOBYTE(v24) = PiDqQueryUnlock(a1);
        goto LABEL_55;
      }
LABEL_104:
      v7 = v61;
      goto LABEL_55;
    }
    v24 = *(_QWORD *)v40;
    if ( *(_QWORD *)(*(_QWORD *)v40 + 88LL) )
    {
      v34 = (_QWORD *)(a2 + 8);
      LODWORD(v24) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), &v65);
      AddObjectToResultSet = v24;
      if ( (_DWORD)v24 == -1073741772 )
      {
        v38 = 0;
        AddObjectToResultSet = 0;
      }
      else
      {
        if ( (int)v24 < 0 )
          goto LABEL_57;
        v38 = v65;
      }
    }
LABEL_52:
    if ( v38 )
    {
      if ( v36 )
      {
        v61 = 2;
        v66 = v64 != 0;
      }
      else
      {
        v61 = 1;
        PiDqQueryLock(a1);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *v34);
        LOBYTE(v24) = PiDqQueryUnlock(a1);
        v66 = 1;
      }
      v34 = (_QWORD *)(a2 + 8);
      goto LABEL_104;
    }
    goto LABEL_53;
  }
  if ( (v12 & 4) != 0 )
  {
    AddObjectToResultSet = PiDqSameUserHive((__int64 *)(a1 + 32), (__int64 *)(a2 + 24), &v58);
    if ( AddObjectToResultSet < 0 )
      goto LABEL_57;
    v9 = v58;
  }
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_DWORD *)(v13 + 40) & 4;
  if ( (*(_DWORD *)(v13 + 40) & 2) != 0 )
  {
    if ( v14 )
    {
      v52 = 0;
      if ( *(_DWORD *)(a2 + 76) )
      {
        do
        {
          v53 = 32LL * v52;
          if ( *(_DWORD *)(v53 + a2 + 100) != 1 || v9 )
          {
            if ( !*(_QWORD *)(v53 + a2 + 104) )
              goto LABEL_93;
            for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v55 + 1 )
            {
              if ( !wcsicmp(*(const wchar_t **)(v53 + a2 + 104), i) )
                goto LABEL_93;
              v55 = -1LL;
              do
                ++v55;
              while ( i[v55] );
            }
          }
          ++v52;
        }
        while ( v52 < *(_DWORD *)(a2 + 76) );
        v5 = 0;
      }
    }
    else
    {
LABEL_93:
      v5 = 1;
      v64 = 1;
    }
  }
  else
  {
    v15 = *(_DWORD *)(v13 + 64);
    if ( v14 )
    {
      v20 = 0;
      if ( !v15 )
        goto LABEL_24;
      while ( 1 )
      {
        v5 = 0;
        v21 = 0;
        v22 = *(_QWORD *)(v13 + 72) + 32LL * v20;
        v64 = 0;
        if ( *(_DWORD *)(a2 + 76) )
          break;
LABEL_22:
        v13 = *(_QWORD *)(a1 + 24);
        if ( ++v20 >= *(_DWORD *)(v13 + 64) )
          goto LABEL_23;
      }
      while ( 1 )
      {
        v5 = 0;
        v23 = 32LL * v21;
        v64 = 0;
        if ( *(_DWORD *)(v22 + 16) == *(_DWORD *)(v23 + a2 + 96) )
        {
          v64 = 0;
          v46 = *(_QWORD *)v22 - *(_QWORD *)(v23 + a2 + 80);
          if ( !v46 )
            v46 = *(_QWORD *)(v22 + 8) - *(_QWORD *)(v23 + a2 + 88);
          if ( !v46 )
          {
            v47 = *(_DWORD *)(v23 + a2 + 100);
            v64 = 0;
            if ( *(_DWORD *)(v22 + 20) == v47 )
            {
              if ( v47 != 1 )
                break;
              v64 = 0;
              if ( v58 )
                break;
            }
          }
        }
LABEL_21:
        if ( ++v21 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_22;
      }
      if ( !*(_QWORD *)(v23 + a2 + 104) )
      {
        v5 = 1;
        v64 = 1;
LABEL_23:
        v8 = v65;
        goto LABEL_24;
      }
      for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); ; j += v49 + 1 )
      {
        if ( !*j )
        {
          v5 = 0;
          v64 = 0;
          goto LABEL_21;
        }
        if ( !wcsicmp(*(const wchar_t **)(v23 + a2 + 104), j) )
          break;
        v49 = -1LL;
        do
          ++v49;
        while ( j[v49] );
      }
      v5 = 1;
      v8 = 0;
      v64 = 1;
    }
    else
    {
      v16 = 0;
      if ( v15 )
      {
        do
        {
          v17 = 0;
          v18 = *(_QWORD *)(v13 + 72) + 32LL * v16;
          while ( 1 )
          {
            if ( v17 >= *(_DWORD *)(a2 + 76) )
            {
              v5 = v64;
              goto LABEL_16;
            }
            v19 = 32LL * v17;
            if ( *(_DWORD *)(v18 + 16) == *(_DWORD *)(v19 + a2 + 96) )
            {
              v43 = *(_QWORD *)v18 - *(_QWORD *)(v19 + a2 + 80);
              if ( *(_QWORD *)v18 == *(_QWORD *)(v19 + a2 + 80) )
                v43 = *(_QWORD *)(v18 + 8) - *(_QWORD *)(v19 + a2 + 88);
              if ( !v43 && *(_DWORD *)(v18 + 20) == *(_DWORD *)(v19 + a2 + 100) )
              {
                v44 = *(const wchar_t **)(v18 + 24);
                v45 = *(const wchar_t **)(v19 + a2 + 104);
                if ( (v44 == v45 || v44 && v45 && !wcsicmp(v44, v45)) && (*(_DWORD *)(v19 + a2 + 100) != 1 || v9) )
                  break;
              }
            }
            ++v17;
          }
          v5 = 1;
          v64 = 1;
LABEL_16:
          v13 = *(_QWORD *)(a1 + 24);
          ++v16;
        }
        while ( v16 < *(_DWORD *)(v13 + 64) );
        goto LABEL_23;
      }
      v8 = 0;
    }
  }
LABEL_24:
  v24 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v24 + 20) )
  {
    LODWORD(v24) = *(_DWORD *)(a2 + 4);
    if ( (v24 & 8) != 0 )
    {
      v8 = 1;
      goto LABEL_42;
    }
    v8 = 0;
  }
  v25 = 0;
LABEL_28:
  if ( v25 < *(_DWORD *)(a2 + 76) )
  {
    v26 = 0;
    v27 = 32LL * v25;
    while ( 1 )
    {
      v28 = *(_QWORD *)(a1 + 24);
      if ( v26 >= *(_DWORD *)(v28 + 80) )
      {
        ++v25;
        goto LABEL_28;
      }
      v29 = *(_QWORD *)(v28 + 88);
      v30 = 56LL * v26;
      LODWORD(v24) = *(_DWORD *)(v27 + a2 + 96);
      if ( *(_DWORD *)(v30 + v29 + 24) == (_DWORD)v24 )
      {
        v31 = *(_QWORD *)(v30 + v29 + 8) - *(_QWORD *)(v27 + a2 + 80);
        if ( !v31 )
          v31 = *(_QWORD *)(v30 + v29 + 16) - *(_QWORD *)(v27 + a2 + 88);
        if ( !v31 )
        {
          LODWORD(v24) = *(_DWORD *)(v27 + a2 + 100);
          if ( *(_DWORD *)(v30 + v29 + 28) == (_DWORD)v24 )
          {
            v32 = *(const wchar_t **)(v30 + v29 + 32);
            v33 = *(const wchar_t **)(v27 + a2 + 104);
            if ( v32 == v33 || v32 && v33 && (LODWORD(v24) = wcsicmp(v32, v33), !(_DWORD)v24) )
            {
              if ( *(_DWORD *)(v27 + a2 + 100) != 1 || v58 )
                break;
            }
          }
        }
      }
      ++v26;
    }
    v8 = 1;
  }
  v5 = v64;
LABEL_42:
  if ( v5 || v8 )
  {
    v7 = v61;
    goto LABEL_46;
  }
  return v24;
}
