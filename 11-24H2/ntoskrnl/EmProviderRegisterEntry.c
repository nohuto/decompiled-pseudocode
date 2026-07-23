/*
 * XREFs of EmProviderRegisterEntry @ 0x1407077C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpQueueRuleUpdateState @ 0x14057C690 (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x14057C9C8 (EmpSearchEntryDatabase.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  int v9; // ebx
  char *v10; // rax
  char *v11; // rsi
  _QWORD *v12; // rbp
  __int64 i; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  _QWORD *Pool2; // rax
  unsigned int v17; // eax
  void *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  void *v24; // rcx

  v8 = 0LL;
  v9 = 0;
  v10 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (__int64)&EmpDatabaseLock);
  if ( v11 )
    v11[10] = 1;
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
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x38uLL, 0x72704D45u);
        v8 = Pool2;
        if ( Pool2
          && (*Pool2 = v12,
              v17 = *(_DWORD *)(a3 + 8),
              *((_DWORD *)v8 + 4) = v17,
              v18 = (void *)ExAllocatePool2(0x100uLL, v17, 0x72704D45u),
              (v8[1] = v18) != 0LL) )
        {
          memmove(v18, *(const void **)a3, *((unsigned int *)v8 + 4));
          v19 = *(_QWORD **)(a1 + 64);
          v20 = v8 + 5;
          if ( *v19 != a1 + 56
            || (*v20 = a1 + 56,
                v8[6] = v19,
                *v19 = v20,
                *(_QWORD *)(a1 + 64) = v20,
                v21 = (_QWORD *)v12[6],
                v22 = v8 + 3,
                (_QWORD *)*v21 != v12 + 5) )
          {
            __fastfail(3u);
          }
          *v22 = v12 + 5;
          v8[4] = v21;
          *v21 = v22;
          v12[6] = v22;
          v23 = (_QWORD *)v12[9];
          v12[4] = v22;
          while ( v23 )
          {
            EmpQueueRuleUpdateState(*(v23 - 1), (__int64)v12);
            v23 = (_QWORD *)*v23;
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
    v24 = (void *)v8[1];
    if ( v24 )
      ExFreePoolWithTag(v24, 0x72704D45u);
    ExFreePoolWithTag(v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
