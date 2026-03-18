/*
 * XREFs of EmProviderRegisterEntry @ 0x1406FDD20
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14057BEE0 (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x14057C218 (EmpSearchEntryDatabase.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  __int64 *v10; // rax
  __int64 *v11; // rsi
  _QWORD *v12; // rbp
  __int64 i; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  __int64 Pool2; // rax
  void *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  void *v23; // rcx

  v8 = 0LL;
  v9 = 0;
  v10 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (__int64)&EmpDatabaseLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  if ( a2 && a1 && a3 && a4 && *(_QWORD *)a3 && *(_DWORD *)(a3 + 8) )
  {
    v12 = EmpSearchEntryDatabase(a2);
    if ( !v12 )
    {
      v9 = -1073741275;
      goto LABEL_30;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v14 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * i);
      v15 = *v14 - *a2;
      if ( *v14 == *a2 )
        v15 = v14[1] - a2[1];
      if ( !v15 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v8 = Pool2;
        if ( Pool2
          && (*(_QWORD *)Pool2 = v12,
              *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a3 + 8),
              v17 = (void *)ExAllocatePool2(0x100uLL),
              (*(_QWORD *)(v8 + 8) = v17) != 0LL) )
        {
          memmove(v17, *(const void **)a3, *(unsigned int *)(v8 + 16));
          v18 = *(_QWORD **)(a1 + 64);
          v19 = (_QWORD *)(v8 + 40);
          if ( *v18 != a1 + 56
            || (*v19 = a1 + 56,
                *(_QWORD *)(v8 + 48) = v18,
                *v18 = v19,
                *(_QWORD *)(a1 + 64) = v19,
                v20 = (_QWORD *)v12[6],
                v21 = (_QWORD *)(v8 + 24),
                (_QWORD *)*v20 != v12 + 5) )
          {
            __fastfail(3u);
          }
          *v21 = v12 + 5;
          *(_QWORD *)(v8 + 32) = v20;
          *v20 = v21;
          v12[6] = v21;
          v22 = (_QWORD *)v12[9];
          v12[4] = v21;
          while ( v22 )
          {
            EmpQueueRuleUpdateState(*(v22 - 1), (__int64)v12);
            v22 = (_QWORD *)*v22;
          }
          *a4 = v8;
        }
        else
        {
          v9 = -1073741670;
        }
        goto LABEL_30;
      }
    }
  }
  v9 = -1073741811;
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  if ( v9 < 0 && v8 )
  {
    v23 = *(void **)(v8 + 8);
    if ( v23 )
      ExFreePoolWithTag(v23, 0x72704D45u);
    ExFreePoolWithTag((PVOID)v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
