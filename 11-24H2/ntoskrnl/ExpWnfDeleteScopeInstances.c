/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x1407C67A8
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140772C14 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpWnfFreeScopeInstance @ 0x140A58A14 (ExpWnfFreeScopeInstance.c)
 */

__int64 __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  char *v6; // rax
  char *v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx

  v4 = (unsigned __int64 *)(a1 + 32 + 24LL * a2);
  v5 = a1 + 40 + 24LL * a2;
  v6 = (char *)KeAbPreAcquire((__int64)v4, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v7 )
    v7[10] = 1;
  while ( 1 )
  {
    v8 = *(__int64 **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v9 = *v8, *(__int64 **)(*v8 + 8) != v8) )
      __fastfail(3u);
    *(_QWORD *)v5 = v9;
    *(_QWORD *)(v9 + 8) = v5;
    if ( v8 == (__int64 *)v5 )
      break;
    *v8 = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(v8 - 4);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  return KeAbPostRelease((ULONG_PTR)v4);
}
