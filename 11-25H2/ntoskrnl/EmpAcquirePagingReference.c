/*
 * XREFs of EmpAcquirePagingReference @ 0x140B58708
 * Callers:
 *     EmClientQueryRuleState @ 0x140B584B0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B585D0 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // di
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rbx

  v0 = 0;
  v1 = KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v1, (__int64)&EmpPagingLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( dword_140F8DC98 < 0 )
  {
    v0 = 1;
    dword_140F8DC98 = dword_140F8DC98 & 0x80000000 | (dword_140F8DC98 + 1) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
