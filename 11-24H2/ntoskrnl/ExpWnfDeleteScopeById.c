/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1409001E8
 * Callers:
 *     PspDereferenceSessionFinal @ 0x14077B930 (PspDereferenceSessionFinal.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpWnfFindScopeInstance @ 0x1409F4530 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x140A58A14 (ExpWnfFreeScopeInstance.c)
 */

struct _LIST_ENTRY *__fastcall ExpWnfDeleteScopeById(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // r9
  char *v8; // r14
  unsigned __int64 *v9; // rbx
  char *v10; // rax
  char *v11; // rdi
  __int64 ScopeInstance; // rax
  void *v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  result = PsGetCurrentServerSiloGlobals();
  Flink = result[55].Flink;
  if ( Flink )
  {
    v8 = (char *)Flink + 24 * v6;
    v9 = (unsigned __int64 *)&Flink[2] + 3 * v6;
    v10 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
    ScopeInstance = ExpWnfFindScopeInstance(v8 + 40, a2, a3);
    v13 = (void *)ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = (_QWORD *)(ScopeInstance + 32);
      v15 = *(_QWORD *)(ScopeInstance + 32);
      v16 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    result = (struct _LIST_ENTRY *)KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
      return (struct _LIST_ENTRY *)ExpWnfFreeScopeInstance(v13);
  }
  return result;
}
