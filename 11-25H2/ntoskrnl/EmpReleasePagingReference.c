/*
 * XREFs of EmpReleasePagingReference @ 0x140B587B4
 * Callers:
 *     EmClientQueryRuleState @ 0x140B584B0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140B585D0 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 EmpReleasePagingReference()
{
  __int64 *v0; // rax
  signed __int8 v1; // cf
  __int64 *v2; // rbx

  v0 = KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v0, (__int64)&EmpPagingLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  dword_140F8DC98 = dword_140F8DC98 & 0x80000000 | (dword_140F8DC98 - 1) & 0x7FFFFFFF;
  if ( (dword_140F8DC98 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
