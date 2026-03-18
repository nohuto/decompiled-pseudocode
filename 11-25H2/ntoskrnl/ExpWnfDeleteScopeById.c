/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1408E18E8
 * Callers:
 *     PspDereferenceSessionFinal @ 0x14076BEE0 (PspDereferenceSessionFinal.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpWnfFindScopeInstance @ 0x1409FE570 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x140A60194 (ExpWnfFreeScopeInstance.c)
 */

struct _LIST_ENTRY *__fastcall ExpWnfDeleteScopeById(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // r9
  char *v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rdi
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
    v10 = KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
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
