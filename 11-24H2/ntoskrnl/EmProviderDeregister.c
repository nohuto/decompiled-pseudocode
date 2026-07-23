/*
 * XREFs of EmProviderDeregister @ 0x140707520
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpProviderDeregisterEntry @ 0x14057C600 (EmpProviderDeregisterEntry.c)
 *     EmpQueueRuleUpdateState @ 0x14057C690 (EmpQueueRuleUpdateState.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EmProviderDeregister(char *P)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rbx
  unsigned int i; // edx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 j; // rbp
  _QWORD *k; // rsi
  char *v11; // rsi
  char *v12; // rcx
  __int64 m; // rsi
  _QWORD *n; // r14
  void *v15; // rcx

  if ( P )
  {
    v2 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v4 = v2;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v2, (__int64)&EmpDatabaseLock);
    if ( v4 )
      v4[10] = 1;
    if ( *((_QWORD *)P + 3) )
    {
      for ( i = 0; i < *((_DWORD *)P + 8); *(_QWORD *)(v7 + 8) = v8 )
      {
        v6 = (_QWORD *)(32LL * i + *((_QWORD *)P + 3) + 16LL);
        v7 = *v6;
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
          __fastfail(3u);
        *v8 = v7;
        ++i;
      }
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x72704D45u);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)P + 4); j = (unsigned int)(j + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 16LL),
             0xFFFFFFFF) == 1 )
      {
        for ( k = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 72LL); k; k = (_QWORD *)*k )
          EmpQueueRuleUpdateState(*(k - 1), 0LL);
      }
    }
    v11 = (char *)*((_QWORD *)P + 7);
    while ( v11 != P + 56 )
    {
      v12 = v11 - 40;
      v11 = *(char **)v11;
      EmpProviderDeregisterEntry(v12);
    }
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)P + 12); m = (unsigned int)(m + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 24LL),
             0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 16LL) = 0LL;
        for ( n = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 48LL); n; n = (_QWORD *)*n )
          EmpQueueRuleUpdateState(*(n - 1), 0LL);
      }
    }
    if ( *(_QWORD *)P )
      ObfDereferenceObject(*(PVOID *)P);
    v15 = (void *)*((_QWORD *)P + 5);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x72704D45u);
    ExFreePoolWithTag(P, 0x72704D45u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  }
}
