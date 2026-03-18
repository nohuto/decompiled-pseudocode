/*
 * XREFs of EmProviderDeregisterEntry @ 0x140709B30
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EmpProviderDeregisterEntry @ 0x14057F170 (EmpProviderDeregisterEntry.c)
 */

__int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  _QWORD *v2; // rax
  signed __int8 v3; // cf
  _QWORD *v4; // rbx

  v2 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, (__int64)v2, (__int64)&EmpDatabaseLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
