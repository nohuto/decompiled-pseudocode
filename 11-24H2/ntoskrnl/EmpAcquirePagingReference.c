/*
 * XREFs of EmpAcquirePagingReference @ 0x140B6A678
 * Callers:
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B6A540 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // di
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rbx

  v0 = 0;
  v1 = (char *)KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v1, (__int64)&EmpPagingLock);
  if ( v3 )
    v3[10] = 1;
  if ( dword_140F8E628 < 0 )
  {
    v0 = 1;
    dword_140F8E628 = dword_140F8E628 & 0x80000000 | (dword_140F8E628 + 1) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
