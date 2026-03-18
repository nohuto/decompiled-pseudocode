/*
 * XREFs of EmpProviderRegister @ 0x140AAEEF0
 * Callers:
 *     EmProviderRegister @ 0x1406FDCE0 (EmProviderRegister.c)
 *     HalRegisterErrataCallbacks @ 0x140BCD860 (HalRegisterErrataCallbacks.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14057BEE0 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x14057C1E0 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x14057C218 (EmpSearchEntryDatabase.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  __int64 v6; // rbp
  void *v8; // r14
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 *v12; // rax
  signed __int8 v13; // cf
  __int64 *v14; // rbx
  __int64 Pool2; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 i; // r10
  __int64 v23; // r14
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r10
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rbp
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // r10
  __int64 v39; // r11
  _QWORD *v40; // rcx
  __int64 v41; // rax
  void *v42; // rcx
  unsigned int v43; // edx
  _QWORD *v44; // r8
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 j; // rbp
  __int64 v51; // rdx
  _QWORD *k; // rsi
  __int64 m; // rbp
  __int64 v54; // rdx
  _QWORD *n; // rsi

  v6 = a3;
  v8 = a1;
  v10 = 0;
  v11 = 0;
  v12 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v14 = v12;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v12, (__int64)&EmpDatabaseLock);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  if ( !a6 || (_DWORD)v6 && !a2 || a5 && !a4 )
  {
    v11 = -1073741811;
    goto LABEL_76;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
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
  v18 = ExAllocatePool2(0x100uLL);
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
  if ( *(_DWORD *)(v16 + 32) )
  {
    v21 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v16 + 24) = v21;
    if ( !v21 )
      goto LABEL_14;
  }
  for ( i = 0LL; ; i = (unsigned int)(v26 + 1) )
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
          v51 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * j);
          _InterlockedIncrement((volatile signed __int32 *)(v51 + 16));
          for ( k = *(_QWORD **)(v51 + 72); k; k = (_QWORD *)*k )
            EmpQueueRuleUpdateState(*(k - 1), 0LL);
        }
        for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v16 + 48); m = (unsigned int)(m + 1) )
        {
          v54 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8 * m);
          _InterlockedIncrement((volatile signed __int32 *)(v54 + 24));
          for ( n = *(_QWORD **)(v54 + 48); n; n = (_QWORD *)*n )
            EmpQueueRuleUpdateState(*(n - 1), 0LL);
        }
        if ( v8 )
          PsReferenceSiloContext(v8);
        *(_QWORD *)v16 = v8;
        *a6 = v16;
        goto LABEL_76;
      }
      v33 = ExAllocatePool2(0x100uLL);
      *(_QWORD *)(v16 + 40) = v33;
      if ( v33 )
      {
        *(_DWORD *)(v16 + 48) = a5;
        v34 = 0LL;
        while ( (unsigned int)v34 < a5 )
        {
          v35 = *(_QWORD *)(a4 + 24 * v34 + 8);
          if ( !v35 )
            goto LABEL_42;
          v36 = *(_QWORD **)(a4 + 24 * v34);
          if ( !v36 )
            goto LABEL_42;
          v37 = EmpSearchCallbackDatabase(v36);
          v40 = v37;
          if ( !v37 )
            goto LABEL_41;
          v41 = v37[2];
          if ( v41 && v41 != v35 )
          {
            v11 = -1073741771;
            goto LABEL_43;
          }
          *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8 * v38) = v40;
          v34 = (unsigned int)(v38 + 1);
          v40[2] = *(_QWORD *)(a4 + 8 * v39 + 8);
          v40[4] = *(_QWORD *)(a4 + 8 * v39 + 16);
        }
        v8 = a1;
        goto LABEL_62;
      }
LABEL_14:
      v11 = -1073741670;
      goto LABEL_43;
    }
    v23 = 3 * i;
    v24 = *(_QWORD **)(a2 + 24 * i);
    if ( !v24 )
      break;
    v25 = EmpSearchEntryDatabase(v24);
    v27 = v25;
    if ( !v25 )
    {
LABEL_41:
      v11 = -1073741275;
      goto LABEL_43;
    }
    *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * v26) = v25;
    v28 = *(_QWORD *)(a2 + 8 * v23 + 8);
    if ( v28 )
    {
      v29 = (_QWORD *)(*(_QWORD *)(v16 + 24) + 32LL * v10);
      *v29 = v28;
      v29[1] = *(_QWORD *)(a2 + 8 * v23 + 16);
      v30 = v27 + 7;
      v31 = (_QWORD *)v27[8];
      v32 = v29 + 2;
      if ( (_QWORD *)*v31 != v30 )
        goto LABEL_60;
      *v32 = v30;
      ++v10;
      v32[1] = v31;
      *v31 = v32;
      v30[1] = v32;
    }
  }
LABEL_42:
  v11 = -1073741811;
LABEL_43:
  v42 = *(void **)(v16 + 8);
  if ( v42 )
    ExFreePoolWithTag(v42, 0x72704D45u);
  if ( *(_QWORD *)(v16 + 24) )
  {
    v43 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v44 = (_QWORD *)(32LL * v43 + *(_QWORD *)(v16 + 24) + 16LL);
        v45 = *v44;
        if ( *(_QWORD **)(*v44 + 8LL) != v44 )
          break;
        v46 = (_QWORD *)v44[1];
        if ( (_QWORD *)*v46 != v44 )
          break;
        ++v43;
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        if ( v43 >= v10 )
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
      v47 = 0LL;
      v48 = a5;
      do
      {
        v49 = *(_QWORD *)(v47 + *(_QWORD *)(v16 + 40));
        if ( v49 && !*(_DWORD *)(v49 + 24) )
          *(_QWORD *)(v49 + 16) = 0LL;
        v47 += 8LL;
        --v48;
      }
      while ( v48 );
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
