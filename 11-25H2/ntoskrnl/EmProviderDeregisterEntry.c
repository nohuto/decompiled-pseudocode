/*
 * XREFs of EmProviderDeregisterEntry @ 0x1406FDC50
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x14057BE50 (EmpProviderDeregisterEntry.c)
 */

__int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rbx

  v2 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v2, (__int64)&EmpDatabaseLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
