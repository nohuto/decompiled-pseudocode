/*
 * XREFs of EmpProviderRegister @ 0x140AAEE50
 * Callers:
 *     EmProviderRegister @ 0x140707780 (EmProviderRegister.c)
 *     HalRegisterErrataCallbacks @ 0x140BE0860 (HalRegisterErrataCallbacks.c)
 *     EmInitSystem @ 0x140C62920 (EmInitSystem.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpQueueRuleUpdateState @ 0x14057C690 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x14057C990 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x14057C9C8 (EmpSearchEntryDatabase.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  __int64 v6; // rbp
  void *v8; // r14
  unsigned int v10; // r13d
  unsigned int v11; // edi
  char *v12; // rax
  signed __int8 v13; // cf
  char *v14; // rbx
  __int64 Pool2; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 i; // r10
  __int64 v24; // r14
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rbp
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // r10
  __int64 v40; // r11
  _QWORD *v41; // rcx
  __int64 v42; // rax
  void *v43; // rcx
  unsigned int v44; // edx
  _QWORD *v45; // r8
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 j; // rbp
  __int64 v52; // rdx
  _QWORD *k; // rsi
  __int64 m; // rbp
  __int64 v55; // rdx
  _QWORD *n; // rsi

  v6 = a3;
  v8 = a1;
  v10 = 0;
  v11 = 0;
  v12 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v14 = v12;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v12, (__int64)&EmpDatabaseLock);
  if ( v14 )
    v14[10] = 1;
  if ( !a6 || (_DWORD)v6 && !a2 || a5 && !a4 )
  {
    v11 = -1073741811;
    goto LABEL_76;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x48uLL, 0x72704D45u);
  v16 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_76;
  }
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  v17 = (_QWORD *)(Pool2 + 56);
  v17[1] = v17;
  *v17 = v17;
  if ( !(_DWORD)v6 )
    goto LABEL_30;
  v18 = ExAllocatePool2(0x100uLL, (unsigned int)(8 * v6), 0x72704D45u);
  *(_QWORD *)(v16 + 8) = v18;
  if ( !v18 )
    goto LABEL_14;
  *(_DWORD *)(v16 + 16) = v6;
  v19 = (_QWORD *)(a2 + 8);
  v20 = v6;
  do
  {
    if ( *v19 )
      ++*(_DWORD *)(v16 + 32);
    v19 += 3;
    --v20;
  }
  while ( v20 );
  v21 = *(_DWORD *)(v16 + 32);
  if ( v21 )
  {
    v22 = ExAllocatePool2(0x100uLL, (unsigned int)(32 * v21), 0x72704D45u);
    *(_QWORD *)(v16 + 24) = v22;
    if ( !v22 )
      goto LABEL_14;
  }
  for ( i = 0LL; ; i = (unsigned int)(v27 + 1) )
  {
    if ( (unsigned int)i >= (unsigned int)v6 )
    {
      v8 = a1;
LABEL_30:
      if ( !a5 )
      {
LABEL_62:
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v16 + 16); j = (unsigned int)(j + 1) )
        {
          v52 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * j);
          _InterlockedIncrement((volatile signed __int32 *)(v52 + 16));
          for ( k = *(_QWORD **)(v52 + 72); k; k = (_QWORD *)*k )
            EmpQueueRuleUpdateState(*(k - 1), 0LL);
        }
        for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v16 + 48); m = (unsigned int)(m + 1) )
        {
          v55 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8 * m);
          _InterlockedIncrement((volatile signed __int32 *)(v55 + 24));
          for ( n = *(_QWORD **)(v55 + 48); n; n = (_QWORD *)*n )
            EmpQueueRuleUpdateState(*(n - 1), 0LL);
        }
        if ( v8 )
          PsReferenceSiloContext(v8);
        *(_QWORD *)v16 = v8;
        *a6 = v16;
        goto LABEL_76;
      }
      v34 = ExAllocatePool2(0x100uLL, 8 * a5, 0x72704D45u);
      *(_QWORD *)(v16 + 40) = v34;
      if ( v34 )
      {
        *(_DWORD *)(v16 + 48) = a5;
        v35 = 0LL;
        while ( (unsigned int)v35 < a5 )
        {
          v36 = *(_QWORD *)(a4 + 24 * v35 + 8);
          if ( !v36 )
            goto LABEL_42;
          v37 = *(_QWORD **)(a4 + 24 * v35);
          if ( !v37 )
            goto LABEL_42;
          v38 = EmpSearchCallbackDatabase(v37);
          v41 = v38;
          if ( !v38 )
            goto LABEL_41;
          v42 = v38[2];
          if ( v42 && v42 != v36 )
          {
            v11 = -1073741771;
            goto LABEL_43;
          }
          *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8 * v39) = v41;
          v35 = (unsigned int)(v39 + 1);
          v41[2] = *(_QWORD *)(a4 + 8 * v40 + 8);
          v41[4] = *(_QWORD *)(a4 + 8 * v40 + 16);
        }
        v8 = a1;
        goto LABEL_62;
      }
LABEL_14:
      v11 = -1073741670;
      goto LABEL_43;
    }
    v24 = 3 * i;
    v25 = *(_QWORD **)(a2 + 24 * i);
    if ( !v25 )
      break;
    v26 = EmpSearchEntryDatabase(v25);
    v28 = v26;
    if ( !v26 )
    {
LABEL_41:
      v11 = -1073741275;
      goto LABEL_43;
    }
    *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * v27) = v26;
    v29 = *(_QWORD *)(a2 + 8 * v24 + 8);
    if ( v29 )
    {
      v30 = (_QWORD *)(*(_QWORD *)(v16 + 24) + 32LL * v10);
      *v30 = v29;
      v30[1] = *(_QWORD *)(a2 + 8 * v24 + 16);
      v31 = v28 + 7;
      v32 = (_QWORD *)v28[8];
      v33 = v30 + 2;
      if ( (_QWORD *)*v32 != v31 )
        goto LABEL_60;
      *v33 = v31;
      ++v10;
      v33[1] = v32;
      *v32 = v33;
      v31[1] = v33;
    }
  }
LABEL_42:
  v11 = -1073741811;
LABEL_43:
  v43 = *(void **)(v16 + 8);
  if ( v43 )
    ExFreePoolWithTag(v43, 0x72704D45u);
  if ( *(_QWORD *)(v16 + 24) )
  {
    v44 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v45 = (_QWORD *)(32LL * v44 + *(_QWORD *)(v16 + 24) + 16LL);
        v46 = *v45;
        if ( *(_QWORD **)(*v45 + 8LL) != v45 )
          break;
        v47 = (_QWORD *)v45[1];
        if ( (_QWORD *)*v47 != v45 )
          break;
        ++v44;
        *v47 = v46;
        *(_QWORD *)(v46 + 8) = v47;
        if ( v44 >= v10 )
          goto LABEL_50;
      }
LABEL_60:
      __fastfail(3u);
    }
LABEL_50:
    ExFreePoolWithTag(*(PVOID *)(v16 + 24), 0x72704D45u);
  }
  if ( *(_QWORD *)(v16 + 40) )
  {
    if ( a5 )
    {
      v48 = 0LL;
      v49 = a5;
      do
      {
        v50 = *(_QWORD *)(v48 + *(_QWORD *)(v16 + 40));
        if ( v50 && !*(_DWORD *)(v50 + 24) )
          *(_QWORD *)(v50 + 16) = 0LL;
        v48 += 8LL;
        --v49;
      }
      while ( v49 );
    }
    ExFreePoolWithTag(*(PVOID *)(v16 + 40), 0x72704D45u);
  }
  ExFreePoolWithTag((PVOID)v16, 0x72704D45u);
LABEL_76:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v11;
}
