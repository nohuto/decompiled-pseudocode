/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x1407C6348
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1407729F4 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpWnfFreeScopeInstance @ 0x140A604C4 (ExpWnfFreeScopeInstance.c)
 */

__int64 __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx

  v4 = (unsigned __int64 *)(a1 + 32 + 24LL * a2);
  v5 = a1 + 40 + 24LL * a2;
  v6 = KeAbPreAcquire((__int64)v4, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v6, (__int64)v4);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
