/*
 * XREFs of LogOp2_32 @ 0x140007938
 * Callers:
 *     LogOp2 @ 0x1400077A0 (LogOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     memcmp @ 0x140071460 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v6; // r9
  int v7; // edi
  __int64 v8; // rcx
  __int16 v9; // dx
  _WORD *v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  size_t v13; // r8
  const void *v14; // rdx
  const void *v15; // rcx
  int v16; // eax
  int v17; // r9d
  bool v18; // zf
  __int64 v20; // rcx
  __int16 v21; // dx
  _WORD *v22; // rax
  __int64 v23; // rax
  __int16 v24; // cx
  _WORD *v25; // rax
  unsigned __int8 *v26; // rax
  __int64 v27; // r8
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // r14d
  unsigned int v32; // ebp
  size_t v33; // r8
  const void *v34; // rdx
  const void *v35; // rcx
  int v36; // eax
  int v37; // r9d
  unsigned int v38; // eax
  unsigned int v39; // r9d
  __int64 v40; // rax
  unsigned int v41; // edx
  bool v42; // zf
  bool v43; // zf
  unsigned int v44; // r14d
  unsigned int v45; // ebp
  size_t v46; // r8
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // edx
  bool v51; // zf
  bool v52; // sf
  bool v53; // zf

  v2 = a2[7];
  v3 = 0;
  LOBYTE(v6) = 0;
  v7 = 0;
  if ( *(_DWORD *)(v2 + 8) == 144 )
  {
    LOBYTE(v2) = 1;
    v7 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v7 < 0 )
      return (unsigned int)v7;
    v23 = a2[10];
    if ( *(_DWORD *)(v23 + 16) )
    {
      LOBYTE(v6) = 1;
      if ( *(_DWORD *)(v23 + 56) )
        goto LABEL_15;
    }
LABEL_28:
    LOBYTE(v6) = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v2 + 8) == 145 )
  {
    LOBYTE(v2) = 1;
    v7 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v7 < 0 )
      return (unsigned int)v7;
    v30 = a2[10];
    if ( *(_DWORD *)(v30 + 16) || *(_DWORD *)(v30 + 56) )
    {
      LOBYTE(v6) = 1;
      goto LABEL_15;
    }
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v2 + 8) != 147 )
  {
    if ( *(_DWORD *)(v2 + 8) == 148 )
    {
      LOBYTE(v2) = 1;
      v7 = ValidateArgTypes(a1, a2[10], v2, "DD");
      if ( v7 < 0 )
        return (unsigned int)v7;
      v20 = a2[10];
      v21 = *(_WORD *)(v20 + 2);
      v22 = (_WORD *)(v20 + 42);
      if ( v21 == 1 && *v22 == 1 )
      {
        LOBYTE(v6) = *(_DWORD *)(v20 + 16) > *(_DWORD *)(v20 + 56);
        goto LABEL_15;
      }
      if ( v21 == 2 )
      {
        if ( *v22 != 2 )
          goto LABEL_41;
        v48 = *(_DWORD *)(v20 + 64);
        if ( *(_DWORD *)(v20 + 24) <= v48 )
          v48 = *(_DWORD *)(v20 + 24);
        v37 = strncmp(*(const char **)(v20 + 32), *(const char **)(v20 + 72), v48);
        v49 = a2[10];
        v50 = *(_DWORD *)(v49 + 24);
        if ( v50 < *(_DWORD *)(v49 + 64) )
        {
          v51 = v37 == 0;
          v52 = v37 < 0;
          if ( v37 )
            goto LABEL_87;
          goto LABEL_52;
        }
        if ( v50 <= *(_DWORD *)(v49 + 64) )
          goto LABEL_86;
        v53 = v37 == 0;
      }
      else
      {
        if ( v21 != 3 || *v22 != 3 )
          goto LABEL_41;
        v31 = *(_DWORD *)(v20 + 24);
        v32 = *(_DWORD *)(v20 + 64);
        v33 = v32;
        v34 = *(const void **)(v20 + 72);
        v35 = *(const void **)(v20 + 32);
        if ( v31 <= v32 )
          v33 = v31;
        v36 = memcmp(v35, v34, v33);
        v37 = v36;
        if ( v31 < v32 )
        {
          if ( v36 )
          {
LABEL_86:
            v51 = v37 == 0;
            v52 = v37 < 0;
LABEL_87:
            LOBYTE(v6) = !v52 && !v51;
            goto LABEL_15;
          }
LABEL_52:
          v37 = -1;
          goto LABEL_86;
        }
        if ( v31 <= v32 )
          goto LABEL_86;
        v53 = v36 == 0;
      }
      if ( v53 )
        v37 = 1;
      goto LABEL_86;
    }
    if ( *(_DWORD *)(v2 + 8) != 149 )
      goto LABEL_15;
    LOBYTE(v2) = 1;
    v7 = ValidateArgTypes(a1, a2[10], v2, "DD");
    if ( v7 < 0 )
      return (unsigned int)v7;
    v6 = a2[10];
    v24 = *(_WORD *)(v6 + 2);
    v25 = (_WORD *)(v6 + 42);
    if ( v24 == 1 && *v25 == 1 )
    {
      LOBYTE(v6) = *(_DWORD *)(v6 + 16) < *(_DWORD *)(v6 + 56);
      goto LABEL_15;
    }
    if ( v24 == 2 )
    {
      if ( *v25 != 2 )
        goto LABEL_41;
      v38 = *(_DWORD *)(v6 + 64);
      if ( *(_DWORD *)(v6 + 24) <= v38 )
        v38 = *(_DWORD *)(v6 + 24);
      v39 = strncmp(*(const char **)(v6 + 32), *(const char **)(v6 + 72), v38);
      v40 = a2[10];
      v41 = *(_DWORD *)(v40 + 24);
      if ( v41 < *(_DWORD *)(v40 + 64) )
      {
        v42 = v39 == 0;
        goto LABEL_67;
      }
      if ( v41 > *(_DWORD *)(v40 + 64) )
      {
        v43 = v39 == 0;
        goto LABEL_71;
      }
    }
    else
    {
      if ( v24 != 3 || *v25 != 3 )
        goto LABEL_41;
      v44 = *(_DWORD *)(v6 + 24);
      v45 = *(_DWORD *)(v6 + 64);
      v46 = v45;
      if ( v44 <= v45 )
        v46 = v44;
      v47 = memcmp(*(const void **)(v6 + 32), *(const void **)(v6 + 72), v46);
      v39 = v47;
      if ( v44 < v45 )
      {
        v42 = v47 == 0;
LABEL_67:
        if ( v42 )
          v39 = -1;
        goto LABEL_73;
      }
      if ( v44 > v45 )
      {
        v43 = v47 == 0;
LABEL_71:
        if ( v43 )
          v39 = 1;
      }
    }
LABEL_73:
    LODWORD(v6) = v39 >> 31;
    goto LABEL_15;
  }
  LOBYTE(v2) = 1;
  v7 = ValidateArgTypes(a1, a2[10], v2, "DD");
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = a2[10];
  v9 = *(_WORD *)(v8 + 2);
  v10 = (_WORD *)(v8 + 42);
  if ( v9 != 1 || *v10 != 1 )
  {
    if ( v9 == 2 )
    {
      if ( *v10 == 2 )
      {
        v26 = *(unsigned __int8 **)(v8 + 32);
        v27 = *(_QWORD *)(v8 + 72) - (_QWORD)v26;
        do
        {
          v28 = v26[v27];
          v29 = *v26 - v28;
          if ( v29 )
            break;
          ++v26;
        }
        while ( v28 );
        v18 = v29 == 0;
        goto LABEL_14;
      }
    }
    else if ( v9 == 3 && *v10 == 3 )
    {
      v11 = *(_DWORD *)(v8 + 24);
      v12 = *(_DWORD *)(v8 + 64);
      v13 = v12;
      v14 = *(const void **)(v8 + 72);
      v15 = *(const void **)(v8 + 32);
      if ( v11 <= v12 )
        v13 = v11;
      v16 = memcmp(v15, v14, v13);
      v17 = v16;
      if ( v11 < v12 )
      {
        if ( !v16 )
          v17 = -1;
      }
      else if ( v11 > v12 && !v16 )
      {
        v17 = 1;
      }
      v18 = v17 == 0;
      goto LABEL_14;
    }
LABEL_41:
    v7 = -1073741811;
    LogError(3221225485LL);
    AcpiDiagTraceAmlError(a1, 3221225485LL);
    PrintDebugMessage(238, 0, 0, 0, 0LL);
    return (unsigned int)v7;
  }
  v18 = *(_DWORD *)(v8 + 16) == *(_DWORD *)(v8 + 56);
LABEL_14:
  LOBYTE(v6) = v18;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v6 )
  {
    IsCompatableDSDTRevision();
    v3 = -1;
  }
  *(_DWORD *)(a2[11] + 16LL) = v3;
  return (unsigned int)v7;
}
