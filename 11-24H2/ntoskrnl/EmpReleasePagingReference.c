/*
 * XREFs of EmpReleasePagingReference @ 0x140B685E4
 * Callers:
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B68400 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 EmpReleasePagingReference()
{
  _QWORD *v0; // rax
  signed __int8 v1; // cf
  _QWORD *v2; // rbx

  v0 = KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, (__int64)v0, (__int64)&EmpPagingLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  dword_140F8E458 = dword_140F8E458 & 0x80000000 | (dword_140F8E458 - 1) & 0x7FFFFFFF;
  if ( (dword_140F8E458 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
