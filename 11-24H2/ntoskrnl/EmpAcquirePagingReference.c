/*
 * XREFs of EmpAcquirePagingReference @ 0x140B68538
 * Callers:
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B68400 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // di
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx

  v0 = 0;
  v1 = KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, (__int64)v1, (__int64)&EmpPagingLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( dword_140F8E458 < 0 )
  {
    v0 = 1;
    dword_140F8E458 = dword_140F8E458 & 0x80000000 | (dword_140F8E458 + 1) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
