/*
 * XREFs of EmProviderDeregisterEntry @ 0x1407076F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpProviderDeregisterEntry @ 0x14057C600 (EmpProviderDeregisterEntry.c)
 */

__int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rbx

  v2 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v2, (__int64)&EmpDatabaseLock);
  if ( v4 )
    v4[10] = 1;
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
