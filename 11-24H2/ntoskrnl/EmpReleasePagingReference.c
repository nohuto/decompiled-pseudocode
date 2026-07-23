/*
 * XREFs of EmpReleasePagingReference @ 0x140B6A724
 * Callers:
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B6A540 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 EmpReleasePagingReference()
{
  char *v0; // rax
  signed __int8 v1; // cf
  char *v2; // rbx

  v0 = (char *)KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v0, (__int64)&EmpPagingLock);
  if ( v2 )
    v2[10] = 1;
  dword_140F8E628 = dword_140F8E628 & 0x80000000 | (dword_140F8E628 - 1) & 0x7FFFFFFF;
  if ( (dword_140F8E628 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
