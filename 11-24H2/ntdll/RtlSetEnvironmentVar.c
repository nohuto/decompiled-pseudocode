/*
 * XREFs of RtlSetEnvironmentVar @ 0x180083050
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x180082C78 (RtlpResetDriveEnvironment.c)
 *     RtlSetEnvironmentVariable @ 0x180083010 (RtlSetEnvironmentVariable.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800839E4 (RtlpWow64ThunkEnvironmentTo64.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x180082B7C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocateEnvBlock @ 0x180083998 (RtlpAllocateEnvBlock.c)
 *     RtlpAllocationSize @ 0x1800839C4 (RtlpAllocationSize.c)
 *     memmove @ 0x180167400 (memmove.c)
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
  char v42; // r14
  int v43; // ebx
  _RTL_USER_PROCESS_PARAMETERS *v44; // rcx
  char *v45; // r14
  __int16 v46; // ax
  unsigned __int64 v47; // r15
  char *EnvBlock; // r12
  size_t v49; // rbx
  char *v50; // rdi
  size_t v51; // rbx
  char *v52; // rsi
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v55; // [rsp+20h] [rbp-A8h]
  char v56; // [rsp+21h] [rbp-A7h]
  _BYTE *Src; // [rsp+28h] [rbp-A0h]
  char *v58; // [rsp+30h] [rbp-98h]
  _RTL_USER_PROCESS_PARAMETERS *v59; // [rsp+40h] [rbp-88h]
  char *v60; // [rsp+58h] [rbp-70h]
  _RTL_USER_PROCESS_PARAMETERS *v62; // [rsp+D8h] [rbp+10h]

  v62 = a2;
  v6 = a3;
  v7 = a1;
  v55 = 0;
  v56 = 0;
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
  v59 = ProcessParameters;
  v13 = 0LL;
  v58 = 0LL;
  if ( !v7 )
  {
    v56 = 1;
    v55 = 1;
    RtlEnterCriticalSection((__int64)&::FastPebLock);
    Environment = ProcessParameters->Environment;
    Src = Environment;
    v6 = a3;
LABEL_124:
    a2 = v62;
    goto LABEL_15;
  }
  Environment = *(_BYTE **)v7;
  Src = *(_BYTE **)v7;
  if ( ProcessParameters->Environment == *(void **)v7 )
  {
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || (v13 = 0LL, v58 = 0LL, FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread) )
    {
      v55 = 1;
      a2 = v62;
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
  v60 = 0LL;
  v17 = 0LL;
  while ( 2 )
  {
    if ( !*(_WORD *)v15 )
    {
      v29 = a5;
LABEL_54:
      v13 = v58;
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
        v60 = v15;
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
        v26 = qword_1801CD038;
        goto LABEL_35;
      }
      v26 = qword_1801CD038;
      if ( qword_1801CD038 && (unsigned __int16)v24 >= 0xC0u )
      {
        v26 = qword_1801CD038;
        a2 = (_RTL_USER_PROCESS_PARAMETERS *)(v24 & 0xF);
        LOWORD(v24) = *(_WORD *)(qword_1801CD038
                               + 2LL
                               * ((unsigned int)a2
                                + *(unsigned __int16 *)(qword_1801CD038
                                                      + 2LL
                                                      * (*(unsigned __int16 *)(qword_1801CD038 + 2 * (v24 >> 8))
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
            LOWORD(v25) = *(_WORD *)(qword_1801CD038
                                   + 2LL
                                   * ((unsigned int)a2
                                    + *(unsigned __int16 *)(qword_1801CD038
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
        v28 = v58;
        if ( !v58 )
          v28 = v18;
        v58 = v28;
      }
      a2 = v62;
      Environment = Src;
      continue;
    }
    break;
  }
  v45 = v15;
  while ( *(_WORD *)v45 )
  {
    do
    {
      v46 = *(_WORD *)v45;
      v45 += 2;
    }
    while ( v46 );
  }
  v16 = v45 + 2;
  if ( !a4 )
  {
    memmove(v18, v15, 2 * (unsigned int)((v16 - v15) >> 1));
LABEL_105:
    if ( v55 )
      RtlpClearEnvironmentHashTable();
    v29 = a5;
    Environment = Src;
    goto LABEL_54;
  }
  v29 = a5;
  if ( a5 <= v17 )
  {
    memmove(v60, a4, 2 * a5);
    *(_WORD *)&v60[2 * a5] = 0;
    if ( a5 != v17 )
      memmove(&v60[2 * a5 + 2], v15, 2 * (unsigned int)((v16 - v15) >> 1));
    if ( v55 )
      RtlpClearEnvironmentHashTable();
    Environment = Src;
    goto LABEL_54;
  }
  v47 = 2 * (a5 + ((v16 - Src) >> 1) - v17);
  if ( v47 < RtlpAllocationSize(Src, a2, v7, v6) )
  {
    v50 = &v60[2 * a5];
    memmove(v50 + 2, v15, 2 * (unsigned int)((v16 - v15) >> 1));
    *(_WORD *)v50 = 0;
    memmove(v60, a4, 2 * a5);
    if ( !a1 )
    {
      a2 = v59;
      v59->Environment = Src;
      v59->EnvironmentSize = v47;
      ++v59->EnvironmentVersion;
    }
    goto LABEL_105;
  }
  EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v16 - Src) >> 1) - v17));
  if ( !EnvBlock )
  {
    v43 = -1073741670;
    v42 = v55;
    v44 = v59;
    goto LABEL_117;
  }
  v49 = 2LL * (unsigned int)((v60 - Src) >> 1);
  memmove(EnvBlock, Src, v49);
  memmove(&EnvBlock[v49], a4, 2 * a5);
  *(_WORD *)&EnvBlock[2 * a5 + v49] = 0;
  memmove(&EnvBlock[2 * a5 + 2 + v49], v15, 2 * (unsigned int)((v16 - v15) >> 1));
  if ( a1 )
  {
    *(_QWORD *)a1 = EnvBlock;
  }
  else
  {
    v59->Environment = EnvBlock;
    v59->EnvironmentSize = v47;
    ++v59->EnvironmentVersion;
  }
  if ( v55 )
    RtlpClearEnvironmentHashTable();
  if ( v56 )
  {
    RtlLeaveCriticalSection((__int64)&::FastPebLock);
    v56 = 0;
  }
  Environment = Src;
  RtlpSysVolFree((__int64)Src);
  v29 = a5;
  v13 = v58;
LABEL_56:
  if ( v13 )
    v15 = v13;
  if ( v16 || !a4 )
  {
LABEL_78:
    v42 = v55;
LABEL_79:
    v43 = 0;
    v44 = v59;
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
    v51 = 2 * v33;
    memmove(v15, v62, v51);
    v42 = v55;
    if ( v55 )
      RtlpClearEnvironmentHashTable();
    v52 = &v15[v51];
    *(_WORD *)v52 = 61;
    v52 += 2;
    memmove(v52, a4, 2 * v29);
    *(_WORD *)&v52[2 * v29] = 0;
    if ( !a1 )
    {
      v44 = v59;
      v59->Environment = Environment;
      v59->EnvironmentSize = v34;
      ++v59->EnvironmentVersion;
      v43 = 0;
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
    memmove(v39, v62, 2 * a3);
    v40 = &v39[2 * a3];
    *(_WORD *)v40 = 61;
    v41 = 2 * a5;
    memmove(v40 + 2, a4, 2 * a5);
    *(_WORD *)&v40[2 * a5 + 2] = 0;
    if ( v15 )
    {
      memmove(&v40[v41 + 4], v15, 2 * (unsigned int)((v16 - v15) >> 1));
      if ( v55 )
        RtlpClearEnvironmentHashTable();
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
      v59->Environment = v37;
      v59->EnvironmentSize = v34;
      ++v59->EnvironmentVersion;
    }
    if ( v56 )
    {
      RtlLeaveCriticalSection((__int64)&::FastPebLock);
      v56 = 0;
    }
    RtlpSysVolFree((__int64)Src);
    goto LABEL_78;
  }
  v43 = -1073741670;
  v42 = v55;
  v44 = v59;
LABEL_117:
  if ( v43 >= 0 && v42 )
    ++v44->EnvironmentVersion;
  if ( v56 )
    RtlLeaveCriticalSection((__int64)&::FastPebLock);
  return (unsigned int)v43;
}
