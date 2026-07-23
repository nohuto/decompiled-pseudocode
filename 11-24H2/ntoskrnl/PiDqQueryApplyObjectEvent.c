/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x1408D0C6C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D07C0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     PiDqSameUserHive @ 0x1406F99D0 (PiDqSameUserHive.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B26E0 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1408C9830 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryLock @ 0x1408D0BAC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408D0C0C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryIsObjectInResultSet @ 0x1408D1900 (PiDqQueryIsObjectInResultSet.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140A12F7C (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140A3A584 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140A46BEC (PiDqQueryDeleteObjectFromResultSet.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v4; // cl
  char v5; // bl
  unsigned int v7; // r14d
  char v8; // r15
  char v9; // r12
  BOOLEAN v10; // r13
  PVOID v11; // rbx
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // r14
  __int64 v20; // rbx
  unsigned int v21; // r13d
  unsigned int v22; // r12d
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  const wchar_t *v33; // rcx
  const wchar_t *v34; // rdx
  _QWORD *v35; // rbx
  char IsObjectInResultSet; // r13
  _QWORD *v37; // rdx
  char v38; // cl
  __int64 v39; // r14
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // rcx
  const wchar_t *v43; // rcx
  const wchar_t *v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  const wchar_t *j; // rbx
  __int64 v48; // rax
  int v49; // ecx
  const wchar_t *v50; // r14
  unsigned int v51; // r15d
  __int64 v52; // r14
  const wchar_t *i; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  BOOLEAN v57; // [rsp+30h] [rbp-20h] BYREF
  bool v58; // [rsp+31h] [rbp-1Fh]
  int AddObjectToResultSet; // [rsp+34h] [rbp-1Ch]
  int v60; // [rsp+38h] [rbp-18h]
  _QWORD *v61; // [rsp+40h] [rbp-10h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-8h] BYREF
  char v63; // [rsp+98h] [rbp+48h]
  __int64 v64; // [rsp+A0h] [rbp+50h] BYREF
  bool v65; // [rsp+A8h] [rbp+58h]

  v2 = *(_DWORD *)(a2 + 4);
  AddObjectToResultSet = 0;
  v61 = 0LL;
  v4 = 0;
  v58 = 0;
  v5 = 0;
  v63 = 0;
  v60 = 0;
  v7 = 0;
  LOBYTE(v64) = 0;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  v10 = 0;
  if ( (v2 & 1) != 0 )
  {
    PiDqQueryLock(a1);
    Buffer = *(_QWORD *)(a2 + 8);
    v11 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer);
    PiDqQueryUnlock(a1);
    v12 = v11 == 0LL;
    v5 = 0;
    v4 = !v12;
    v58 = !v12;
  }
  v13 = *(_DWORD *)(a2 + 4);
  if ( (v13 & 1) != 0 && !v4 || (v13 & 2) != 0 || (v13 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
  {
LABEL_46:
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      IsObjectInResultSet = v58;
      v35 = (_QWORD *)(a2 + 8);
    }
    else
    {
      PiDqQueryLock(a1);
      v35 = (_QWORD *)(a2 + 8);
      IsObjectInResultSet = PiDqQueryIsObjectInResultSet(a1, *(_QWORD *)(a2 + 8));
      PiDqQueryUnlock(a1);
    }
    LODWORD(v25) = *(_DWORD *)(a2 + 4);
    if ( (v25 & 2) != 0 )
    {
      if ( !IsObjectInResultSet )
        goto LABEL_55;
      goto LABEL_54;
    }
    v37 = v35;
    if ( (v25 & 1) == 0 )
    {
      if ( !v9 )
      {
        v38 = IsObjectInResultSet;
        goto LABEL_52;
      }
      v37 = (_QWORD *)(a2 + 8);
    }
    v39 = a1 + 24;
    v40 = *(_QWORD *)(a1 + 24);
    v41 = *(_DWORD *)(v40 + 20);
    if ( v41 )
    {
      v49 = v41 - 1;
      if ( v49 )
      {
        if ( v49 != 1 )
          goto LABEL_53;
        v50 = *(const wchar_t **)(v40 + 32);
        v38 = 0;
        LOBYTE(v64) = 0;
        v35 = v37;
        if ( !*v50 )
          goto LABEL_53;
        LOBYTE(v25) = 0;
        while ( !(_BYTE)v25 )
        {
          v35 = (_QWORD *)(a2 + 8);
          v38 = wcsicmp(v50, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
          v55 = -1LL;
          LOBYTE(v25) = v38;
          LOBYTE(v64) = v38;
          do
            ++v55;
          while ( v50[v55] );
          v50 += v55 + 1;
          if ( !*v50 )
          {
            v39 = a1 + 24;
            goto LABEL_62;
          }
        }
        v39 = a1 + 24;
      }
      else
      {
        v35 = (_QWORD *)(a2 + 8);
        v38 = wcsicmp(*(const wchar_t **)(v40 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
        LOBYTE(v64) = v38;
        LOBYTE(v25) = v38;
LABEL_62:
        if ( !(_BYTE)v25 )
          goto LABEL_53;
      }
    }
    else
    {
      v38 = 1;
      LOBYTE(v64) = 1;
    }
    v25 = *(_QWORD *)(a1 + 24);
    v35 = (_QWORD *)(a2 + 8);
    if ( !*(_DWORD *)(v25 + 20) )
    {
      LODWORD(v25) = PiPnpRtlApplyMandatoryFilters(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(unsigned __int16 **)(*v35 + 16LL),
                       *(_DWORD *)(*v35 + 28LL),
                       0LL,
                       (PSECURITY_SUBJECT_CONTEXT)(a1 + 32),
                       &v64);
      AddObjectToResultSet = v25;
      if ( (_DWORD)v25 == -1073741772 || (_DWORD)v25 == -1073741275 )
      {
        v35 = (_QWORD *)(a2 + 8);
        v38 = 0;
        AddObjectToResultSet = 0;
        LOBYTE(v64) = 0;
      }
      else
      {
        if ( (int)v25 < 0 )
          goto LABEL_56;
        v38 = v64;
      }
    }
    if ( !v38 )
    {
LABEL_53:
      if ( !IsObjectInResultSet )
      {
        v7 = v60;
        v8 = v60;
        goto LABEL_55;
      }
LABEL_54:
      v8 = 1;
      v7 = 3;
      PiDqQueryLock(a1);
      PiDqQueryDeleteObjectFromResultSet(a1, *v35);
      LOBYTE(v25) = PiDqQueryUnlock(a1);
LABEL_55:
      if ( AddObjectToResultSet >= 0 )
      {
        if ( !v8 )
          return v25;
        if ( (int)PiDqQueryActionQueueEntryCreate(v7, *v35, a2, &v61) >= 0 )
        {
          PiDqQueryLock(a1);
          PiDqQueryAppendActionEntry(a1, v61);
          goto LABEL_57;
        }
      }
LABEL_56:
      PiDqQueryLock(a1);
      *(_DWORD *)(a1 + 216) |= 1u;
      PiDqQueryFreeActiveData(a1);
LABEL_57:
      LOBYTE(v25) = PiDqQueryUnlock(a1);
      return v25;
    }
    v25 = *(_QWORD *)v39;
    if ( *(_QWORD *)(*(_QWORD *)v39 + 88LL) )
    {
      v35 = (_QWORD *)(a2 + 8);
      LODWORD(v25) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&v64);
      AddObjectToResultSet = v25;
      if ( (_DWORD)v25 == -1073741772 )
      {
        v38 = 0;
        AddObjectToResultSet = 0;
      }
      else
      {
        if ( (int)v25 < 0 )
          goto LABEL_56;
        v38 = v64;
      }
    }
LABEL_52:
    if ( v38 )
    {
      if ( IsObjectInResultSet )
      {
        v60 = 2;
        LOBYTE(v25) = v63 != 0;
        v65 = v63 != 0;
      }
      else
      {
        v60 = 1;
        PiDqQueryLock(a1);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *v35);
        LOBYTE(v25) = PiDqQueryUnlock(a1);
        v65 = 1;
      }
      v7 = v60;
      v35 = (_QWORD *)(a2 + 8);
      v8 = v65;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( (v13 & 4) != 0 )
  {
    AddObjectToResultSet = PiDqSameUserHive((__int64 *)(a1 + 32), (__int64 *)(a2 + 24), &v57);
    if ( AddObjectToResultSet < 0 )
      goto LABEL_56;
    v10 = v57;
  }
  v14 = *(_QWORD *)(a1 + 24);
  v15 = *(_DWORD *)(v14 + 40) & 4;
  if ( (*(_DWORD *)(v14 + 40) & 2) != 0 )
  {
    if ( v15 )
    {
      v51 = 0;
      if ( *(_DWORD *)(a2 + 76) )
      {
        do
        {
          v52 = 32LL * v51;
          if ( *(_DWORD *)(v52 + a2 + 100) != 1 || v10 )
          {
            if ( !*(_QWORD *)(v52 + a2 + 104) )
              goto LABEL_92;
            for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v54 + 1 )
            {
              if ( !wcsicmp(*(const wchar_t **)(v52 + a2 + 104), i) )
                goto LABEL_92;
              v54 = -1LL;
              do
                ++v54;
              while ( i[v54] );
            }
          }
          ++v51;
        }
        while ( v51 < *(_DWORD *)(a2 + 76) );
        v5 = 0;
      }
    }
    else
    {
LABEL_92:
      v5 = 1;
      v63 = 1;
    }
  }
  else
  {
    v16 = *(_DWORD *)(v14 + 64);
    if ( v15 )
    {
      v21 = 0;
      if ( !v16 )
        goto LABEL_24;
      while ( 1 )
      {
        v5 = 0;
        v22 = 0;
        v23 = *(_QWORD *)(v14 + 72) + 32LL * v21;
        v63 = 0;
        if ( *(_DWORD *)(a2 + 76) )
          break;
LABEL_22:
        v14 = *(_QWORD *)(a1 + 24);
        if ( ++v21 >= *(_DWORD *)(v14 + 64) )
          goto LABEL_23;
      }
      while ( 1 )
      {
        v5 = 0;
        v24 = 32LL * v22;
        v63 = 0;
        if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(v24 + a2 + 96) )
        {
          v63 = 0;
          v45 = *(_QWORD *)v23 - *(_QWORD *)(v24 + a2 + 80);
          if ( !v45 )
            v45 = *(_QWORD *)(v23 + 8) - *(_QWORD *)(v24 + a2 + 88);
          if ( !v45 )
          {
            v46 = *(_DWORD *)(v24 + a2 + 100);
            v63 = 0;
            if ( *(_DWORD *)(v23 + 20) == v46 )
            {
              if ( v46 != 1 )
                break;
              v63 = 0;
              if ( v57 )
                break;
            }
          }
        }
LABEL_21:
        if ( ++v22 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_22;
      }
      if ( !*(_QWORD *)(v24 + a2 + 104) )
      {
        v5 = 1;
        v63 = 1;
LABEL_23:
        v9 = v64;
        goto LABEL_24;
      }
      for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); ; j += v48 + 1 )
      {
        if ( !*j )
        {
          v5 = 0;
          v63 = 0;
          goto LABEL_21;
        }
        if ( !wcsicmp(*(const wchar_t **)(v24 + a2 + 104), j) )
          break;
        v48 = -1LL;
        do
          ++v48;
        while ( j[v48] );
      }
      v5 = 1;
      v63 = 1;
    }
    else
    {
      v17 = 0;
      if ( v16 )
      {
        do
        {
          v18 = 0;
          v19 = *(_QWORD *)(v14 + 72) + 32LL * v17;
          while ( 1 )
          {
            if ( v18 >= *(_DWORD *)(a2 + 76) )
            {
              v5 = v63;
              goto LABEL_16;
            }
            v20 = 32LL * v18;
            if ( *(_DWORD *)(v19 + 16) == *(_DWORD *)(v20 + a2 + 96) )
            {
              v42 = *(_QWORD *)v19 - *(_QWORD *)(v20 + a2 + 80);
              if ( *(_QWORD *)v19 == *(_QWORD *)(v20 + a2 + 80) )
                v42 = *(_QWORD *)(v19 + 8) - *(_QWORD *)(v20 + a2 + 88);
              if ( !v42 && *(_DWORD *)(v19 + 20) == *(_DWORD *)(v20 + a2 + 100) )
              {
                v43 = *(const wchar_t **)(v19 + 24);
                v44 = *(const wchar_t **)(v20 + a2 + 104);
                if ( (v43 == v44 || v43 && v44 && !wcsicmp(v43, v44)) && (*(_DWORD *)(v20 + a2 + 100) != 1 || v10) )
                  break;
              }
            }
            ++v18;
          }
          v5 = 1;
          v63 = 1;
LABEL_16:
          v14 = *(_QWORD *)(a1 + 24);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(v14 + 64) );
        goto LABEL_23;
      }
    }
    v9 = 0;
  }
LABEL_24:
  v25 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v25 + 20) )
  {
    LODWORD(v25) = *(_DWORD *)(a2 + 4);
    if ( (v25 & 8) != 0 )
    {
      v9 = 1;
      goto LABEL_42;
    }
    v9 = 0;
  }
  v26 = 0;
LABEL_28:
  if ( v26 < *(_DWORD *)(a2 + 76) )
  {
    v27 = 0;
    v28 = 32LL * v26;
    while ( 1 )
    {
      v29 = *(_QWORD *)(a1 + 24);
      if ( v27 >= *(_DWORD *)(v29 + 80) )
      {
        ++v26;
        goto LABEL_28;
      }
      v30 = *(_QWORD *)(v29 + 88);
      v31 = 56LL * v27;
      LODWORD(v25) = *(_DWORD *)(v28 + a2 + 96);
      if ( *(_DWORD *)(v31 + v30 + 24) == (_DWORD)v25 )
      {
        v32 = *(_QWORD *)(v31 + v30 + 8) - *(_QWORD *)(v28 + a2 + 80);
        if ( !v32 )
          v32 = *(_QWORD *)(v31 + v30 + 16) - *(_QWORD *)(v28 + a2 + 88);
        if ( !v32 )
        {
          LODWORD(v25) = *(_DWORD *)(v28 + a2 + 100);
          if ( *(_DWORD *)(v31 + v30 + 28) == (_DWORD)v25 )
          {
            v33 = *(const wchar_t **)(v31 + v30 + 32);
            v34 = *(const wchar_t **)(v28 + a2 + 104);
            if ( v33 == v34 || v33 && v34 && (LODWORD(v25) = wcsicmp(v33, v34), !(_DWORD)v25) )
            {
              if ( *(_DWORD *)(v28 + a2 + 100) != 1 || v57 )
                break;
            }
          }
        }
      }
      ++v27;
    }
    v9 = 1;
  }
  v5 = v63;
LABEL_42:
  if ( v5 || v9 )
  {
    v7 = v60;
    v8 = v60;
    goto LABEL_46;
  }
  return v25;
}
