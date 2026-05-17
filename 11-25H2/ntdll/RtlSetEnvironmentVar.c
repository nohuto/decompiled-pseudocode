/*
 * XREFs of RtlSetEnvironmentVar @ 0x1800AB3E0
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x1800AB008 (RtlpResetDriveEnvironment.c)
 *     RtlSetEnvironmentVariable @ 0x1800AB3A0 (RtlSetEnvironmentVariable.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800ABD74 (RtlpWow64ThunkEnvironmentTo64.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x1800AAF0C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocateEnvBlock @ 0x1800ABD28 (RtlpAllocateEnvBlock.c)
 *     RtlpAllocationSize @ 0x1800ABD54 (RtlpAllocationSize.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlSetEnvironmentVar(
        unsigned __int16 *a1,
        _RTL_USER_PROCESS_PARAMETERS *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r9
  unsigned __int16 *v7; // r8
  unsigned __int64 i; // rax
  __int16 v9; // cx
  unsigned __int64 j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r12
  char *v13; // rbx
  _BYTE *Environment; // r15
  char *v15; // rsi
  char *v16; // r14
  unsigned __int64 v17; // r12
  char *v18; // r15
  unsigned __int64 v19; // rdi
  char *v20; // rcx
  char *v21; // r11
  unsigned __int64 v22; // rax
  unsigned __int16 *v23; // rbx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r10
  __int64 v26; // rcx
  int v27; // ecx
  char *v28; // rax
  unsigned __int64 v29; // rdi
  char *v30; // r14
  __int16 v31; // ax
  unsigned __int64 v32; // rcx
  size_t v33; // rbx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  char *v36; // rax
  char *v37; // r15
  __int64 v38; // rbx
  char *v39; // rdi
  char *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // r14
  int v47; // ebx
  _RTL_USER_PROCESS_PARAMETERS *v48; // rcx
  char *v49; // r14
  __int16 v50; // ax
  char *v51; // rcx
  unsigned __int64 v52; // r15
  char *EnvBlock; // r12
  size_t v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  char *v60; // rdi
  size_t v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  char *v66; // rsi
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v69; // [rsp+20h] [rbp-A8h]
  char v70; // [rsp+21h] [rbp-A7h]
  _BYTE *Src; // [rsp+28h] [rbp-A0h]
  char *v72; // [rsp+30h] [rbp-98h]
  _RTL_USER_PROCESS_PARAMETERS *v73; // [rsp+40h] [rbp-88h]
  char *v74; // [rsp+58h] [rbp-70h]
  _RTL_USER_PROCESS_PARAMETERS *v76; // [rsp+D8h] [rbp+10h]

  v76 = a2;
  v6 = a3;
  v7 = a1;
  v69 = 0;
  v70 = 0;
  if ( !v6 || !LOWORD(a2->MaximumLength) )
    return 3221225485LL;
  for ( i = 1LL; i < v6; ++i )
  {
    v9 = *((_WORD *)&a2->MaximumLength + i);
    if ( !v9 || v9 == 61 )
      return 3221225485LL;
  }
  if ( a4 )
  {
    for ( j = 0LL; j < a5; ++j )
    {
      if ( !a4[j] )
        return 3221225485LL;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v73 = ProcessParameters;
  v13 = 0LL;
  v72 = 0LL;
  if ( !v7 )
  {
    v70 = 1;
    v69 = 1;
    RtlEnterCriticalSection((__int64)&::FastPebLock);
    Environment = ProcessParameters->Environment;
    Src = Environment;
    v6 = a3;
LABEL_124:
    a2 = v76;
    goto LABEL_15;
  }
  Environment = *(_BYTE **)v7;
  Src = *(_BYTE **)v7;
  if ( ProcessParameters->Environment == *(void **)v7 )
  {
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || (v13 = 0LL, v72 = 0LL, FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread) )
    {
      v69 = 1;
      a2 = v76;
      goto LABEL_15;
    }
    goto LABEL_124;
  }
LABEL_15:
  v15 = Environment;
  v16 = 0LL;
  if ( !Environment )
  {
    v29 = a5;
    goto LABEL_56;
  }
  v74 = 0LL;
  v17 = 0LL;
  while ( 2 )
  {
    if ( !*(_WORD *)v15 )
    {
      v29 = a5;
LABEL_54:
      v13 = v72;
      goto LABEL_56;
    }
    v18 = v15;
    v19 = 0LL;
    while ( 1 )
    {
      v15 += 2;
      if ( !*(_WORD *)v15 )
        break;
      if ( *(_WORD *)v15 == 61 )
      {
        v19 = (v15 - v18) >> 1;
        v15 += 2;
        v20 = v15;
        v74 = v15;
        while ( *(_WORD *)v15 )
          v15 += 2;
        v17 = (v15 - v20) >> 1;
        break;
      }
    }
    v15 += 2;
    v7 = (unsigned __int16 *)a2;
    v21 = v18;
    v22 = v19;
    if ( v6 <= v19 )
      v22 = v6;
    v23 = (unsigned __int16 *)((char *)a2 + 2 * v22);
    while ( v7 < v23 )
    {
      v24 = *v7;
      v25 = *(unsigned __int16 *)v21;
      if ( (_WORD)v24 == (_WORD)v25 )
        goto LABEL_30;
      if ( (unsigned int)v24 < 0x61 )
        goto LABEL_34;
      if ( (unsigned int)v24 <= 0x7A )
      {
        LOWORD(v24) = v24 - 32;
LABEL_34:
        v26 = qword_1801CF038;
        goto LABEL_35;
      }
      v26 = qword_1801CF038;
      if ( qword_1801CF038 && (unsigned __int16)v24 >= 0xC0u )
      {
        v26 = qword_1801CF038;
        a2 = (_RTL_USER_PROCESS_PARAMETERS *)(v24 & 0xF);
        LOWORD(v24) = *(_WORD *)(qword_1801CF038
                               + 2LL
                               * ((unsigned int)a2
                                + *(unsigned __int16 *)(qword_1801CF038
                                                      + 2LL
                                                      * (*(unsigned __int16 *)(qword_1801CF038 + 2 * (v24 >> 8))
                                                       + (unsigned int)((unsigned __int8)v24 >> 4)))))
                    + v24;
      }
LABEL_35:
      if ( (unsigned int)v25 >= 0x61 )
      {
        if ( (unsigned int)v25 > 0x7A )
        {
          if ( v26 && (unsigned __int16)v25 >= 0xC0u )
          {
            a2 = (_RTL_USER_PROCESS_PARAMETERS *)(v25 & 0xF);
            LOWORD(v25) = *(_WORD *)(qword_1801CF038
                                   + 2LL
                                   * ((unsigned int)a2
                                    + *(unsigned __int16 *)(qword_1801CF038
                                                          + 2LL
                                                          * (*(unsigned __int16 *)(v26 + 2 * (v25 >> 8))
                                                           + (unsigned int)((unsigned __int8)v25 >> 4)))))
                        + v25;
          }
        }
        else
        {
          LOWORD(v25) = v25 - 32;
        }
      }
      if ( (_WORD)v24 != (_WORD)v25 )
      {
        v27 = (unsigned __int16)v24 - (unsigned __int16)v25;
        v6 = a3;
        goto LABEL_40;
      }
LABEL_30:
      ++v7;
      v21 += 2;
    }
    v6 = a3;
    v27 = a3 - v19;
LABEL_40:
    if ( v27 )
    {
      if ( v27 < 0 )
      {
        v28 = v72;
        if ( !v72 )
          v28 = v18;
        v72 = v28;
      }
      a2 = v76;
      Environment = Src;
      continue;
    }
    break;
  }
  v49 = v15;
  while ( *(_WORD *)v49 )
  {
    do
    {
      v50 = *(_WORD *)v49;
      v49 += 2;
    }
    while ( v50 );
  }
  v16 = v49 + 2;
  if ( !a4 )
  {
    memmove(v18, v15, 2 * (unsigned int)((v16 - v15) >> 1));
LABEL_105:
    if ( v69 )
      RtlpClearEnvironmentHashTable(v59, (__int64)a2, (__int64)v7, v6);
    v29 = a5;
    Environment = Src;
    goto LABEL_54;
  }
  v29 = a5;
  if ( a5 <= v17 )
  {
    memmove(v74, a4, 2 * a5);
    *(_WORD *)&v74[2 * a5] = 0;
    v51 = &v74[2 * a5 + 2];
    if ( a5 != v17 )
      memmove(v51, v15, 2 * (unsigned int)((v16 - v15) >> 1));
    if ( v69 )
      RtlpClearEnvironmentHashTable((__int64)v51, (__int64)a2, (__int64)v7, v6);
    Environment = Src;
    goto LABEL_54;
  }
  v52 = 2 * (a5 + ((v16 - Src) >> 1) - v17);
  if ( v52 < RtlpAllocationSize(Src, a2, v7, v6) )
  {
    v60 = &v74[2 * a5];
    memmove(v60 + 2, v15, 2 * (unsigned int)((v16 - v15) >> 1));
    *(_WORD *)v60 = 0;
    memmove(v74, a4, 2 * a5);
    if ( !a1 )
    {
      v59 = (__int64)Src;
      a2 = v73;
      v73->Environment = Src;
      v73->EnvironmentSize = v52;
      ++v73->EnvironmentVersion;
    }
    goto LABEL_105;
  }
  EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v16 - Src) >> 1) - v17));
  if ( !EnvBlock )
  {
    v47 = -1073741670;
    v46 = v69;
    v48 = v73;
    goto LABEL_117;
  }
  v54 = 2LL * (unsigned int)((v74 - Src) >> 1);
  memmove(EnvBlock, Src, v54);
  memmove(&EnvBlock[v54], a4, 2 * a5);
  *(_WORD *)&EnvBlock[2 * a5 + v54] = 0;
  memmove(&EnvBlock[2 * a5 + 2 + v54], v15, 2 * (unsigned int)((v16 - v15) >> 1));
  if ( a1 )
  {
    *(_QWORD *)a1 = EnvBlock;
  }
  else
  {
    v55 = (__int64)v73;
    v73->Environment = EnvBlock;
    v73->EnvironmentSize = v52;
    ++v73->EnvironmentVersion;
  }
  if ( v69 )
    RtlpClearEnvironmentHashTable(v56, v55, v57, v58);
  if ( v70 )
  {
    RtlLeaveCriticalSection((__int64)&::FastPebLock);
    v70 = 0;
  }
  Environment = Src;
  RtlpSysVolFree((__int64)Src);
  v29 = a5;
  v13 = v72;
LABEL_56:
  if ( v13 )
    v15 = v13;
  if ( v16 || !a4 )
  {
LABEL_78:
    v46 = v69;
LABEL_79:
    v47 = 0;
    v48 = v73;
    goto LABEL_117;
  }
  if ( v15 )
  {
    v30 = v15;
    while ( *(_WORD *)v30 )
    {
      do
      {
        v31 = *(_WORD *)v30;
        v30 += 2;
      }
      while ( v31 );
    }
    v16 = v30 + 2;
    v32 = RtlpAllocationSize(Environment, a2, v7, v6);
    v33 = a3;
    v34 = 2 * (v29 + a3 + ((v16 - Environment) >> 1)) + 4;
    v35 = v29 + a3;
  }
  else
  {
    v33 = a3;
    v35 = a3 + v29;
    v34 = 2 * (a3 + v29) + 6;
    v32 = 0LL;
  }
  if ( v34 < v32 )
  {
    memmove(&v15[2 * v35 + 4], v15, 2 * (unsigned int)((v16 - v15) >> 1));
    v61 = 2 * v33;
    memmove(v15, v76, v61);
    v46 = v69;
    if ( v69 )
      RtlpClearEnvironmentHashTable(v63, v62, v64, v65);
    v66 = &v15[v61];
    *(_WORD *)v66 = 61;
    v66 += 2;
    memmove(v66, a4, 2 * v29);
    *(_WORD *)&v66[2 * v29] = 0;
    if ( !a1 )
    {
      v48 = v73;
      v73->Environment = Environment;
      v73->EnvironmentSize = v34;
      ++v73->EnvironmentVersion;
      v47 = 0;
      goto LABEL_117;
    }
    goto LABEL_79;
  }
  v36 = (char *)RtlpAllocateEnvBlock(v34);
  v37 = v36;
  if ( v36 )
  {
    if ( v15 )
    {
      v38 = (unsigned int)((v15 - Src) >> 1);
      memmove(v36, Src, 2 * v38);
    }
    else
    {
      v38 = 0LL;
    }
    v39 = &v37[2 * v38];
    memmove(v39, v76, 2 * a3);
    v40 = &v39[2 * a3];
    *(_WORD *)v40 = 61;
    v41 = 2 * a5;
    memmove(v40 + 2, a4, 2 * a5);
    *(_WORD *)&v40[2 * a5 + 2] = 0;
    if ( v15 )
    {
      memmove(&v40[v41 + 4], v15, 2 * (unsigned int)((v16 - v15) >> 1));
      if ( v69 )
        RtlpClearEnvironmentHashTable(v43, v42, v44, v45);
    }
    else
    {
      *(_WORD *)&v40[v41 + 4] = 0;
    }
    if ( a1 )
    {
      *(_QWORD *)a1 = v37;
    }
    else
    {
      v73->Environment = v37;
      v73->EnvironmentSize = v34;
      ++v73->EnvironmentVersion;
    }
    if ( v70 )
    {
      RtlLeaveCriticalSection((__int64)&::FastPebLock);
      v70 = 0;
    }
    RtlpSysVolFree((__int64)Src);
    goto LABEL_78;
  }
  v47 = -1073741670;
  v46 = v69;
  v48 = v73;
LABEL_117:
  if ( v47 >= 0 && v46 )
    ++v48->EnvironmentVersion;
  if ( v70 )
    RtlLeaveCriticalSection((__int64)&::FastPebLock);
  return (unsigned int)v47;
}
