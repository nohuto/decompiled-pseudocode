/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x14057F370
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EmpUpdateRuleState @ 0x140491B80 (EmpUpdateRuleState.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 EmpRuleUpdateWorkerThread()
{
  _QWORD *v0; // rax
  signed __int8 v1; // cf
  _QWORD *v2; // rbx
  __int64 *i; // rsi
  __int64 *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 result; // rax

  v0 = KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, (__int64)v0, (__int64)&EmpEvaluationQueueLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  for ( i = (__int64 *)EmpRuleUpdateQueue; EmpRuleUpdateQueue; i = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    v4 = i - 1;
    v5 = KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v6 = v5;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, (__int64)v5, (__int64)&EmpDatabaseLock);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    EmpUpdateRuleState(*v4, v4[2]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag(v4, 0x75714D45u);
    v7 = KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
    v8 = v7;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, (__int64)v7, (__int64)&EmpEvaluationQueueLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
